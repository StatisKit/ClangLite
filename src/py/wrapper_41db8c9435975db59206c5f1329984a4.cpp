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
    class ::clang::ObjCIvarDecl  * (*method_pointer_d454b4ef9f1a518b950cbe50b31888ad)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCIvarDecl::CreateDeserialized;
    bool  (*method_pointer_d42c3654d55150b6b21f90b3e2b438c0)(class ::clang::Decl  const *) = ::clang::ObjCIvarDecl::classof;
    bool  (*method_pointer_e385f00cbddf54318a4c07db71ed921d)(enum ::clang::Decl::Kind ) = ::clang::ObjCIvarDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCIvarDecl::*method_pointer_9cf52aa67e7356c8830057609f52440c)() const = &::clang::ObjCIvarDecl::getContainingInterface;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCIvarDecl::*method_pointer_ad2eff10cbac5857aa77d570656c2539)() = &::clang::ObjCIvarDecl::getNextIvar;
    class ::clang::ObjCIvarDecl  const * (::clang::ObjCIvarDecl::*method_pointer_5bbf23d12acb5a6fbe0c6196eace8529)() const = &::clang::ObjCIvarDecl::getNextIvar;
    bool  (::clang::ObjCIvarDecl::*method_pointer_4d6a5b0397ed5b45b6017c5cf42995e9)() const = &::clang::ObjCIvarDecl::getSynthesize;
    class ::clang::QualType  (::clang::ObjCIvarDecl::*method_pointer_b3c5d6153cf85650a19dd625b99ac246)(class ::clang::QualType ) const = &::clang::ObjCIvarDecl::getUsageType;
    void  (::clang::ObjCIvarDecl::*method_pointer_602e2bcf2a345be88b0bf26f889a1ad2)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCIvarDecl::setNextIvar;
    void  (::clang::ObjCIvarDecl::*method_pointer_062aae3a2b73508cbec52eefbecd8e74)(bool ) = &::clang::ObjCIvarDecl::setSynthesize;
    boost::python::class_< class ::clang::ObjCIvarDecl, autowig::HeldType< class ::clang::ObjCIvarDecl >, boost::python::bases< class ::clang::FieldDecl >, boost::noncopyable > class_41db8c9435975db59206c5f1329984a4("ObjCIvarDecl", "", boost::python::no_init);
    class_41db8c9435975db59206c5f1329984a4.def("create_deserialized", method_pointer_d454b4ef9f1a518b950cbe50b31888ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("classof", method_pointer_d42c3654d55150b6b21f90b3e2b438c0, "");
    class_41db8c9435975db59206c5f1329984a4.def("classof_kind", method_pointer_e385f00cbddf54318a4c07db71ed921d, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_containing_interface", method_pointer_9cf52aa67e7356c8830057609f52440c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_ad2eff10cbac5857aa77d570656c2539, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_5bbf23d12acb5a6fbe0c6196eace8529, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_synthesize", method_pointer_4d6a5b0397ed5b45b6017c5cf42995e9, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_usage_type", method_pointer_b3c5d6153cf85650a19dd625b99ac246, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_next_ivar", method_pointer_602e2bcf2a345be88b0bf26f889a1ad2, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_synthesize", method_pointer_062aae3a2b73508cbec52eefbecd8e74, "");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof_kind");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("create_deserialized");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCIvarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCIvarDecl >, autowig::HeldType< class ::clang::FieldDecl > >();
    }

}