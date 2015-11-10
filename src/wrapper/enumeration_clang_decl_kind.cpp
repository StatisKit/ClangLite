#include <boost/python.hpp>
#include <clang/AST/DeclBase.h>

void enumeration_clang_decl_kind()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        std::string _decl_a6aedb4654a55a40aeecf4b1dc5fcc98_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._decl");
        boost::python::object _decl_a6aedb4654a55a40aeecf4b1dc5fcc98_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(_decl_a6aedb4654a55a40aeecf4b1dc5fcc98_name.c_str()))));
        boost::python::scope().attr("_decl") = _decl_a6aedb4654a55a40aeecf4b1dc5fcc98_module;
        boost::python::scope _decl_a6aedb4654a55a40aeecf4b1dc5fcc98_scope = _decl_a6aedb4654a55a40aeecf4b1dc5fcc98_module;
        boost::python::enum_< enum ::clang::Decl::Kind >("kind")
            .value("ACCESS_SPEC", ::clang::Decl::Kind::AccessSpec)
            .value("BLOCK", ::clang::Decl::Kind::Block)
            .value("CAPTURED", ::clang::Decl::Kind::Captured)
            .value("CLASS_SCOPE_FUNCTION_SPECIALIZATION", ::clang::Decl::Kind::ClassScopeFunctionSpecialization)
            .value("EMPTY", ::clang::Decl::Kind::Empty)
            .value("EXTERN_C_CONTEXT", ::clang::Decl::Kind::ExternCContext)
            .value("FILE_SCOPE_ASM", ::clang::Decl::Kind::FileScopeAsm)
            .value("FRIEND", ::clang::Decl::Kind::Friend)
            .value("FRIEND_TEMPLATE", ::clang::Decl::Kind::FriendTemplate)
            .value("IMPORT", ::clang::Decl::Kind::Import)
            .value("LINKAGE_SPEC", ::clang::Decl::Kind::LinkageSpec)
            .value("LABEL", ::clang::Decl::Kind::Label)
            .value("NAMESPACE", ::clang::Decl::Kind::Namespace)
            .value("NAMESPACE_ALIAS", ::clang::Decl::Kind::NamespaceAlias)
            .value("OBJ_C_COMPATIBLE_ALIAS", ::clang::Decl::Kind::ObjCCompatibleAlias)
            .value("OBJ_C_CATEGORY", ::clang::Decl::Kind::ObjCCategory)
            .value("OBJ_C_CATEGORY_IMPL", ::clang::Decl::Kind::ObjCCategoryImpl)
            .value("OBJ_C_IMPLEMENTATION", ::clang::Decl::Kind::ObjCImplementation)
            .value("FIRST_OBJ_C_IMPL", ::clang::Decl::Kind::firstObjCImpl)
            .value("LAST_OBJ_C_IMPL", ::clang::Decl::Kind::lastObjCImpl)
            .value("OBJ_C_INTERFACE", ::clang::Decl::Kind::ObjCInterface)
            .value("OBJ_C_PROTOCOL", ::clang::Decl::Kind::ObjCProtocol)
            .value("FIRST_OBJ_C_CONTAINER", ::clang::Decl::Kind::firstObjCContainer)
            .value("LAST_OBJ_C_CONTAINER", ::clang::Decl::Kind::lastObjCContainer)
            .value("OBJ_C_METHOD", ::clang::Decl::Kind::ObjCMethod)
            .value("OBJ_C_PROPERTY", ::clang::Decl::Kind::ObjCProperty)
            .value("CLASS_TEMPLATE", ::clang::Decl::Kind::ClassTemplate)
            .value("FUNCTION_TEMPLATE", ::clang::Decl::Kind::FunctionTemplate)
            .value("TYPE_ALIAS_TEMPLATE", ::clang::Decl::Kind::TypeAliasTemplate)
            .value("VAR_TEMPLATE", ::clang::Decl::Kind::VarTemplate)
            .value("FIRST_REDECLARABLE_TEMPLATE", ::clang::Decl::Kind::firstRedeclarableTemplate)
            .value("LAST_REDECLARABLE_TEMPLATE", ::clang::Decl::Kind::lastRedeclarableTemplate)
            .value("TEMPLATE_TEMPLATE_PARM", ::clang::Decl::Kind::TemplateTemplateParm)
            .value("FIRST_TEMPLATE", ::clang::Decl::Kind::firstTemplate)
            .value("LAST_TEMPLATE", ::clang::Decl::Kind::lastTemplate)
            .value("ENUM", ::clang::Decl::Kind::Enum)
            .value("RECORD", ::clang::Decl::Kind::Record)
            .value("CXX_RECORD", ::clang::Decl::Kind::CXXRecord)
            .value("CLASS_TEMPLATE_SPECIALIZATION", ::clang::Decl::Kind::ClassTemplateSpecialization)
            .value("CLASS_TEMPLATE_PARTIAL_SPECIALIZATION", ::clang::Decl::Kind::ClassTemplatePartialSpecialization)
            .value("FIRST_CLASS_TEMPLATE_SPECIALIZATION", ::clang::Decl::Kind::firstClassTemplateSpecialization)
            .value("LAST_CLASS_TEMPLATE_SPECIALIZATION", ::clang::Decl::Kind::lastClassTemplateSpecialization)
            .value("FIRST_CXX_RECORD", ::clang::Decl::Kind::firstCXXRecord)
            .value("LAST_CXX_RECORD", ::clang::Decl::Kind::lastCXXRecord)
            .value("FIRST_RECORD", ::clang::Decl::Kind::firstRecord)
            .value("LAST_RECORD", ::clang::Decl::Kind::lastRecord)
            .value("FIRST_TAG", ::clang::Decl::Kind::firstTag)
            .value("LAST_TAG", ::clang::Decl::Kind::lastTag)
            .value("TEMPLATE_TYPE_PARM", ::clang::Decl::Kind::TemplateTypeParm)
            .value("TYPE_ALIAS", ::clang::Decl::Kind::TypeAlias)
            .value("TYPEDEF", ::clang::Decl::Kind::Typedef)
            .value("FIRST_TYPEDEF_NAME", ::clang::Decl::Kind::firstTypedefName)
            .value("LAST_TYPEDEF_NAME", ::clang::Decl::Kind::lastTypedefName)
            .value("UNRESOLVED_USING_TYPENAME", ::clang::Decl::Kind::UnresolvedUsingTypename)
            .value("FIRST_TYPE", ::clang::Decl::Kind::firstType)
            .value("LAST_TYPE", ::clang::Decl::Kind::lastType)
            .value("USING", ::clang::Decl::Kind::Using)
            .value("USING_DIRECTIVE", ::clang::Decl::Kind::UsingDirective)
            .value("USING_SHADOW", ::clang::Decl::Kind::UsingShadow)
            .value("FIELD", ::clang::Decl::Kind::Field)
            .value("OBJ_C_AT_DEFS_FIELD", ::clang::Decl::Kind::ObjCAtDefsField)
            .value("OBJ_C_IVAR", ::clang::Decl::Kind::ObjCIvar)
            .value("FIRST_FIELD", ::clang::Decl::Kind::firstField)
            .value("LAST_FIELD", ::clang::Decl::Kind::lastField)
            .value("FUNCTION", ::clang::Decl::Kind::Function)
            .value("CXX_METHOD", ::clang::Decl::Kind::CXXMethod)
            .value("CXX_CONSTRUCTOR", ::clang::Decl::Kind::CXXConstructor)
            .value("CXX_CONVERSION", ::clang::Decl::Kind::CXXConversion)
            .value("CXX_DESTRUCTOR", ::clang::Decl::Kind::CXXDestructor)
            .value("FIRST_CXX_METHOD", ::clang::Decl::Kind::firstCXXMethod)
            .value("LAST_CXX_METHOD", ::clang::Decl::Kind::lastCXXMethod)
            .value("FIRST_FUNCTION", ::clang::Decl::Kind::firstFunction)
            .value("LAST_FUNCTION", ::clang::Decl::Kind::lastFunction)
            .value("MS_PROPERTY", ::clang::Decl::Kind::MSProperty)
            .value("NON_TYPE_TEMPLATE_PARM", ::clang::Decl::Kind::NonTypeTemplateParm)
            .value("VAR", ::clang::Decl::Kind::Var)
            .value("IMPLICIT_PARAM", ::clang::Decl::Kind::ImplicitParam)
            .value("PARM_VAR", ::clang::Decl::Kind::ParmVar)
            .value("VAR_TEMPLATE_SPECIALIZATION", ::clang::Decl::Kind::VarTemplateSpecialization)
            .value("VAR_TEMPLATE_PARTIAL_SPECIALIZATION", ::clang::Decl::Kind::VarTemplatePartialSpecialization)
            .value("FIRST_VAR_TEMPLATE_SPECIALIZATION", ::clang::Decl::Kind::firstVarTemplateSpecialization)
            .value("LAST_VAR_TEMPLATE_SPECIALIZATION", ::clang::Decl::Kind::lastVarTemplateSpecialization)
            .value("FIRST_VAR", ::clang::Decl::Kind::firstVar)
            .value("LAST_VAR", ::clang::Decl::Kind::lastVar)
            .value("FIRST_DECLARATOR", ::clang::Decl::Kind::firstDeclarator)
            .value("LAST_DECLARATOR", ::clang::Decl::Kind::lastDeclarator)
            .value("ENUM_CONSTANT", ::clang::Decl::Kind::EnumConstant)
            .value("INDIRECT_FIELD", ::clang::Decl::Kind::IndirectField)
            .value("UNRESOLVED_USING_VALUE", ::clang::Decl::Kind::UnresolvedUsingValue)
            .value("FIRST_VALUE", ::clang::Decl::Kind::firstValue)
            .value("LAST_VALUE", ::clang::Decl::Kind::lastValue)
            .value("FIRST_NAMED", ::clang::Decl::Kind::firstNamed)
            .value("LAST_NAMED", ::clang::Decl::Kind::lastNamed)
            .value("OMP_THREAD_PRIVATE", ::clang::Decl::Kind::OMPThreadPrivate)
            .value("OBJ_C_PROPERTY_IMPL", ::clang::Decl::Kind::ObjCPropertyImpl)
            .value("STATIC_ASSERT", ::clang::Decl::Kind::StaticAssert)
            .value("TRANSLATION_UNIT", ::clang::Decl::Kind::TranslationUnit)
            .value("FIRST_DECL", ::clang::Decl::Kind::firstDecl)
            .value("LAST_DECL", ::clang::Decl::Kind::lastDecl);
}