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
    bool  (*method_pointer_72f64b5fa5075a04993e439a421ca863)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_e65863a86b485073b860a6ae1af7e087)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_a24ba58438d5554bac0c3db8abb68f48)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_dc222840d0215558ae81689d0c6f55fb)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_4e03482cef1b535a83180e61ad9361de)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_eb5222e4ca375da29d49d9facffc6829)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_92addb6bdeda5073847520972f10f240)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_9b516432528659d7895999b6f7ecf264)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_5760a0361c9558e98f63c8d1c504fc86)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_66b82845619e5e099eaec5328868b601)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_162a5b80a6bb5a918b65b64217c35f82)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_b10639820c0759189423f44b88ac3a23)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_92cee335f95659b19ff631e3bea957b7)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_c49eab3453bd5621abd0265807654184)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_e42a86ef1ac7516bb516fb42e99ffc35)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_9437786cc933561085fe8e5576f27559)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_d30f9148a49052b68244c107606ce1ab)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_5715fd79086358cdafcaeb1a5c56575b(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_72f64b5fa5075a04993e439a421ca863, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_e65863a86b485073b860a6ae1af7e087, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_a24ba58438d5554bac0c3db8abb68f48, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_dc222840d0215558ae81689d0c6f55fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_4e03482cef1b535a83180e61ad9361de, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_eb5222e4ca375da29d49d9facffc6829, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_92addb6bdeda5073847520972f10f240, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_9b516432528659d7895999b6f7ecf264, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_5760a0361c9558e98f63c8d1c504fc86, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_66b82845619e5e099eaec5328868b601, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_162a5b80a6bb5a918b65b64217c35f82, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_b10639820c0759189423f44b88ac3a23, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_92cee335f95659b19ff631e3bea957b7, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_c49eab3453bd5621abd0265807654184, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_e42a86ef1ac7516bb516fb42e99ffc35, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_9437786cc933561085fe8e5576f27559, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_d30f9148a49052b68244c107606ce1ab, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_5715fd79086358cdafcaeb1a5c56575b, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}