#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_5bfc55543ee4569b9b6f1d945bfacbbb()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::EmptyDecl  * (*method_pointer_24fdd7ab22f3596fb09f8da73705b8a1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EmptyDecl::CreateDeserialized;
    bool  (*method_pointer_d4290f9564fc563cb3c2db5024892457)(class ::clang::Decl  const *) = ::clang::EmptyDecl::classof;
    bool  (*method_pointer_c036b960b1fc51628160f2824419d62a)(enum ::clang::Decl::Kind ) = ::clang::EmptyDecl::classofKind;
    boost::python::class_< class ::clang::EmptyDecl, autowig::HeldType< class ::clang::EmptyDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_5bfc55543ee4569b9b6f1d945bfacbbb("EmptyDecl", "", boost::python::no_init);
    class_5bfc55543ee4569b9b6f1d945bfacbbb.def("create_deserialized", method_pointer_24fdd7ab22f3596fb09f8da73705b8a1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.def("classof", method_pointer_d4290f9564fc563cb3c2db5024892457, "");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.def("classof_kind", method_pointer_c036b960b1fc51628160f2824419d62a, "");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.staticmethod("classof_kind");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.staticmethod("create_deserialized");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EmptyDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EmptyDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}