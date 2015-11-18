import re
import time
from vplants.autowig.asg import FileProxy
from vplants.autowig.middle_end import middle_end
from vplants.autowig.tools import lower

class BootstrapMiddleEndPlugin(object):
    """PyClangLite bootstrap plugin for the AutoWIG middle-end"""

    implements = 'middle-end'

    tags = ['PyClangLite']

    def implementation(self, asg, *args, **kwargs):
        """
        """
        prev = time.time()

        #for filenode in asg.files():
        #    filenode.is_primary = True

        curr = time.time()

        diagnostic = middle_end['default'].implementation(asg, *args, **kwargs)

        diagnostic.preprocessing = curr - prev
        return diagnostic

class BootstrapBackEndPlugin(object):
    """PyClangLite bootstrap plugin for the AutoWIG back-end"""

    implements = 'back-end'

    tags = ['PyClangLite']

    def implementation(self, asg, filename, libclang, **kwargs):
        from vplants.autowig.back_end import back_end
        prev = time.time()

        for node in asg.nodes():
            node.boost_python_export = False

        node = asg.classes('^(class |union |struct |)::llvm::StringRef$').pop()
        node.boost_python_export = True
        if libclang:
            asg._nodes[node.node]['is_abstract'] = False
            asg._nodes[node.node]['_is_copyable'] = True

        asg.classes('^(class |union |struct |)::clang::ASTUnit$').pop().boost_python_export = True

        asg.classes('^(class |union |struct |)::clang::ASTContext$').pop().boost_python_export = True

        for function in asg.functions('^::clang::ASTContext::getSourceManager'):
            if function.result_type.globalname in [prefix + '::clang::SourceManager &' for prefix in ['', 'class ']]:
                function.is_overloaded = True
                function.boost_python_export = True
                break

        node = asg.classes('^(class |union |struct |)::clang::FileID$').pop()
        node.boost_python_export = True
        if libclang:
            asg._nodes[node.node]['is_abstract'] = False
            asg._nodes[node.node]['_is_copyable'] = True
        asg.functions('^::clang::FileID::isInvalid').pop().boost_python_export = True

        node = asg.classes('^(class |union |struct |)::clang::SourceLocation$').pop()
        node.boost_python_export = True
        if libclang:
            asg._nodes[node.node]['is_abstract'] = False
            asg._nodes[node.node]['_is_copyable'] = True

        asg.classes('^(class |union |struct |)::clang::SourceManager$').pop().boost_python_export = True
        for function in asg.functions('^::clang::SourceManager::getFileID'):
            if function.localname == 'getFileID':
                function.boost_python_export = True
                break
        asg.functions('^::clang::SourceManager::getFilename').pop().boost_python_export = True
        asg.functions('^::clang::SourceManager::getIncludeLoc').pop().boost_python_export = True

        for node in asg.classes('^(class | union|struct |)::clang::([a-zA-Z]*(Decl|Type)|DeclContext)$'):
            node.boost_python_export = True

        asg.enums('^(enum |)::clang::AccessSpecifier').pop().boost_python_export = True

        asg.classes('^(class | union|struct |)::clang::CXXBaseSpecifier').pop().boost_python_export = True
        for function in asg.functions('^::clang::CXXBaseSpecifier::getAccessSpecifier', free=False):
            if function.localname == 'getAccessSpecifier':
                function.boost_python_export = True
                break
        for function in asg.functions('^::clang::CXXBaseSpecifier::getType', free=False):
            if function.localname == 'getType':
                function.boost_python_export = True
                break

        node = asg.classes('^(class | union|struct |)::clang::QualType$').pop()
        node.boost_python_export = True
        if libclang:
            asg._nodes[node.node]['is_abstract'] = False
            asg._nodes[node.node]['_is_copyable'] = True
        asg.functions('^::clang::QualType::isLocalConstQualified', free=False).pop().boost_python_export = True
        asg.functions('^::clang::QualType::isLocalVolatileQualified', free=False).pop().boost_python_export = True
        asg.functions('^::clang::QualType::getTypePtrOrNull', free=False).pop().boost_python_export = True

        asg.functions('^(class | union|struct |)::clang::Type::isBuiltinType', free=False).pop().boost_python_export = True
        for function in asg.functions('^::clang::Type::isSpecificBuiltinType', free=False):
            if function.localname == 'isSpecificBuiltinType':
                function.boost_python_export = True
                break
        asg.functions('^::clang::Type::isPointerType', free=False).pop().boost_python_export = True
        asg.functions('^::clang::Type::isLValueReferenceType', free=False).pop().boost_python_export = True
        asg.functions('^::clang::Type::isRValueReferenceType', free=False).pop().boost_python_export = True
        asg.functions('^::clang::Type::getPointeeType', free=False).pop().boost_python_export = True
        asg.functions('^::clang::Type::isStructureOrClassType', free=False).pop().boost_python_export = True
        asg.functions('^::clang::Type::isEnumeralType', free=False).pop().boost_python_export = True
        asg.functions('^::clang::Type::isUnionType', free=False).pop().boost_python_export = True
        asg.functions('^::clang::Type::getAsTagDecl', free=False).pop().boost_python_export = True
        asg.enums('(enum |)::clang::Type::TypeClass').pop().boost_python_export = True
        asg.functions('^::clang::Type::isBuiltinType', free=False).pop().boost_python_export = True
        asg.functions('^::clang::Type::getUnqualifiedDesugaredType', free=False).pop().boost_python_export = True
        asg.functions('^::clang::Type::getCanonicalTypeInternal', free=False).pop().boost_python_export = True
        for function in asg.functions('^::clang::Type::getTypeClass', free=False):
            if function.localname == 'getTypeClass':
                function.boost_python_export = True
                break

        asg.functions('::clang::ElaboratedType::getNamedType', free=False).pop().boost_python_export = True
        asg.functions('::clang::ElaboratedType::desugar', free=False).pop().boost_python_export = True

        asg.enums('^(enum |)::clang::BuiltinType::Kind$').pop().boost_python_export = True

        asg.functions('^::clang::Decl::isImplicit', free=False).pop().boost_python_export = True
        asg.functions('^::clang::Decl::getAccessUnsafe', free=False).pop().boost_python_export = True
        asg.enums('(enum |)::clang::Decl::Kind').pop().boost_python_export = True
        asg.functions('^::clang::Decl::getKind').pop().boost_python_export = True
        asg.functions('^::clang::Decl::getLocation').pop().boost_python_export = True
        asg.functions('^::clang::Decl::getASTContext').pop().boost_python_export = True
        for function in asg.functions('^::clang::Decl::getDeclContext', free=False):
            if function.result_type.globalname in [prefix + '::clang::DeclContext *' for prefix in ['', 'class ']]:
                function.is_overloaded = True
                function.boost_python_export = True
                break
        for function in asg.functions('^::clang::DeclContext::getDeclKind', free=False):
            if function.localname == 'getDeclKind':
                function.boost_python_export = True
                break
        for function in asg.functions('^::clang::DeclContext::getParent', free=False):
            if function.result_type.globalname in [prefix + '::clang::DeclContext *' for prefix in ['', 'class ']]:
                function.is_overloaded = True
                function.boost_python_export = True
                break
        for function in asg.functions('^::clang::DeclContext::getLexicalParent', free=False):
            if function.result_type.globalname in [prefix + '::clang::DeclContext *' for prefix in ['', 'class ']]:
                function.is_overloaded = True
                function.boost_python_export = True
                break
        for function in asg.functions('^::clang::DeclContext::getLookupParent', free=False):
            if function.result_type.globalname in [prefix + '::clang::DeclContext *' for prefix in ['', 'class ']]:
                function.is_overloaded = True
                function.boost_python_export = True
                break

        asg.functions('^::clang::LinkageSpecDecl::getLanguage', free=False).pop().boost_python_export = True
        asg.enums('(enum |)::clang::LinkageSpecDecl::LanguageIDs').pop().boost_python_export = True

        asg.functions('^::clang::ValueDecl::getType').pop().boost_python_export = True

        asg.functions('^::clang::FieldDecl::isMutable').pop().boost_python_export = True

        for fct in asg.functions('^::clang::FunctionDecl::isDeleted'):
            if fct.localname == 'isDeleted':
                fct.boost_python_export = True
        asg.functions('^::clang::FunctionDecl::getNumParams').pop().boost_python_export = True
        for function in asg.functions('^::clang::FunctionDecl::getParamDecl', free=False):
            if function.result_type.globalname in [prefix + '::clang::ParmVarDecl *' for prefix in ['', 'class ']]:
                function.is_overloaded = True
                function.boost_python_export = True
        for function in asg.functions('^::clang::FunctionDecl::getReturnType', free=False):
            if function.localname == 'getReturnType':
                function.boost_python_export = True
                break

        for function in asg.functions('^::clang::CXXMethodDecl::isStatic', free=False):
            if function.localname == 'isStatic':
                function.boost_python_export = True
                break
        asg.functions('^::clang::CXXMethodDecl::isConst', free=False).pop().boost_python_export = True
        asg.functions('^::clang::CXXMethodDecl::isVolatile', free=False).pop().boost_python_export = True
        asg.functions('^::clang::CXXMethodDecl::isVirtual', free=False).pop().boost_python_export = True
        asg.functions('^::clang::CXXMethodDecl::isPure', free=False).pop().boost_python_export = True

        asg.functions('^::clang::TagDecl::isClass', free=False).pop().boost_python_export = True
        asg.functions('^::clang::TagDecl::isStruct', free=False).pop().boost_python_export = True
        asg.functions('^::clang::TagDecl::isUnion', free=False).pop().boost_python_export = True
        asg.functions('^::clang::TagDecl::hasNameForLinkage', free=False).pop().boost_python_export = True
        asg.functions('^::clang::TagDecl::getTypedefNameForAnonDecl', free=False).pop().boost_python_export = True
        for function in asg.functions('::clang::TagDecl::isCompleteDefinition', free=False):
            if function.localname == 'isCompleteDefinition':
                function.boost_python_export = True
                break

        asg.functions('^::clang::CXXRecordDecl::isAbstract', free=False).pop().boost_python_export = True
        asg.functions('^::clang::CXXRecordDecl::getNumBases', free=False).pop().boost_python_export = True
        asg.functions('^::clang::CXXRecordDecl::getNumVBases', free=False).pop().boost_python_export = True

        for function in asg.functions('^::clang::CXXConstructorDecl::isCopyConstructor'):
            if len(function.parameters) == 0:
                function.boost_python_export = True
                function.asg._nodes[function.node]['is_const'] = True
        for function in asg.functions('^::clang::CXXConstructorDecl::isMoveConstructor'):
            if len(function.parameters) == 0:
                function.boost_python_export = True
                function.asg._nodes[function.node]['is_const'] = True
        asg.functions('^::clang::ClassTemplateDecl::isThisDeclarationADefinition', free=False).pop().boost_python_export = True

        asg.functions('^::clang::ClassTemplateSpecializationDecl::getTemplateArgs', free=False).pop().boost_python_export = True
        asg.functions('^::clang::ClassTemplateSpecializationDecl::isExplicitSpecialization', free=False).pop().boost_python_export = True
        for function in asg.functions('^::clang::ClassTemplateSpecializationDecl::getSpecializedTemplate', free=False):
            if function.localname == 'getSpecializedTemplate':
                function.boost_python_export = True
                break
        asg.classes('^(class |union |struct |)::clang::TemplateArgumentList$').pop().boost_python_export = True
        asg.functions('^::clang::TemplateArgumentList::get', free=False).pop().boost_python_export = True
        asg.functions('^::clang::TemplateArgumentList::size', free=False).pop().boost_python_export = True

        asg.classes('^(class |union |struct |)::clang::TemplateArgument$').pop().boost_python_export = True
        asg.enums('^(enum |)::clang::TemplateArgument::ArgKind').pop().boost_python_export = True
        asg.functions('^::clang::TemplateArgument::getKind', free=False).pop().boost_python_export = True
        asg.functions('^::clang::TemplateArgument::getAsType', free=False).pop().boost_python_export = True
        asg.functions('^::clang::TemplateArgument::getAsDecl', free=False).pop().boost_python_export = True
        asg.functions('^::clang::TemplateArgument::getIntegralType', free=False).pop().boost_python_export = True

        asg.functions('^::clang::TypedefNameDecl::getUnderlyingType', free=False).pop().boost_python_export = True

        for enum in asg.enums():
            if not enum.clean:
                for constant in enum.constants:
                    constant.boost_python_export = True

        decl = asg.classes('^(class |struct |)::clang::Decl$').pop()
        decl.is_copyable = False
        for inheritor in decl.inheritors(True):
            inheritor.is_copyable = False

        asg['::clang'].boost_python_export = True
        asg['::llvm'].boost_python_export = True

        if libclang:
            asg['::llvm::StringRef'].header.is_primary = True
        else:
            asg['class ::llvm::StringRef'].header.is_primary = True

        if libclang:
            asg['::clang::FileID'].header.is_primary = True
        else:
            asg['class ::clang::FileID'].header.is_primary = True

        diagnostic = back_end['boost_python:in_memory'].implementation(asg, filename, **kwargs)
        modulenode = asg[filename]
        content = "#include <boost/python.hpp>\n"
        declcontext = asg.classes('^(class |struct |)::clang::DeclContext$').pop()
        inheritors = [inheritor for inheritor in declcontext.inheritors(True)
                if inheritor.localname in [constant.localname+'Decl'
                    for constant in asg['enum ::clang::Decl::Kind'].constants]]
        headers = {header.globalname : header
                for header in [inheritor.header
                    for inheritor in inheritors+[declcontext]]}.values()
        for header in headers:
            content += '#include <' + re.sub('(.*)include/(.*)', r'\2', header.globalname) + '>\n'

        content += '\nnamespace autowig\n{\n'
        for inheritor in inheritors:
            content += '\t' + inheritor.globalname + ' * cast_as_' + lower(inheritor.localname) + '(::clang::DeclContext* decl)\n'
            content += '\t{ return static_cast< ' + inheritor.globalname + ' * >(decl); }\n\n'
        content = content[:-1] + '}\n\n'

        content += __CAST__
        for inheritor in inheritors:
            content += '\tboost::python::def("cast_as_' + lower(inheritor.localname) + '", ::autowig::cast_as_' + lower(inheritor.localname) +', boost::python::return_value_policy< boost::python::reference_existing_object >());\n'
        content += '}'
        directory = modulenode.parent.globalname
        exportnode = modulenode.add_boost_python_export(directory + 'export_namespace_clang_cast.cpp')
        exportnode.content = content
        exportnode = modulenode.add_boost_python_export(directory + 'export_namespace_clang_tooling.cpp')
        exportnode.content = __TOOLING__
        curr = time.time()
        diagnostic.elapsed = curr - prev
        return diagnostic

