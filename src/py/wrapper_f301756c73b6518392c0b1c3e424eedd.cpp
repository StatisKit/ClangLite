#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_f301756c73b6518392c0b1c3e424eedd()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCTypeParamDecl  * (*method_pointer_1e3350bcdb4b555d9576c080f6861de7)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCTypeParamDecl::CreateDeserialized;
    bool  (*method_pointer_774f0f7c899e5f27aad641a53fd29d04)(class ::clang::Decl  const *) = ::clang::ObjCTypeParamDecl::classof;
    bool  (*method_pointer_6a3d7af3c122549d8480474eaab24e55)(enum ::clang::Decl::Kind ) = ::clang::ObjCTypeParamDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCTypeParamDecl::*method_pointer_5f19cda47e40539a9b0be85881cb5993)() const = &::clang::ObjCTypeParamDecl::getColonLoc;
    unsigned int  (::clang::ObjCTypeParamDecl::*method_pointer_439d9bbfbd0858d2bae87fe77897f464)() const = &::clang::ObjCTypeParamDecl::getIndex;
    class ::clang::SourceLocation  (::clang::ObjCTypeParamDecl::*method_pointer_db60e817aadc5bf4bd259c41cf981295)() const = &::clang::ObjCTypeParamDecl::getVarianceLoc;
    bool  (::clang::ObjCTypeParamDecl::*method_pointer_faaab2002d475642a44030f2dc290ddb)() const = &::clang::ObjCTypeParamDecl::hasExplicitBound;
    boost::python::class_< class ::clang::ObjCTypeParamDecl, autowig::HeldType< class ::clang::ObjCTypeParamDecl >, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_f301756c73b6518392c0b1c3e424eedd("ObjCTypeParamDecl", "", boost::python::no_init);
    class_f301756c73b6518392c0b1c3e424eedd.def("create_deserialized", method_pointer_1e3350bcdb4b555d9576c080f6861de7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof", method_pointer_774f0f7c899e5f27aad641a53fd29d04, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof_kind", method_pointer_6a3d7af3c122549d8480474eaab24e55, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_colon_loc", method_pointer_5f19cda47e40539a9b0be85881cb5993, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_index", method_pointer_439d9bbfbd0858d2bae87fe77897f464, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_variance_loc", method_pointer_db60e817aadc5bf4bd259c41cf981295, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("has_explicit_bound", method_pointer_faaab2002d475642a44030f2dc290ddb, "");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof_kind");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("create_deserialized");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCTypeParamDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCTypeParamDecl >, autowig::HeldType< class ::clang::TypedefNameDecl > >();
    }

}