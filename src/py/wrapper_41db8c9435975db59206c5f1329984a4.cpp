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
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCIvarDecl::*method_pointer_ff636440f08d5c929fd88e51745e81e3)() const = &::clang::ObjCIvarDecl::getContainingInterface;
    void  (::clang::ObjCIvarDecl::*method_pointer_5984b805c2605b3a9602abbfb84bd131)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCIvarDecl::setNextIvar;
    class ::clang::ObjCIvarDecl  const * (::clang::ObjCIvarDecl::*method_pointer_b47ff3188654580fb1b2dd3852928e90)() const = &::clang::ObjCIvarDecl::getNextIvar;
    bool  (::clang::ObjCIvarDecl::*method_pointer_a4dd4a701f355b2393b362fe173843e6)() const = &::clang::ObjCIvarDecl::getSynthesize;
    bool  (*method_pointer_71d090db2c895166b8013a601f4b4837)(enum ::clang::Decl::Kind ) = ::clang::ObjCIvarDecl::classofKind;
    void  (::clang::ObjCIvarDecl::*method_pointer_5d10d30258f157a8865a203e04fa5735)(bool ) = &::clang::ObjCIvarDecl::setSynthesize;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCIvarDecl::*method_pointer_341231f1d0a95981b6dc36aa9d7c958e)() = &::clang::ObjCIvarDecl::getNextIvar;
    class ::clang::ObjCIvarDecl  * (*method_pointer_17d6160a16ad5722b96a1ca148f3373e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCIvarDecl::CreateDeserialized;
    bool  (*method_pointer_54fdb532c446545488d44387f293eac7)(class ::clang::Decl  const *) = ::clang::ObjCIvarDecl::classof;
    boost::python::class_< class ::clang::ObjCIvarDecl, autowig::HeldType< class ::clang::ObjCIvarDecl >, boost::python::bases< class ::clang::FieldDecl >, boost::noncopyable > class_41db8c9435975db59206c5f1329984a4("ObjCIvarDecl", "", boost::python::no_init);
    class_41db8c9435975db59206c5f1329984a4.def("get_containing_interface", method_pointer_ff636440f08d5c929fd88e51745e81e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("set_next_ivar", method_pointer_5984b805c2605b3a9602abbfb84bd131, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_b47ff3188654580fb1b2dd3852928e90, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_synthesize", method_pointer_a4dd4a701f355b2393b362fe173843e6, "");
    class_41db8c9435975db59206c5f1329984a4.def("classof_kind", method_pointer_71d090db2c895166b8013a601f4b4837, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_synthesize", method_pointer_5d10d30258f157a8865a203e04fa5735, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_341231f1d0a95981b6dc36aa9d7c958e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("create_deserialized", method_pointer_17d6160a16ad5722b96a1ca148f3373e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("classof", method_pointer_54fdb532c446545488d44387f293eac7, "");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof_kind");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("create_deserialized");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCIvarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCIvarDecl >, autowig::HeldType< class ::clang::FieldDecl > >();
    }

}