#include "_clanglite.h"


void wrapper_4b4e99a998695d79afb2678ecd4ef38b(pybind11::module& module)
{

    pybind11::enum_< enum ::clang::AccessSpecifier > enum_4b4e99a998695d79afb2678ecd4ef38b(module, "access_specifier");
    enum_4b4e99a998695d79afb2678ecd4ef38b.value("AS__PUBLIC", ::clang::AS_public);
    enum_4b4e99a998695d79afb2678ecd4ef38b.value("AS__PROTECTED", ::clang::AS_protected);
    enum_4b4e99a998695d79afb2678ecd4ef38b.value("AS__PRIVATE", ::clang::AS_private);
    enum_4b4e99a998695d79afb2678ecd4ef38b.value("AS__NONE", ::clang::AS_none);
    enum_4b4e99a998695d79afb2678ecd4ef38b.export_values();

}