__CAST__ = """void export_namespace_clang_cast()
{
    std::string clang_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object clang_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_name.c_str()))));
    boost::python::scope().attr("clang") = clang_module;
    boost::python::scope clang_scope = clang_module;
    std::string cast_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".cast");
    boost::python::object cast_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(cast_name.c_str()))));
    boost::python::scope().attr("cast") = cast_module;
    boost::python::scope cast_scope = cast_module;"""

__TOOLING__ = """#include <boost/python.hpp>
#include <clang/Frontend/ASTUnit.h>
#include <clang/Tooling/Tooling.h>
#include <clang/AST/Decl.h>
#include <clang/AST/DeclTemplate.h>
#include <clang/AST/Type.h>
#include <clang/AST/PrettyPrinter.h>
#include <llvm/Support/raw_ostream.h>
#include <clang/AST/Mangle.h>
#include <llvm/IR/DataLayout.h>
#include <llvm/IR/Mangler.h>
#include <clang/Basic/TargetInfo.h>
#include <iostream>

namespace autowig
{
    clang::ASTUnit* build_ast_from_code_with_args(const std::string& _code, boost::python::object _args)
    {
        std::vector< std::string > args(boost::python::len(_args));
        for(unsigned int i = 0; i < args.size(); ++i)
        { args[i] = boost::python::extract< std::string >(_args[i]); }
        llvm::Twine code(_code);
        return clang::tooling::buildASTFromCodeWithArgs(code, args).release();
    }

    unsigned int ast_get_nb_children(clang::ASTUnit& ast)
    {
        unsigned int nb = 0;
        for(auto it = ast.top_level_begin(); it != ast.top_level_end(); ++it)
        { ++nb; }
        return nb;
    }

    unsigned int tcls_get_nb_children(const clang::ClassTemplateDecl& cls)
    {
        unsigned int nb = 0;
        for(auto it = cls.spec_begin(); it != cls.spec_end(); ++it)
        { ++nb; }
        return nb;
    }

    unsigned int decl_get_nb_children(clang::DeclContext& decl)
    {
        unsigned int nb = 0;
        for(auto it = decl.decls_begin(); it != decl.decls_end(); ++it)
        { ++nb; }
        return nb;
    }

    clang::Decl* ast_get_child(clang::ASTUnit& ast, const unsigned int& child)
    {
        auto it = ast.top_level_begin();
        for(unsigned int i = 0; i < child; ++i)
        { ++it; }
        return *it;
    }

    clang::Decl* decl_get_child(const clang::DeclContext& decl, const unsigned int& child)
    {
        auto it = decl.decls_begin();
        for(unsigned int i = 0; i < child; ++i)
        { ++it; }
        return *it;
    }

    clang::Decl* tcls_get_child(const clang::ClassTemplateDecl& cls, const unsigned int& child)
    {
        auto it = cls.spec_begin();
        for(unsigned int i = 0; i < child; ++i)
        { ++it; }
        return *it;
    }

    std::string (clang::QualType::*get_as_string)() const = &clang::QualType::getAsString;

    std::string (clang::NamedDecl::*get_name_as_string)() const = &clang::NamedDecl::getNameAsString;

    std::string spec_get_name_as_string(clang::ClassTemplateSpecializationDecl* spec)
    {
        std::string spelling = "";
        llvm::raw_string_ostream os(spelling);
        os << spec->getName();
        const clang::TemplateArgumentList &args = spec->getTemplateArgs();
        clang::LangOptions lang;
        lang.CPlusPlus = true;
        clang::PrintingPolicy policy(lang);
        policy.SuppressScope = false;
        clang::TemplateSpecializationType::PrintTemplateArgumentList(os, args.data(),
                                                                  args.size(),
                                                                  policy);
        return os.str();
    }

    clang::NamespaceDecl * decl_cast_as_namespace(clang::DeclContext * decl)
    { return static_cast< clang::NamespaceDecl * >(decl); }

    clang::RecordDecl * decl_cast_as_record(clang::DeclContext * decl)
    { return static_cast< clang::RecordDecl * >(decl); }

    std::string decl_spelling(const clang::NamedDecl& decl)
    {
        std::string spelling = "";
        llvm::raw_string_ostream os(spelling);
        clang::LangOptions lang;
        lang.CPlusPlus = true;
        clang::PrintingPolicy policy(lang);
        policy.SuppressScope = false;
        decl.getNameForDiagnostic(os, policy, true);
        return os.str();
    }

    unsigned int cxxrecord_get_nb_constructors(const clang::CXXRecordDecl& decl)
    {
        unsigned int nb = 0;
        for(auto it = decl.ctor_begin(); it != decl.ctor_end(); ++it)
        { ++nb; }
        return nb;
    }

    clang::Decl* cxxrecord_get_constructor(const clang::CXXRecordDecl& decl, const unsigned int& index)
    {
        auto it = decl.ctor_begin();
        for(unsigned int i = 0; i < index; ++i)
        { ++it; }
        return *it;
    }

    bool cxxrecord_is_copyable(const clang::CXXRecordDecl& decl)
    {
        auto it = decl.ctor_begin();
        bool res = true;//(it != decl.ctor_end());
        while(res && it != decl.ctor_end())
        {
            res = !(*it)->isCopyConstructor();
            if(res)
            { ++it; }
        }
        if(!res)
        { res = (*it)->isDeleted() || (*it)->getAccess() != clang::AccessSpecifier::AS_public; }
        else
        { res = !res; }
        return !res;
    }

    clang::CXXBaseSpecifier const * cxxrecord_get_base(const clang::CXXRecordDecl& decl, const unsigned int& base)
    {
        auto it = decl.bases_begin();
        for(unsigned int i = 0; i < base; ++i)
        { ++it; }
        return it;
    }

    clang::CXXBaseSpecifier const * cxxrecord_get_virtual_base(const clang::CXXRecordDecl& decl, const unsigned int& base)
    {
        auto it = decl.vbases_begin();
        for(unsigned int i = 0; i < base; ++i)
        { ++it; }
        return it;
    }

    /*std::string decl_get_filename(clang::Decl* decl)
    {
        clang::ASTContext & ast = decl->getASTContext();
        clang::SourceManager &  sm = ast.getSourceManager();
        return sm.getFilename(decl->getLocation()).str();
    }*/

    std::string string_ref_str(llvm::StringRef* sr)
    { return sr->str(); }

    std::string func_get_mangling(clang::FunctionDecl* decl)
    {

        clang::ASTContext & ast = decl->getASTContext();
        clang::MangleContext * mc = ast.createMangleContext();
        std::string frontend;
        llvm::raw_string_ostream frontendos(frontend);
        if(dynamic_cast< clang::CXXConstructorDecl * >(decl))
        { mc->mangleCXXCtor(dynamic_cast< clang::CXXConstructorDecl * >(decl), clang::CXXCtorType::Ctor_Complete, frontendos); }
        else if(dynamic_cast< clang::CXXDestructorDecl * >(decl))
        { mc->mangleCXXDtor(dynamic_cast< clang::CXXDestructorDecl * >(decl), clang::CXXDtorType::Dtor_Complete, frontendos); }
        else
        { mc->mangleName(decl, frontendos); }
        llvm::DataLayout* data_layout = new llvm::DataLayout(ast.getTargetInfo().getTargetDescription());
        llvm::Mangler middleend(data_layout);

        std::string backend;
        llvm::raw_string_ostream backendos(backend);
        middleend.getNameWithPrefix(backendos, llvm::Twine(frontendos.str()));
        delete data_layout;
        return backendos.str();
    }
}

void export_namespace_clang_tooling()
{
    std::string clang_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object clang_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_name.c_str()))));
    boost::python::scope().attr("clang") = clang_module;
    boost::python::scope clang_scope = clang_module;
    std::string tooling_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".tooling");
    boost::python::object tooling_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(tooling_name.c_str()))));
    boost::python::scope().attr("tooling") = tooling_module;
    boost::python::scope tooling_scope = tooling_module;
    boost::python::def("build_ast_from_code_with_args", ::autowig::build_ast_from_code_with_args, boost::python::return_value_policy< boost::python::reference_existing_object >());
    boost::python::def("get_name", &::clang::NamedDecl::getNameAsString);
    boost::python::def("ast_get_nb_children", ::autowig::ast_get_nb_children);
    boost::python::def("decl_get_nb_children", ::autowig::decl_get_nb_children);
    boost::python::def("tcls_get_nb_children", ::autowig::tcls_get_nb_children);
    boost::python::def("ast_get_child", ::autowig::ast_get_child, boost::python::return_value_policy< boost::python::reference_existing_object >());
    boost::python::def("decl_get_child", ::autowig::decl_get_child, boost::python::return_value_policy< boost::python::reference_existing_object >());
    boost::python::def("tcls_get_child", ::autowig::tcls_get_child, boost::python::return_value_policy< boost::python::reference_existing_object >());
    boost::python::def("get_as_string", ::autowig::get_as_string);
    boost::python::def("get_name", ::autowig::get_name_as_string);
    boost::python::def("spec_get_name", ::autowig::spec_get_name_as_string);
    boost::python::def("decl_cast_as_namespace", ::autowig::decl_cast_as_namespace, boost::python::return_value_policy< boost::python::reference_existing_object >());
    boost::python::def("decl_cast_as_record", ::autowig::decl_cast_as_record, boost::python::return_value_policy< boost::python::reference_existing_object >());
    boost::python::def("decl_spelling", ::autowig::decl_spelling);
    boost::python::def("cxxrecord_get_nb_constructors", ::autowig::cxxrecord_get_nb_constructors);
    boost::python::def("cxxrecord_get_constructor", ::autowig::cxxrecord_get_constructor, boost::python::return_value_policy< boost::python::reference_existing_object >());
    boost::python::def("cxxrecord_is_copyable", ::autowig::cxxrecord_is_copyable);
    boost::python::def("cxxrecord_is_copyable", ::autowig::cxxrecord_is_copyable);
    boost::python::def("cxxrecord_get_base", ::autowig::cxxrecord_get_base, boost::python::return_value_policy< boost::python::reference_existing_object >());
    boost::python::def("cxxrecord_get_virtual_base", ::autowig::cxxrecord_get_virtual_base, boost::python::return_value_policy< boost::python::reference_existing_object >());
    boost::python::def("string_ref_str", ::autowig::string_ref_str);
    boost::python::def("func_get_mangling", ::autowig::func_get_mangling);
}"""

