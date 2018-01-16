// Copyright [2017-2018] UMR MISTEA INRA, UMR LEPSE INRA,                //
//                       UMR AGAP CIRAD, EPI Virtual Plants Inria        //
// Copyright [2015-2016] UMR AGAP CIRAD, EPI Virtual Plants Inria        //
//                                                                       //
// This file is part of the AutoWIG project. More information can be     //
// found at                                                              //
//                                                                       //
//     http://autowig.rtfd.io                                            //
//                                                                       //
// The Apache Software Foundation (ASF) licenses this file to you under  //
// the Apache License, Version 2.0 (the "License"); you may not use this //
// file except in compliance with the License. You should have received  //
// a copy of the Apache License, Version 2.0 along with this file; see   //
// the file LICENSE. If not, you may obtain a copy of the License at     //
//                                                                       //
//     http://www.apache.org/licenses/LICENSE-2.0                        //
//                                                                       //
// Unless required by applicable law or agreed to in writing, software   //
// distributed under the License is distributed on an "AS IS" BASIS,     //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or       //
// mplied. See the License for the specific language governing           //
// permissions and limitations under the License.                        //

#include <clanglite/tool.h>

namespace clanglite
{
    clang::ASTUnit* build_ast_from_code_with_args(boost::python::object _code, boost::python::object _args)
    {
        std::vector< std::string > args(boost::python::len(_args));
        for(unsigned int i = 0; i < args.size(); ++i)
        { args[i] = boost::python::extract< std::string >(_args[i]); }
        std::string __code = boost::python::extract< std::string >(_code);
        llvm::Twine code(__code);
        clang::ASTUnit* tu = clang::tooling::buildASTFromCodeWithArgs(code, args).release();
        clang::LangOptions lang;
        lang.CPlusPlus = true;
        clang::PrintingPolicy policy(lang);
        policy.SuppressSpecifiers = false;
        policy.SuppressScope = false;
        policy.SuppressUnwrittenScope = true; 
        tu->getASTContext().setPrintingPolicy(policy);
        return tu;
    }

    boost::python::str get_comment(clang::Decl* decl)
    {
        clang::ASTContext & ast = decl->getASTContext();
        clang::SourceManager &  sm = ast.getSourceManager();
        std::string comment = "";
        clang::RawComment* rawcomment = ast.getRawCommentForDeclNoCache(decl);
        if(rawcomment)
        { comment = rawcomment->getRawText(sm).str(); }
        return boost::python::str(comment);
    }

    boost::python::list get_children(clang::DeclContext& decl)
    { 
        boost::python::list children = boost::python::list();
        for(auto it = decl.decls_begin(), it_end = decl.decls_end(); it != it_end; ++it)
        { children.append(boost::python::ptr(*it)); }
        return children; 
    }

    boost::python::list get_children(clang::ClassTemplateDecl& cls, clang::Sema& sema)
    { 
        boost::python::list children = boost::python::list();
        for(auto it = cls.spec_begin(), it_end = cls.spec_end(); it != it_end; ++it)
        { 
            auto args = it->getTemplateArgs();
            void* ins_point;
            auto retval = cls->findSpecialization(args.data(), args.size(), ins_point);
            if (retval == nullptr) {
                retval = ClassTemplateSpecializationDecl::Create(cls.getASTContext(), clang::TTK_Class, cls.getDeclContext(), {}, {}, cls,
                                                                 args.data(), args.size(), nullptr);
                decl->AddSpecialization(retval, ins_point);
            }
            if(!sema.RequireCompleteType({}, ast.getTypeDeclType(retval), clang::diag::err_incomplete_type))
            { children.append(boost::python::ptr(retval)); }
        }
        return children; 
    }

    boost::python::list get_children(clang::ASTUnit& ast)
    { 
        boost::python::list children = boost::python::list();
        for(auto it = ast.top_level_begin(), it_end = ast.top_level_end(); it != it_end; ++it)
        { children.append(boost::python::ptr(*it)); }
        return children; 
    }

    boost::python::list get_children(clang::FunctionDecl& decl)
    { 
        boost::python::list children = boost::python::list();
        for(auto it = decl.param_begin(), it_end = decl.param_end(); it != it_end; ++it)
        { children.append(boost::python::ptr(*it)); }
        return children;
    }
    
    clang::TemplateArgumentList* get_template_args(clang::ClassTemplateSpecializationDecl& cls)
    { 
        const clang::TemplateArgumentList&  template_args = cls.getTemplateArgs();
        return const_cast< clang::TemplateArgumentList* >(&template_args);
    }
    
    boost::python::list get_constructors(clang::CXXRecordDecl& decl)
    { 
        boost::python::list children = boost::python::list();
        for(auto it = decl.ctor_begin(), it_end = decl.ctor_end(); it != it_end; ++it)
        { children.append(boost::python::ptr(*it)); }
        return children;
    }

