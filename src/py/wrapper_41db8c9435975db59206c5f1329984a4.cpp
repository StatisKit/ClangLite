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
    class ::clang::ObjCIvarDecl  * (*method_pointer_a64815077d635f069240d757193fb2ed)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCIvarDecl::CreateDeserialized;
    bool  (*method_pointer_837f8f64d72e5a02a12df9a4ca69acfa)(class ::clang::Decl  const *) = ::clang::ObjCIvarDecl::classof;
    bool  (*method_pointer_e049e0e258655455a94781d9debdab77)(enum ::clang::Decl::Kind ) = ::clang::ObjCIvarDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCIvarDecl::*method_pointer_93e5f0b5442c5e8d89f047c43951ac94)() const = &::clang::ObjCIvarDecl::getContainingInterface;
    class ::clang::ObjCIvarDecl  const * (::clang::ObjCIvarDecl::*method_pointer_e6e584972e9c5e35b36bebdc4fcb0377)() const = &::clang::ObjCIvarDecl::getNextIvar;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCIvarDecl::*method_pointer_11baf8cc84f956a18c73f34606ab26ab)() = &::clang::ObjCIvarDecl::getNextIvar;
    bool  (::clang::ObjCIvarDecl::*method_pointer_07b0aae10b425a40ac963301a292af6c)() const = &::clang::ObjCIvarDecl::getSynthesize;
    class ::clang::QualType  (::clang::ObjCIvarDecl::*method_pointer_e6cfb32904775995a118164b62edb2ff)(class ::clang::QualType ) const = &::clang::ObjCIvarDecl::getUsageType;
    void  (::clang::ObjCIvarDecl::*method_pointer_424f70efcbaa5ac19ffbfadd56e083a0)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCIvarDecl::setNextIvar;
    void  (::clang::ObjCIvarDecl::*method_pointer_72562088b63151a694c4dbce41f08a9c)(bool ) = &::clang::ObjCIvarDecl::setSynthesize;
    boost::python::class_< class ::clang::ObjCIvarDecl, autowig::HeldType< class ::clang::ObjCIvarDecl >, boost::python::bases< class ::clang::FieldDecl >, boost::noncopyable > class_41db8c9435975db59206c5f1329984a4("ObjCIvarDecl", "", boost::python::no_init);
    class_41db8c9435975db59206c5f1329984a4.def("create_deserialized", method_pointer_a64815077d635f069240d757193fb2ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("classof", method_pointer_837f8f64d72e5a02a12df9a4ca69acfa, "");
    class_41db8c9435975db59206c5f1329984a4.def("classof_kind", method_pointer_e049e0e258655455a94781d9debdab77, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_containing_interface", method_pointer_93e5f0b5442c5e8d89f047c43951ac94, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_e6e584972e9c5e35b36bebdc4fcb0377, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_11baf8cc84f956a18c73f34606ab26ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_synthesize", method_pointer_07b0aae10b425a40ac963301a292af6c, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_usage_type", method_pointer_e6cfb32904775995a118164b62edb2ff, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_next_ivar", method_pointer_424f70efcbaa5ac19ffbfadd56e083a0, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_synthesize", method_pointer_72562088b63151a694c4dbce41f08a9c, "");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof_kind");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("create_deserialized");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCIvarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCIvarDecl >, autowig::HeldType< class ::clang::FieldDecl > >();
    }

}