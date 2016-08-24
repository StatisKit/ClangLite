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
    class ::clang::ObjCIvarDecl  * (*method_pointer_1ce3b7225a0854d3aed26e53de0a652c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCIvarDecl::CreateDeserialized;
    bool  (*method_pointer_ed88139f9b89570ca9e472b2a91fe96b)(class ::clang::Decl  const *) = ::clang::ObjCIvarDecl::classof;
    bool  (*method_pointer_5e7bfcca9e615213b6e5f324854287f5)(enum ::clang::Decl::Kind ) = ::clang::ObjCIvarDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCIvarDecl::*method_pointer_9e1fcc093dbd5a6a9e0cb50dfebc1fe8)() const = &::clang::ObjCIvarDecl::getContainingInterface;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCIvarDecl::*method_pointer_bafcaacf28f05bfe9cfd223ac512aa49)() = &::clang::ObjCIvarDecl::getNextIvar;
    class ::clang::ObjCIvarDecl  const * (::clang::ObjCIvarDecl::*method_pointer_15bbf7e13d245c7b8f8a94780be1bb36)() const = &::clang::ObjCIvarDecl::getNextIvar;
    bool  (::clang::ObjCIvarDecl::*method_pointer_744c5a12344450dcaba1d30aa87f41ac)() const = &::clang::ObjCIvarDecl::getSynthesize;
    class ::clang::QualType  (::clang::ObjCIvarDecl::*method_pointer_f887e0f40262589597ee3a543b86192d)(class ::clang::QualType ) const = &::clang::ObjCIvarDecl::getUsageType;
    void  (::clang::ObjCIvarDecl::*method_pointer_af642be3b85a5743b73d1c7e6106b884)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCIvarDecl::setNextIvar;
    void  (::clang::ObjCIvarDecl::*method_pointer_fba52a8462a15e378e8f1140629a55a5)(bool ) = &::clang::ObjCIvarDecl::setSynthesize;
    boost::python::class_< class ::clang::ObjCIvarDecl, autowig::HeldType< class ::clang::ObjCIvarDecl >, boost::python::bases< class ::clang::FieldDecl >, boost::noncopyable > class_41db8c9435975db59206c5f1329984a4("ObjCIvarDecl", "", boost::python::no_init);
    class_41db8c9435975db59206c5f1329984a4.def("create_deserialized", method_pointer_1ce3b7225a0854d3aed26e53de0a652c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("classof", method_pointer_ed88139f9b89570ca9e472b2a91fe96b, "");
    class_41db8c9435975db59206c5f1329984a4.def("classof_kind", method_pointer_5e7bfcca9e615213b6e5f324854287f5, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_containing_interface", method_pointer_9e1fcc093dbd5a6a9e0cb50dfebc1fe8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_bafcaacf28f05bfe9cfd223ac512aa49, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_15bbf7e13d245c7b8f8a94780be1bb36, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_synthesize", method_pointer_744c5a12344450dcaba1d30aa87f41ac, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_usage_type", method_pointer_f887e0f40262589597ee3a543b86192d, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_next_ivar", method_pointer_af642be3b85a5743b73d1c7e6106b884, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_synthesize", method_pointer_fba52a8462a15e378e8f1140629a55a5, "");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof_kind");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("create_deserialized");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCIvarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCIvarDecl >, autowig::HeldType< class ::clang::FieldDecl > >();
    }

}