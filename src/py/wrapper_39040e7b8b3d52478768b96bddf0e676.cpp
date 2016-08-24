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
    class ::clang::ObjCCompatibleAliasDecl  * (*method_pointer_a5fa3bc4bf3d5badbf2c8f7eb9ac6328)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCompatibleAliasDecl::CreateDeserialized;
    bool  (*method_pointer_5032803f0cb455c090bed32876078cab)(class ::clang::Decl  const *) = ::clang::ObjCCompatibleAliasDecl::classof;
    bool  (*method_pointer_42961a738bc95927a237e3a137e33634)(enum ::clang::Decl::Kind ) = ::clang::ObjCCompatibleAliasDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCCompatibleAliasDecl::*method_pointer_2f416be0c98a545ab9fd63f9d2f3042e)() const = &::clang::ObjCCompatibleAliasDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCCompatibleAliasDecl::*method_pointer_18d0c11df1d75f418864170be26dc5c7)() = &::clang::ObjCCompatibleAliasDecl::getClassInterface;
    void  (::clang::ObjCCompatibleAliasDecl::*method_pointer_4f527f47f7d35d0dbebca69e151bfff4)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCCompatibleAliasDecl::setClassInterface;
    boost::python::class_< class ::clang::ObjCCompatibleAliasDecl, autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_39040e7b8b3d52478768b96bddf0e676("ObjCCompatibleAliasDecl", "", boost::python::no_init);
    class_39040e7b8b3d52478768b96bddf0e676.def("create_deserialized", method_pointer_a5fa3bc4bf3d5badbf2c8f7eb9ac6328, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("classof", method_pointer_5032803f0cb455c090bed32876078cab, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("classof_kind", method_pointer_42961a738bc95927a237e3a137e33634, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_2f416be0c98a545ab9fd63f9d2f3042e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_18d0c11df1d75f418864170be26dc5c7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("set_class_interface", method_pointer_4f527f47f7d35d0dbebca69e151bfff4, "");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("classof_kind");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("create_deserialized");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}