    boost::python::list get_bases(clang::CXXRecordDecl& decl)
    { 
        boost::python::list children = boost::python::list();
        for(auto it = decl.bases_begin(), it_end = decl.bases_end(); it != it_end; ++it)
        { children.append(boost::python::ptr(it)); }
        return children;
    }

    boost::python::list get_virtual_bases(clang::CXXRecordDecl& decl)
    { 
        boost::python::list children = boost::python::list();
        for(auto it = decl.vbases_begin(), it_end = decl.vbases_end(); it != it_end; ++it)
        { children.append(boost::python::ptr(it)); }
        return children;
    }

    clang::TypedefNameDecl * get_as_typedef_name_decl(clang::Type& type)
    { return type.getAs< clang::TypedefType >()->getDecl(); }
    
    clang::TranslationUnitDecl * as_translation_unit(clang::DeclContext * decl)
    { return static_cast< clang::TranslationUnitDecl * >(decl); }

    clang::NamespaceDecl * as_namespace(clang::DeclContext * decl)
    { return static_cast< clang::NamespaceDecl * >(decl); }

    clang::RecordDecl * as_record(clang::DeclContext * decl)
    { return static_cast< clang::RecordDecl * >(decl); }

    clang::EnumDecl * as_enum(clang::DeclContext * decl)
    { return static_cast< clang::EnumDecl * >(decl); }

    boost::python::str get_name(clang::NamedDecl * decl)
    { return boost::python::str(decl->getNameAsString()); }

    /*void set_as_written(std::map< clang::ClassTemplateSpecializationDecl*, clang::TypeSourceInfo* >& mapping, clang::ClassTemplateSpecializationDecl* spec)
    {
        spec->setTypeAsWritten(mapping[spec]);
        const clang::TemplateArgumentList &args = spec->getTemplateArgs();        
        for(unsigned int i = 0; i < args.size(); ++i)
        {
            const clang::TemplateArgument & arg = args[i];
            if(arg.getKind() == clang::TemplateArgument::ArgKind::Type)
            {
                clang::QualType qtype = arg.getAsType();
                const clang::Type* ttype = qtype.getTypePtrOrNull();
                if(ttype && ttype->isClassType())
                {
                    clang::ClassTemplateSpecializationDecl* nspec = dynamic_cast< clang::ClassTemplateSpecializationDecl* >(ttype->getAsTagDecl());
                    if(nspec)
                    { set_as_written(mapping, nspec); }
                }
            }
        }
    }
    
    void unset_as_written(std::map< clang::ClassTemplateSpecializationDecl*, clang::TypeSourceInfo* >& mapping, clang::ClassTemplateSpecializationDecl* spec)
    {
        mapping[spec] = spec->getTypeAsWritten();
        spec->setTypeAsWritten(nullptr);
        const clang::TemplateArgumentList &args = spec->getTemplateArgs();        
        for(unsigned int i = 0; i < args.size(); ++i)
        {
            const clang::TemplateArgument & arg = args[i];
            if(arg.getKind() == clang::TemplateArgument::ArgKind::Type)
            {
                clang::QualType qtype = arg.getAsType();
                const clang::Type* ttype = qtype.getTypePtrOrNull();
                if(ttype && ttype->isClassType())
                {
                    clang::ClassTemplateSpecializationDecl* nspec = dynamic_cast< clang::ClassTemplateSpecializationDecl* >(ttype->getAsTagDecl());
                    if(nspec)
                    { unset_as_written(mapping, nspec); }
                }
            }
        }
    }*/

    boost::python::str get_name(clang::ClassTemplateSpecializationDecl * decl)
    {
        // std::map< clang::ClassTemplateSpecializationDecl*, clang::TypeSourceInfo* > mapping;
        // unset_as_written(mapping, decl);
        std::string spelling = "";
        llvm::raw_string_ostream os(spelling);
        os << decl->getName();
        const clang::TemplateArgumentList &args = decl->getTemplateArgs();
        clang::LangOptions lang;
        lang.CPlusPlus = true;
        clang::PrintingPolicy policy(lang);
        policy.SuppressSpecifiers = false;
        policy.SuppressScope = false;
        policy.SuppressUnwrittenScope = true;
        clang::TemplateSpecializationType::PrintTemplateArgumentList(os, args.asArray(),
                                                                  policy);
        std::string res = os.str();
        // set_as_written(mapping, decl);        
        return boost::python::str(res);
    }

    boost::python::str get_name(clang::TemplateArgument* ta)
    {
        std::string spelling = "";
        llvm::raw_string_ostream os(spelling);
        clang::LangOptions lang;
        lang.CPlusPlus = true;
        clang::PrintingPolicy policy(lang);
        policy.SuppressSpecifiers = false;
        policy.SuppressScope = false;
        policy.SuppressUnwrittenScope = true;        
        ta->print(policy, os);
        return boost::python::str(os.str());
    }

    boost::python::str str(clang::StringRef* sref)
    { return boost::python::str(sref->str()); }

    boost::python::str get_mangling(clang::FunctionDecl * decl)
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
        delete mc;
        return boost::python::str(frontendos.str());
    }
}
