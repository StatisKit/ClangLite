#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_945af159c3a0553abed1af6e2d31e631()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_570313c39bf452c0951be3ee24434e30)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_1c8fc7cc47885acb8a7bd1fde41359c4)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_5f07e431a95c504da9fca085cf08ebaf)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_292328d43a85579a953d9709bef78661)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_7d615fb5e1555cb19fbcda678c663a7b)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_53294248a2735ab09432e4e5f0a3d145)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_570313c39bf452c0951be3ee24434e30, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_1c8fc7cc47885acb8a7bd1fde41359c4, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_5f07e431a95c504da9fca085cf08ebaf, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_292328d43a85579a953d9709bef78661, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_7d615fb5e1555cb19fbcda678c663a7b, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_53294248a2735ab09432e4e5f0a3d145, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}