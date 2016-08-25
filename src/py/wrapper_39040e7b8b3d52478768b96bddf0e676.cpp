#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_39040e7b8b3d52478768b96bddf0e676()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCCompatibleAliasDecl  * (*method_pointer_99fd896754025f7bb3cc4d49b7b80a1e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCompatibleAliasDecl::CreateDeserialized;
    bool  (*method_pointer_011e6bc5d68e5b6487c6e837b6904b70)(class ::clang::Decl  const *) = ::clang::ObjCCompatibleAliasDecl::classof;
    bool  (*method_pointer_304a975d6b6d5e0e8641c72b0fcbba65)(enum ::clang::Decl::Kind ) = ::clang::ObjCCompatibleAliasDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCCompatibleAliasDecl::*method_pointer_caec6735c11a59a7a8eaf3a5b5e6fa16)() const = &::clang::ObjCCompatibleAliasDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCCompatibleAliasDecl::*method_pointer_3f1e7771ec935302824afafcdafdbcb8)() = &::clang::ObjCCompatibleAliasDecl::getClassInterface;
    void  (::clang::ObjCCompatibleAliasDecl::*method_pointer_e4fd29c214fe5bd5bed2ca22e7b9b448)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCCompatibleAliasDecl::setClassInterface;
    boost::python::class_< class ::clang::ObjCCompatibleAliasDecl, autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_39040e7b8b3d52478768b96bddf0e676("ObjCCompatibleAliasDecl", "", boost::python::no_init);
    class_39040e7b8b3d52478768b96bddf0e676.def("create_deserialized", method_pointer_99fd896754025f7bb3cc4d49b7b80a1e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("classof", method_pointer_011e6bc5d68e5b6487c6e837b6904b70, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("classof_kind", method_pointer_304a975d6b6d5e0e8641c72b0fcbba65, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_caec6735c11a59a7a8eaf3a5b5e6fa16, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_3f1e7771ec935302824afafcdafdbcb8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("set_class_interface", method_pointer_e4fd29c214fe5bd5bed2ca22e7b9b448, "");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("classof_kind");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("create_deserialized");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}