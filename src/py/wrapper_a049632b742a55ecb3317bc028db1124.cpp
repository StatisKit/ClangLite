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
    bool  (*method_pointer_bbfe6826b0615dc8b7de8d63b6bec4fc)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_48cfb66b07d05c799722ad71093c8e10)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_330f5bd28fa1508a833930d998b8571e)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_8ec6f8b6fb935ebea77500bf667c9fae)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_6f52e3afc55a5089b48d32cdd5dbaf67)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_a6d58eeaa6935551b74aed372ad4d7b9)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_1a700f7698655ec38dfa49a8307c3485)() = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_d7074ffb87b75c2d85288a50f0573a50)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_ca950cdad4b65dd1b863d78ebfd3d531)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_34b26c6eb4d353259a628314d4a8b375)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_7c02df472d4057088986dd179fadebd1)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_72c0a0eb5d325e2f9d9f19f9a2048f21)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_16b0f7b9aaa05fe3bd64d2d45abcd17a)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_45f524cede0a553ea0a6a6a495db15ff)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_ffb02df39b06538183f246daaf3d897d)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_41e64448fd4352e6ad5527d53e6b52c2)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_ba72e2eeaec95111aef15a03ad0e91c8(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_bbfe6826b0615dc8b7de8d63b6bec4fc, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_48cfb66b07d05c799722ad71093c8e10, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_330f5bd28fa1508a833930d998b8571e, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_8ec6f8b6fb935ebea77500bf667c9fae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_6f52e3afc55a5089b48d32cdd5dbaf67, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_a6d58eeaa6935551b74aed372ad4d7b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_1a700f7698655ec38dfa49a8307c3485, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_d7074ffb87b75c2d85288a50f0573a50, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_ca950cdad4b65dd1b863d78ebfd3d531, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_34b26c6eb4d353259a628314d4a8b375, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_7c02df472d4057088986dd179fadebd1, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_72c0a0eb5d325e2f9d9f19f9a2048f21, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_16b0f7b9aaa05fe3bd64d2d45abcd17a, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_45f524cede0a553ea0a6a6a495db15ff, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_ffb02df39b06538183f246daaf3d897d, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_41e64448fd4352e6ad5527d53e6b52c2, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_ba72e2eeaec95111aef15a03ad0e91c8, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}