#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_41db8c9435975db59206c5f1329984a4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCIvarDecl  * (*method_pointer_083f074c72d65e43906acb91e9678e2f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCIvarDecl::CreateDeserialized;
    bool  (*method_pointer_634e95bcd729595092ddef71b2f46cc1)(class ::clang::Decl  const *) = ::clang::ObjCIvarDecl::classof;
    bool  (*method_pointer_1e527485a2bf50b8940d11ea75ee1d60)(enum ::clang::Decl::Kind ) = ::clang::ObjCIvarDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCIvarDecl::*method_pointer_cce1fa42d4aa5af588e330cec81e71f7)() const = &::clang::ObjCIvarDecl::getContainingInterface;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCIvarDecl::*method_pointer_d99936617933540683b76e815045843a)() = &::clang::ObjCIvarDecl::getNextIvar;
    class ::clang::ObjCIvarDecl  const * (::clang::ObjCIvarDecl::*method_pointer_e322ef92151157d2a98b782216e0dc73)() const = &::clang::ObjCIvarDecl::getNextIvar;
    bool  (::clang::ObjCIvarDecl::*method_pointer_16a682facf1d5be6ba33f155a2a05c3c)() const = &::clang::ObjCIvarDecl::getSynthesize;
    class ::clang::QualType  (::clang::ObjCIvarDecl::*method_pointer_cc88249af429590d8c71c28a12e42b0c)(class ::clang::QualType ) const = &::clang::ObjCIvarDecl::getUsageType;
    void  (::clang::ObjCIvarDecl::*method_pointer_97b41889754150e198ea2596ee231512)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCIvarDecl::setNextIvar;
    void  (::clang::ObjCIvarDecl::*method_pointer_c7f40a84f6a25c93b0a1d1293ec27fe4)(bool ) = &::clang::ObjCIvarDecl::setSynthesize;
    boost::python::class_< class ::clang::ObjCIvarDecl, autowig::HeldType< class ::clang::ObjCIvarDecl >, boost::python::bases< class ::clang::FieldDecl >, boost::noncopyable > class_41db8c9435975db59206c5f1329984a4("ObjCIvarDecl", "", boost::python::no_init);
    class_41db8c9435975db59206c5f1329984a4.def("create_deserialized", method_pointer_083f074c72d65e43906acb91e9678e2f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("classof", method_pointer_634e95bcd729595092ddef71b2f46cc1, "");
    class_41db8c9435975db59206c5f1329984a4.def("classof_kind", method_pointer_1e527485a2bf50b8940d11ea75ee1d60, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_containing_interface", method_pointer_cce1fa42d4aa5af588e330cec81e71f7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_d99936617933540683b76e815045843a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_e322ef92151157d2a98b782216e0dc73, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_synthesize", method_pointer_16a682facf1d5be6ba33f155a2a05c3c, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_usage_type", method_pointer_cc88249af429590d8c71c28a12e42b0c, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_next_ivar", method_pointer_97b41889754150e198ea2596ee231512, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_synthesize", method_pointer_c7f40a84f6a25c93b0a1d1293ec27fe4, "");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof_kind");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("create_deserialized");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCIvarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCIvarDecl >, autowig::HeldType< class ::clang::FieldDecl > >();
    }

}