__PYCLANGLITE__ = """
clang.LinkageSpecDecl.language_ids = clang._linkage_spec_decl.language_i_ds

if hasattr(clang.LinkageSpecDecl, 'language_i_ds'):
    del clang.LinkageSpecDecl.language_i_ds

if hasattr(clang.Type, 'is_l_value_reference_type'):
    clang.Type.is_lvalue_reference_type = clang.Type.is_l_value_reference_type
    del clang.Type.is_l_value_reference_type

if hasattr(clang.Type, 'is_r_value_reference_type'):
    clang.Type.is_rvalue_reference_type = clang.Type.is_r_value_reference_type
    del clang.Type.is_r_value_reference_type

def __str__(self):
    return 'ASTUnit'

clang.ASTUnit.__str__ = __str__
del __str__

def __str__(self):
    return self.__class__.__name__#[self.__class__.__name__.rindex('.')+1:]

clang.Decl.__str__ = __str__
del __str__

def __str__(self):
    text = self.get_name()
    kind = self.__class__.__name__#[self.__class__.__name__.rindex('.')+1:]
    return '{} {}'.format(kind, text)

clang.NamedDecl.__str__ = __str__
del __str__

if hasattr(clang.tooling, 'ast_get_nb_children'):
    clang.ASTUnit.get_nb_children = clang.tooling.ast_get_nb_children
    del clang.tooling.ast_get_nb_children
if hasattr(clang.tooling, 'decl_get_nb_children'):
    clang.DeclContext.get_nb_children = clang.tooling.decl_get_nb_children
    del clang.tooling.decl_get_nb_children
if hasattr(clang.tooling, 'cxx_record_get_nb_constructors'):
    clang.CXXRecordDecl.cxx_record_get_nb_constructors = clang.tooling.cxx_record_get_nb_constructors
    del clang.tooling.cxx_record_get_nb_constructors

if hasattr(clang.tooling, 'decl_cast_as_namespace'):
    clang.DeclContext.cast_as_namespace = clang.tooling.decl_cast_as_namespace
    del clang.tooling.decl_cast_as_namespace
if hasattr(clang.tooling, 'decl_cast_as_record'):
    clang.DeclContext.cast_as_record = clang.tooling.decl_cast_as_record
    del clang.tooling.decl_cast_as_record
if hasattr(clang.tooling, 'tcls_get_nb_children'):
    clang.ClassTemplateDecl.get_nb_children = clang.tooling.tcls_get_nb_children
    del clang.tooling.tcls_get_nb_children

if hasattr(clang.tooling, 'ast_get_child'):
    clang.ASTUnit.get_child = clang.tooling.ast_get_child
    del clang.tooling.ast_get_child
if hasattr(clang.tooling, 'decl_get_child'):
    clang.DeclContext.get_child = clang.tooling.decl_get_child
    del clang.tooling.decl_get_child
if hasattr(clang.tooling, 'tcls_get_child'):
    clang.ClassTemplateDecl.get_child = clang.tooling.tcls_get_child
    del clang.tooling.tcls_get_child

def get_children(self):
    return [self.get_child(index) for index in range(self.get_nb_children())]

clang.DeclContext.get_children = get_children
clang.ClassTemplateDecl.get_children = get_children
del get_children

def get_children(self):
    return [child for child in [self.get_child(index) for index in range(self.get_nb_children())] if not isinstance(child, clang.CXXMethodDecl)]

clang.ASTUnit.get_children = get_children
clang.NamespaceDecl.get_children = get_children
del get_children

def get_children(self):
    if self.get_nb_children() == 0:
        return []
    else:
        return [self.get_child(index) for index in range(1, self.get_nb_children())]

clang.CXXRecordDecl.get_children = get_children
del get_children

def get_constructors(self):
    if self.get_nb_constructors() == 0:
        return []
    else:
        return [self.get_constructor(index) for index in range(1, self.get_nb_constructors())]

clang.CXXRecordDecl.get_constructors = get_constructors
del get_constructors

if hasattr(clang.tooling, 'cxxrecord_get_base'):
    clang.CXXRecordDecl.get_base = clang.tooling.cxxrecord_get_base
    del clang.tooling.cxxrecord_get_base

def get_bases(self):
    return [self.get_base(index) for index in range(self.get_num_bases())]

clang.CXXRecordDecl.get_bases = get_bases
del get_bases

if hasattr(clang.tooling, 'cxxrecord_get_virtual_base'):
    clang.CXXRecordDecl.get_virtual_base = clang.tooling.cxxrecord_get_virtual_base
    del clang.tooling.cxxrecord_get_virtual_base

def get_virtual_bases(self):
    return [self.get_virtual_base(index) for index in range(self.get_num_v_bases())]

clang.CXXRecordDecl.get_virtual_bases = get_virtual_bases
del get_virtual_bases

def get_children(self):
    return [self.get_param_decl(index) for index in range(self.get_num_params())]

clang.FunctionDecl.get_children = get_children
del get_children

if hasattr(clang.tooling, 'get_as_string'):
    clang.QualType.get_as_string = clang.tooling.get_as_string
    del clang.tooling.get_as_string

if hasattr(clang.tooling, 'get_name'):
    clang.NamedDecl.get_name = clang.tooling.get_name
    del clang.tooling.get_name

if hasattr(clang.tooling, 'spec_get_name'):
    clang.ClassTemplateSpecializationDecl.get_name = clang.tooling.spec_get_name
    del clang.tooling.spec_get_name

import re
from functools import wraps

def wrapper(func):
    @wraps(func)
    def spelling(self):
        return re.sub('::(:*)', '::', func(self))

if hasattr(clang.tooling, 'decl_spelling'):
    clang.NamedDecl._spelling = clang.tooling.decl_spelling
    del clang.tooling.decl_spelling

def spelling(self):
    spelling = re.sub('::(:*)', '::', re.sub(r'\(anonymous\)', '', self._spelling()))
    if spelling.endswith('::'):
        return '::' + spelling[:-2]
    else:
        return '::' + spelling

clang.NamedDecl.spelling = spelling
del spelling

if hasattr(clang.tooling, 'cxxrecord_is_copyable'):
    clang.CXXRecordDecl.is_copyable = clang.tooling.cxxrecord_is_copyable
    del clang.tooling.cxxrecord_is_copyable

def is_copyable(self):
    return True

clang.TagDecl.is_copyable = is_copyable
del is_copyable

def is_copyable(self):
    res = True
    dtr = None
    ctr = None
    for child in self.get_children():
        if isinstance(child, clang.CXXConstructorDecl) and child.is_copy_constructor():
            ctr = child
            break
        elif isinstance(child, clang.CXXDestructorDecl):
            dtr = child
    if not dtr is None:
        if not dtr.get_access_unsafe() == clang.access_specifier.AS__PUBLIC or dtr.is_deleted():
            return False
    if ctr is None:
        bases = self.get_bases() + self.get_virtual_bases()
        res = len(bases) == 0 or any([cls.get_type().get_type_ptr_or_null().get_as_tag_decl().is_copyable() for cls in bases])
    elif not ctr.get_access_unsafe() == clang.access_specifier.AS__PUBLIC or ctr.is_deleted():
        res = False
    return res

clang.CXXRecordDecl.is_copyable = is_copyable
del is_copyable

if hasattr(clang.tooling, 'string_ref_str'):
    llvm.StringRef.str = clang.tooling.string_ref_str
    del clang.tooling.string_ref_str

if hasattr(clang.tooling, 'func_get_mangling'):
    clang.FunctionDecl.get_mangling = clang.tooling.func_get_mangling
    del clang.tooling.func_get_mangling

if hasattr(clang.tooling, 'decl_context_cast'):
    clang.FunctionDecl.cast = clang.tooling.decl_context_cast
    del clang.tooling.decl_context_cast
"""
