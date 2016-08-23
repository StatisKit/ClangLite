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
    class ::clang::ObjCIvarDecl  * (*method_pointer_49edd78346f05a03b17c2850f2f8ab52)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCIvarDecl::CreateDeserialized;
    bool  (*method_pointer_4a38dda2c51c5542b8a1b622ee78ed25)(class ::clang::Decl  const *) = ::clang::ObjCIvarDecl::classof;
    bool  (*method_pointer_b92428cf2817515da78305500ed609e3)(enum ::clang::Decl::Kind ) = ::clang::ObjCIvarDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCIvarDecl::*method_pointer_a8d8c59a670b503982c56373adc0aed5)() const = &::clang::ObjCIvarDecl::getContainingInterface;
    class ::clang::ObjCIvarDecl  const * (::clang::ObjCIvarDecl::*method_pointer_1a0512133e325586b073afa910d3f56a)() const = &::clang::ObjCIvarDecl::getNextIvar;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCIvarDecl::*method_pointer_4e796ea129055e82bcc7cebb70945a29)() = &::clang::ObjCIvarDecl::getNextIvar;
    bool  (::clang::ObjCIvarDecl::*method_pointer_74e19527ab9a5c17882cccc76beb3667)() const = &::clang::ObjCIvarDecl::getSynthesize;
    void  (::clang::ObjCIvarDecl::*method_pointer_b450c04372ab5d788cb3cce05ac972e1)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCIvarDecl::setNextIvar;
    void  (::clang::ObjCIvarDecl::*method_pointer_14666e9dca8c575f9848556acabe695d)(bool ) = &::clang::ObjCIvarDecl::setSynthesize;
    boost::python::class_< class ::clang::ObjCIvarDecl, autowig::HeldType< class ::clang::ObjCIvarDecl >, boost::python::bases< class ::clang::FieldDecl >, boost::noncopyable > class_41db8c9435975db59206c5f1329984a4("ObjCIvarDecl", "", boost::python::no_init);
    class_41db8c9435975db59206c5f1329984a4.def("create_deserialized", method_pointer_49edd78346f05a03b17c2850f2f8ab52, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("classof", method_pointer_4a38dda2c51c5542b8a1b622ee78ed25, "");
    class_41db8c9435975db59206c5f1329984a4.def("classof_kind", method_pointer_b92428cf2817515da78305500ed609e3, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_containing_interface", method_pointer_a8d8c59a670b503982c56373adc0aed5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_1a0512133e325586b073afa910d3f56a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_4e796ea129055e82bcc7cebb70945a29, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_synthesize", method_pointer_74e19527ab9a5c17882cccc76beb3667, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_next_ivar", method_pointer_b450c04372ab5d788cb3cce05ac972e1, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_synthesize", method_pointer_14666e9dca8c575f9848556acabe695d, "");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof_kind");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("create_deserialized");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCIvarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCIvarDecl >, autowig::HeldType< class ::clang::FieldDecl > >();
    }

}