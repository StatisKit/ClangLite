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
        clang::ASTUnit* tu;// = clang::tooling::buildASTFromCodeWithArgs(code, args).release();
        clang::LangOptions lang;
        lang.CPlusPlus = true;
        clang::PrintingPolicy policy(lang);
        policy.SuppressSpecifiers = false;
        policy.SuppressScope = false;
        policy.SuppressUnwrittenScope = true; 
        tu->getASTContext().setPrintingPolicy(policy);
        return tu;
    }

    boost::python::object get_comment(clang::Decl* decl)
    {
        clang::ASTContext & ast = decl->getASTContext();
        clang::SourceManager &  sm = ast.getSourceManager();
        std::string comment = "";
        clang::RawComment* rawcomment = ast.getRawCommentForDeclNoCache(decl);
        if(rawcomment)
        { comment = rawcomment->getRawText(sm).str(); }
        return boost::python::object(comment);
    }

    boost::python::list get_children(clang::DeclContext& decl)
    { 
        boost::python::list children = boost::python::list();
        for(auto it = decl.decls_begin(), it_end = decl.decls_end(); it != it_end; ++it)
        { children.append(boost::python::object(*it)); }
        return children; 
    }

    boost::python::list get_children(clang::ClassTemplateDecl& cls)
    { 
        boost::python::list children = boost::python::list();
        for(auto it = cls.spec_begin(), it_end = cls.spec_end(); it != it_end; ++it)
        { children.append(boost::python::object(*it)); }
        return children; 
    }

    boost::python::list get_children(clang::ASTUnit& ast)
    { 
        boost::python::list children = boost::python::list();
        for(auto it = ast.top_level_begin(), it_end = ast.top_level_end(); it != it_end; ++it)
        { children.append(boost::python::object(*it)); }
        return children; 
    }

    boost::python::list get_children(clang::FunctionDecl& decl)
    { 
        boost::python::list children = boost::python::list();
        for(auto it = decl.param_begin(), it_end = decl.param_end(); it != it_end; ++it)
        { children.append(boost::python::object(*it)); }
        return children;
    }

    boost::python::list get_constructors(const clang::CXXRecordDecl& decl)
    { 
        boost::python::list children = boost::python::list();
        for(auto it = decl.ctor_begin(), it_end = decl.ctor_end(); it != it_end; ++it)
        { children.append(boost::python::object(*it)); }
        return children;
    }

    boost::python::list get_bases(const clang::CXXRecordDecl& decl)
    { 
        boost::python::list children = boost::python::list();
        for(auto it = decl.bases_begin(), it_end = decl.bases_end(); it != it_end; ++it)
        { children.append(boost::python::object(*it)); }
        return children;
    }

    boost::python::list get_virtual_bases(const clang::CXXRecordDecl& decl)
    { 
        boost::python::list children = boost::python::list();
        for(auto it = decl.vbases_begin(), it_end = decl.vbases_end(); it != it_end; ++it)
        { children.append(boost::python::object(*it)); }
        return children;
    }

    clang::TranslationUnitDecl * as_translation_unit(clang::DeclContext * decl)
    { return static_cast< clang::TranslationUnitDecl * >(decl); }

    clang::NamespaceDecl * as_namespace(clang::DeclContext * decl)
    { return static_cast< clang::NamespaceDecl * >(decl); }

    clang::RecordDecl * as_record(clang::DeclContext * decl)
    { return static_cast< clang::RecordDecl * >(decl); }

    clang::EnumDecl * as_enum(clang::DeclContext * decl)
    { return static_cast< clang::EnumDecl * >(decl); }
}