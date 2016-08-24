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
    bool  (*method_pointer_f6d65b534e895030a6af78cbb3366f27)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_6b5b10ecba6a5a73a4b11aadb5d1fab3)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_5981fcac20fc5c08afa1a4bbf612dfcb)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_ebbb2ef1b2765a03a43c30a8936c8484)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_24de20957d31589d98f3b910cb26612c)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_8440063ace1153a4a416ebdd91f18a8c)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_f6d65b534e895030a6af78cbb3366f27, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_6b5b10ecba6a5a73a4b11aadb5d1fab3, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_5981fcac20fc5c08afa1a4bbf612dfcb, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_ebbb2ef1b2765a03a43c30a8936c8484, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_24de20957d31589d98f3b910cb26612c, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_8440063ace1153a4a416ebdd91f18a8c, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}