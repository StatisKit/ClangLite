#include "_clanglite.h"


namespace autowig
{
}


void wrapper_0dd00d729e905a24a952147ef6cb1f26()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::StaticAssertDecl  * (*method_pointer_c9e5818e4bbf51c0909b006935bc90b9)(class ::clang::ASTContext  &, unsigned int ) = ::clang::StaticAssertDecl::CreateDeserialized;
    bool  (*method_pointer_826eeb0ecaa3521db2f42356fcedbc9a)(class ::clang::Decl  const *) = ::clang::StaticAssertDecl::classof;
    bool  (*method_pointer_446eb31da0b65cb1a4c9df73b72dc5db)(enum ::clang::Decl::Kind ) = ::clang::StaticAssertDecl::classofKind;
    bool  (::clang::StaticAssertDecl::*method_pointer_e7835d7b1011577fb1520f0de2451665)() const = &::clang::StaticAssertDecl::isFailed;
    boost::python::class_< class ::clang::StaticAssertDecl, autowig::HeldType< class ::clang::StaticAssertDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_0dd00d729e905a24a952147ef6cb1f26("StaticAssertDecl", "", boost::python::no_init);
    class_0dd00d729e905a24a952147ef6cb1f26.def("create_deserialized", method_pointer_c9e5818e4bbf51c0909b006935bc90b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("classof", method_pointer_826eeb0ecaa3521db2f42356fcedbc9a, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("classof_kind", method_pointer_446eb31da0b65cb1a4c9df73b72dc5db, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("is_failed", method_pointer_e7835d7b1011577fb1520f0de2451665, "");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("classof_kind");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("create_deserialized");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::StaticAssertDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::StaticAssertDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}