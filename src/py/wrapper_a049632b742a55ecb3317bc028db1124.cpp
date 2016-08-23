#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_a049632b742a55ecb3317bc028db1124()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_060f4bab1f91579cae13da313e60be72)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_ac8d754f17e75daaab227bd80093ebbb)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_2758c33e1bcb5f83a5b269c3ab76840f)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_1fd98b2b14bd5b24baed71fee8e7b469)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_e112c530f3cf5393a2c7d9061e952d22)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_f4d77040c358511788405762e6922429)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_ecba7d84478f596f97c303233ad747aa)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_ecb44b128cd15ef49e7f0d7c35be58b4)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_540c47a698c85f5abf2cbe2840c19063)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_1264d261619b5a738bd0490fb23d302c)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_c089981abe0f581688d2295f79f076f9)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_b846e509aec555769c1411584a7f0c36)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_77d130e20491503a9e59489fd0db6c1e)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_663640ecbfa357c289df8a8daa1e292b)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_0836bcd92c65512f8e594ce51b05ace3)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_f5d7d66fb0bc5928a9c2909b9d929395)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_9b4c45866886518684270aed4fea3e17(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_060f4bab1f91579cae13da313e60be72, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_ac8d754f17e75daaab227bd80093ebbb, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_2758c33e1bcb5f83a5b269c3ab76840f, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_1fd98b2b14bd5b24baed71fee8e7b469, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_e112c530f3cf5393a2c7d9061e952d22, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_f4d77040c358511788405762e6922429, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_ecba7d84478f596f97c303233ad747aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_ecb44b128cd15ef49e7f0d7c35be58b4, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_540c47a698c85f5abf2cbe2840c19063, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_1264d261619b5a738bd0490fb23d302c, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_c089981abe0f581688d2295f79f076f9, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_b846e509aec555769c1411584a7f0c36, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_77d130e20491503a9e59489fd0db6c1e, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_663640ecbfa357c289df8a8daa1e292b, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_0836bcd92c65512f8e594ce51b05ace3, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_f5d7d66fb0bc5928a9c2909b9d929395, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_9b4c45866886518684270aed4fea3e17, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}