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
    bool  (*method_pointer_19559effc21d57d9b7d203567f0d56d7)(class ::clang::Decl  const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_a9d494d9e16d53ea9623c4c6bffd512c)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    bool  (::clang::NamedDecl::*method_pointer_38fbea9aac8a5f20afeb8bba6a434f3c)(class ::clang::NamedDecl  *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_7d983d154b275512b5c3c71516b6591d)() const = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_c58dff3a7a2756a89aa2d1fc0b0254ec)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_f3c223dfe6165c02b4cc4df7cc2fa031)() const = &::clang::NamedDecl::getName;
    class ::clang::NamedDecl  * (::clang::NamedDecl::*method_pointer_b5af649806ea572e8f9bd457f45b8572)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl  const * (::clang::NamedDecl::*method_pointer_71abda14fa0f54afb543022df88f3fc5)() const = &::clang::NamedDecl::getUnderlyingDecl;
    bool  (::clang::NamedDecl::*method_pointer_7a7d01d6fded57c99378ca21d3194a72)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_0026b20085fb5658b28820ae026c7d6c)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_6f94de5cd2135a28a42eefaee710d492)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    bool  (::clang::NamedDecl::*method_pointer_033ba9b0fe4b59febc332087d66b4e58)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_19f4da36c61f5326ac1814a8d683cc6a)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_d7c2574d9af352b28839a0f17018276f)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_c960f3d30d1d55738a01794296779c00)() const = &::clang::NamedDecl::isHidden;
    bool  (::clang::NamedDecl::*method_pointer_d8a0dbeb04195f479533a9fa9f099d8f)() const = &::clang::NamedDecl::isLinkageValid;
    void  (::clang::NamedDecl::*method_pointer_6df2357ceab659db827155f2f4544ad0)(bool ) = &::clang::NamedDecl::setHidden;
    struct function_group
    {
        static class ::boost::python::str  function_78fb9b84d369546bbb313c6f1a80fb77(class ::clang::NamedDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::HeldType< class ::clang::NamedDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_19559effc21d57d9b7d203567f0d56d7, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_a9d494d9e16d53ea9623c4c6bffd512c, "");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_38fbea9aac8a5f20afeb8bba6a434f3c, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_7d983d154b275512b5c3c71516b6591d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_c58dff3a7a2756a89aa2d1fc0b0254ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_f3c223dfe6165c02b4cc4df7cc2fa031, "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_b5af649806ea572e8f9bd457f45b8572, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_71abda14fa0f54afb543022df88f3fc5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_7a7d01d6fded57c99378ca21d3194a72, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_0026b20085fb5658b28820ae026c7d6c, "");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_6f94de5cd2135a28a42eefaee710d492, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_033ba9b0fe4b59febc332087d66b4e58, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_19f4da36c61f5326ac1814a8d683cc6a, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_d7c2574d9af352b28839a0f17018276f, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_c960f3d30d1d55738a01794296779c00, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_d8a0dbeb04195f479533a9fa9f099d8f, "");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_6df2357ceab659db827155f2f4544ad0, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_78fb9b84d369546bbb313c6f1a80fb77, "");

    if(std::is_class< autowig::HeldType< class ::clang::NamedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamedDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}