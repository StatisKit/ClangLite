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
    bool  (::clang::ObjCTypeParamDecl::*method_pointer_1c5a5e1b55585328a5eb5e12afccab0e)() const = &::clang::ObjCTypeParamDecl::hasExplicitBound;
    bool  (*method_pointer_70c6997b51f25234936d308d822db2fd)(enum ::clang::Decl::Kind ) = ::clang::ObjCTypeParamDecl::classofKind;
    class ::clang::ObjCTypeParamDecl  * (*method_pointer_c7fff97724bd52748ccfebc2e5986c1b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCTypeParamDecl::CreateDeserialized;
    unsigned int  (::clang::ObjCTypeParamDecl::*method_pointer_6089e1cfd80e5b7cba8526795b2a7e01)() const = &::clang::ObjCTypeParamDecl::getIndex;
    bool  (*method_pointer_f7690b64b0755b7692521528f141286c)(class ::clang::Decl  const *) = ::clang::ObjCTypeParamDecl::classof;
    boost::python::class_< class ::clang::ObjCTypeParamDecl, autowig::HeldType< class ::clang::ObjCTypeParamDecl >, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_f301756c73b6518392c0b1c3e424eedd("ObjCTypeParamDecl", "", boost::python::no_init);
    class_f301756c73b6518392c0b1c3e424eedd.def("has_explicit_bound", method_pointer_1c5a5e1b55585328a5eb5e12afccab0e, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof_kind", method_pointer_70c6997b51f25234936d308d822db2fd, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("create_deserialized", method_pointer_c7fff97724bd52748ccfebc2e5986c1b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_index", method_pointer_6089e1cfd80e5b7cba8526795b2a7e01, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof", method_pointer_f7690b64b0755b7692521528f141286c, "");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof_kind");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("create_deserialized");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCTypeParamDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCTypeParamDecl >, autowig::HeldType< class ::clang::TypedefNameDecl > >();
    }

}