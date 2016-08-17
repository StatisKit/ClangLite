#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_f301756c73b6518392c0b1c3e424eedd()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCTypeParamDecl  * (*method_pointer_da04fd4cf3a45c51943de2fe94f0728f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCTypeParamDecl::CreateDeserialized;
    bool  (*method_pointer_d8d598ec8a6258169e548d98fc734497)(class ::clang::Decl  const *) = ::clang::ObjCTypeParamDecl::classof;
    unsigned int  (::clang::ObjCTypeParamDecl::*method_pointer_4a97c7ce43ca54b7afb2c9418983a99f)() const = &::clang::ObjCTypeParamDecl::getIndex;
    bool  (*method_pointer_5884176b5b0d5ab4888ff57672f773ff)(enum ::clang::Decl::Kind ) = ::clang::ObjCTypeParamDecl::classofKind;
    bool  (::clang::ObjCTypeParamDecl::*method_pointer_a67045998426502f95b6471baef92118)() const = &::clang::ObjCTypeParamDecl::hasExplicitBound;
    boost::python::class_< class ::clang::ObjCTypeParamDecl, autowig::HeldType< class ::clang::ObjCTypeParamDecl >, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_f301756c73b6518392c0b1c3e424eedd("ObjCTypeParamDecl", "", boost::python::no_init);
    class_f301756c73b6518392c0b1c3e424eedd.def("create_deserialized", method_pointer_da04fd4cf3a45c51943de2fe94f0728f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof", method_pointer_d8d598ec8a6258169e548d98fc734497, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_index", method_pointer_4a97c7ce43ca54b7afb2c9418983a99f, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof_kind", method_pointer_5884176b5b0d5ab4888ff57672f773ff, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("has_explicit_bound", method_pointer_a67045998426502f95b6471baef92118, "");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof_kind");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("create_deserialized");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCTypeParamDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCTypeParamDecl >, autowig::HeldType< class ::clang::TypedefNameDecl > >();
    }

}