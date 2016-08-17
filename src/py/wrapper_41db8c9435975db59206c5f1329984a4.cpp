#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_41db8c9435975db59206c5f1329984a4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_2fe54c66f3215d24bac99c7d3dd3ae52)(class ::clang::Decl  const *) = ::clang::ObjCIvarDecl::classof;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCIvarDecl::*method_pointer_1a4d1327e4825413a1feb358b50ba5e8)() const = &::clang::ObjCIvarDecl::getContainingInterface;
    class ::clang::ObjCIvarDecl  * (*method_pointer_4e39e945ba5c53549f18dfe7064f666c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCIvarDecl::CreateDeserialized;
    bool  (*method_pointer_1639e187f4fc58da85b00f19a108a224)(enum ::clang::Decl::Kind ) = ::clang::ObjCIvarDecl::classofKind;
    void  (::clang::ObjCIvarDecl::*method_pointer_0cd9f0e0fc845d59a410ba7d2727491a)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCIvarDecl::setNextIvar;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCIvarDecl::*method_pointer_a7d3c1a268745f6ca396912c745faf3d)() = &::clang::ObjCIvarDecl::getNextIvar;
    bool  (::clang::ObjCIvarDecl::*method_pointer_655525002fc35b45865936a9a5629511)() const = &::clang::ObjCIvarDecl::getSynthesize;
    class ::clang::ObjCIvarDecl  const * (::clang::ObjCIvarDecl::*method_pointer_affa1eabbf5a5e7ba42395ea5ef267fc)() const = &::clang::ObjCIvarDecl::getNextIvar;
    void  (::clang::ObjCIvarDecl::*method_pointer_a2841fee9a2e5debab07fe6dc31e6f79)(bool ) = &::clang::ObjCIvarDecl::setSynthesize;
    boost::python::class_< class ::clang::ObjCIvarDecl, autowig::HeldType< class ::clang::ObjCIvarDecl >, boost::python::bases< class ::clang::FieldDecl >, boost::noncopyable > class_41db8c9435975db59206c5f1329984a4("ObjCIvarDecl", "", boost::python::no_init);
    class_41db8c9435975db59206c5f1329984a4.def("classof", method_pointer_2fe54c66f3215d24bac99c7d3dd3ae52, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_containing_interface", method_pointer_1a4d1327e4825413a1feb358b50ba5e8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("create_deserialized", method_pointer_4e39e945ba5c53549f18dfe7064f666c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("classof_kind", method_pointer_1639e187f4fc58da85b00f19a108a224, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_next_ivar", method_pointer_0cd9f0e0fc845d59a410ba7d2727491a, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_a7d3c1a268745f6ca396912c745faf3d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_synthesize", method_pointer_655525002fc35b45865936a9a5629511, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_affa1eabbf5a5e7ba42395ea5ef267fc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("set_synthesize", method_pointer_a2841fee9a2e5debab07fe6dc31e6f79, "");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof_kind");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("create_deserialized");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCIvarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCIvarDecl >, autowig::HeldType< class ::clang::FieldDecl > >();
    }

}