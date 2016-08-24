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
    class ::clang::ObjCIvarDecl  * (*method_pointer_ddae85b439ab57ec99dc5f8efe3649b9)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCIvarDecl::CreateDeserialized;
    bool  (*method_pointer_1d99d3f32cc353c281a300d70dd835fd)(class ::clang::Decl  const *) = ::clang::ObjCIvarDecl::classof;
    bool  (*method_pointer_184b523c08275c3abcebbe8497709b2e)(enum ::clang::Decl::Kind ) = ::clang::ObjCIvarDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCIvarDecl::*method_pointer_7339eff8dbce5c43b26c27b69d57fd3b)() const = &::clang::ObjCIvarDecl::getContainingInterface;
    class ::clang::ObjCIvarDecl  const * (::clang::ObjCIvarDecl::*method_pointer_0cfb089cdc58518cae4a688bbe0cdc74)() const = &::clang::ObjCIvarDecl::getNextIvar;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCIvarDecl::*method_pointer_38bb5d13773d5421a214a2e54766959a)() = &::clang::ObjCIvarDecl::getNextIvar;
    bool  (::clang::ObjCIvarDecl::*method_pointer_04adc67fc88f5c4985a0426f7a855ddf)() const = &::clang::ObjCIvarDecl::getSynthesize;
    class ::clang::QualType  (::clang::ObjCIvarDecl::*method_pointer_e5705f1516c75a86bd78b603ed74834b)(class ::clang::QualType ) const = &::clang::ObjCIvarDecl::getUsageType;
    void  (::clang::ObjCIvarDecl::*method_pointer_fb6b80fbf83e55c5a882c36a36287850)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCIvarDecl::setNextIvar;
    void  (::clang::ObjCIvarDecl::*method_pointer_e0422ce2e0795dfca94cf24008965213)(bool ) = &::clang::ObjCIvarDecl::setSynthesize;
    boost::python::class_< class ::clang::ObjCIvarDecl, autowig::HeldType< class ::clang::ObjCIvarDecl >, boost::python::bases< class ::clang::FieldDecl >, boost::noncopyable > class_41db8c9435975db59206c5f1329984a4("ObjCIvarDecl", "", boost::python::no_init);
    class_41db8c9435975db59206c5f1329984a4.def("create_deserialized", method_pointer_ddae85b439ab57ec99dc5f8efe3649b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("classof", method_pointer_1d99d3f32cc353c281a300d70dd835fd, "");
    class_41db8c9435975db59206c5f1329984a4.def("classof_kind", method_pointer_184b523c08275c3abcebbe8497709b2e, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_containing_interface", method_pointer_7339eff8dbce5c43b26c27b69d57fd3b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_0cfb089cdc58518cae4a688bbe0cdc74, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_38bb5d13773d5421a214a2e54766959a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_synthesize", method_pointer_04adc67fc88f5c4985a0426f7a855ddf, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_usage_type", method_pointer_e5705f1516c75a86bd78b603ed74834b, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_next_ivar", method_pointer_fb6b80fbf83e55c5a882c36a36287850, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_synthesize", method_pointer_e0422ce2e0795dfca94cf24008965213, "");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof_kind");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("create_deserialized");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCIvarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCIvarDecl >, autowig::HeldType< class ::clang::FieldDecl > >();
    }

}