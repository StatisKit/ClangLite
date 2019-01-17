#include "_clanglite.h"


void wrapper_0c11b148868f50d9aba81b8d12b3ed37(pybind11::module& module)
{

    pybind11::enum_< enum ::clang::LinkageSpecDecl::LanguageIDs > enum_0c11b148868f50d9aba81b8d12b3ed37(module, "language_i_ds");
    enum_0c11b148868f50d9aba81b8d12b3ed37.value("LANG_C", ::clang::LinkageSpecDecl::lang_c);
    enum_0c11b148868f50d9aba81b8d12b3ed37.value("LANG_CXX", ::clang::LinkageSpecDecl::lang_cxx);
    enum_0c11b148868f50d9aba81b8d12b3ed37.export_values();

}