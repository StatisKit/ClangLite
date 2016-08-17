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
    bool  (::clang::ObjCIvarDecl::*method_pointer_c359c2649a8853489a67621b4eaab5f2)() const = &::clang::ObjCIvarDecl::getSynthesize;
    void  (::clang::ObjCIvarDecl::*method_pointer_62b9b45313ea5cfeae1b6ceddd20c214)(bool ) = &::clang::ObjCIvarDecl::setSynthesize;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCIvarDecl::*method_pointer_aed41d76206a577cad804858824efa55)() = &::clang::ObjCIvarDecl::getNextIvar;
    bool  (*method_pointer_34241d7157c85f33a63764d13348bfa1)(class ::clang::Decl  const *) = ::clang::ObjCIvarDecl::classof;
    void  (::clang::ObjCIvarDecl::*method_pointer_019981df320959c3b9df2b4f9a7a45f4)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCIvarDecl::setNextIvar;
    class ::clang::ObjCIvarDecl  * (*method_pointer_8805934aa47c5d8083bb222499b1a6a1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCIvarDecl::CreateDeserialized;
    bool  (*method_pointer_b9984e36d25b5ea692060acc2a084676)(enum ::clang::Decl::Kind ) = ::clang::ObjCIvarDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCIvarDecl::*method_pointer_2d2971d44b015286ba4d4e8821c54b40)() const = &::clang::ObjCIvarDecl::getContainingInterface;
    class ::clang::ObjCIvarDecl  const * (::clang::ObjCIvarDecl::*method_pointer_168fe7cec80a5672a12bd77ca3faf669)() const = &::clang::ObjCIvarDecl::getNextIvar;
    boost::python::class_< class ::clang::ObjCIvarDecl, autowig::HeldType< class ::clang::ObjCIvarDecl >, boost::python::bases< class ::clang::FieldDecl >, boost::noncopyable > class_41db8c9435975db59206c5f1329984a4("ObjCIvarDecl", "", boost::python::no_init);
    class_41db8c9435975db59206c5f1329984a4.def("get_synthesize", method_pointer_c359c2649a8853489a67621b4eaab5f2, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_synthesize", method_pointer_62b9b45313ea5cfeae1b6ceddd20c214, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_aed41d76206a577cad804858824efa55, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("classof", method_pointer_34241d7157c85f33a63764d13348bfa1, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_next_ivar", method_pointer_019981df320959c3b9df2b4f9a7a45f4, "");
    class_41db8c9435975db59206c5f1329984a4.def("create_deserialized", method_pointer_8805934aa47c5d8083bb222499b1a6a1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("classof_kind", method_pointer_b9984e36d25b5ea692060acc2a084676, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_containing_interface", method_pointer_2d2971d44b015286ba4d4e8821c54b40, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_168fe7cec80a5672a12bd77ca3faf669, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof_kind");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("create_deserialized");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCIvarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCIvarDecl >, autowig::HeldType< class ::clang::FieldDecl > >();
    }

}