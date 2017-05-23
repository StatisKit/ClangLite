#include "_clanglite.h"


void wrapper_0c11b148868f50d9aba81b8d12b3ed37()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_693db0b37725552a85ff783087528c5b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._linkage_spec_decl");
    boost::python::object module_693db0b37725552a85ff783087528c5b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_693db0b37725552a85ff783087528c5b.c_str()))));
    boost::python::scope().attr("_linkage_spec_decl") = module_693db0b37725552a85ff783087528c5b;
    boost::python::scope scope_693db0b37725552a85ff783087528c5b = module_693db0b37725552a85ff783087528c5b;
    boost::python::enum_< enum ::clang::LinkageSpecDecl::LanguageIDs > enum_0c11b148868f50d9aba81b8d12b3ed37("language_i_ds");

    enum_0c11b148868f50d9aba81b8d12b3ed37.value("LANG_C", ::clang::LinkageSpecDecl::lang_c);

    enum_0c11b148868f50d9aba81b8d12b3ed37.value("LANG_CXX", ::clang::LinkageSpecDecl::lang_cxx);

}