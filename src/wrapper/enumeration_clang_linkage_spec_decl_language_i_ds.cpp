#include <boost/python.hpp>
#include <clang/AST/DeclCXX.h>

void enumeration_clang_linkage_spec_decl_language_i_ds()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        std::string _linkage_spec_decl_693db0b37725552a85ff783087528c5b_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._linkage_spec_decl");
        boost::python::object _linkage_spec_decl_693db0b37725552a85ff783087528c5b_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(_linkage_spec_decl_693db0b37725552a85ff783087528c5b_name.c_str()))));
        boost::python::scope().attr("_linkage_spec_decl") = _linkage_spec_decl_693db0b37725552a85ff783087528c5b_module;
        boost::python::scope _linkage_spec_decl_693db0b37725552a85ff783087528c5b_scope = _linkage_spec_decl_693db0b37725552a85ff783087528c5b_module;
        boost::python::enum_< enum ::clang::LinkageSpecDecl::LanguageIDs >("language_i_ds")
            .value("LANG_C", ::clang::LinkageSpecDecl::LanguageIDs::lang_c)
            .value("LANG_CXX", ::clang::LinkageSpecDecl::LanguageIDs::lang_cxx);
}