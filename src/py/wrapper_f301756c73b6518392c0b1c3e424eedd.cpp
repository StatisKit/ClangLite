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
    class ::clang::ObjCTypeParamDecl  * (*method_pointer_a1ff36a6c43d55e18af21a3fb8b998d9)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCTypeParamDecl::CreateDeserialized;
    bool  (*method_pointer_53fbc0b1d52f5c31855fe9e48205e764)(class ::clang::Decl  const *) = ::clang::ObjCTypeParamDecl::classof;
    bool  (*method_pointer_dc405efac57950029c8f774752a4b269)(enum ::clang::Decl::Kind ) = ::clang::ObjCTypeParamDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCTypeParamDecl::*method_pointer_73c0a6cd3e2e5280887251e8fbec37fe)() const = &::clang::ObjCTypeParamDecl::getColonLoc;
    unsigned int  (::clang::ObjCTypeParamDecl::*method_pointer_b029a325ad4e5e80b23292f505812dcb)() const = &::clang::ObjCTypeParamDecl::getIndex;
    class ::clang::SourceLocation  (::clang::ObjCTypeParamDecl::*method_pointer_8c96eecff06d5c2eba18b6acca485e3e)() const = &::clang::ObjCTypeParamDecl::getVarianceLoc;
    bool  (::clang::ObjCTypeParamDecl::*method_pointer_b4e3ee0aa8f85320b4d08cde36dd2484)() const = &::clang::ObjCTypeParamDecl::hasExplicitBound;
    boost::python::class_< class ::clang::ObjCTypeParamDecl, autowig::HeldType< class ::clang::ObjCTypeParamDecl >, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_f301756c73b6518392c0b1c3e424eedd("ObjCTypeParamDecl", "", boost::python::no_init);
    class_f301756c73b6518392c0b1c3e424eedd.def("create_deserialized", method_pointer_a1ff36a6c43d55e18af21a3fb8b998d9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof", method_pointer_53fbc0b1d52f5c31855fe9e48205e764, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof_kind", method_pointer_dc405efac57950029c8f774752a4b269, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_colon_loc", method_pointer_73c0a6cd3e2e5280887251e8fbec37fe, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_index", method_pointer_b029a325ad4e5e80b23292f505812dcb, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_variance_loc", method_pointer_8c96eecff06d5c2eba18b6acca485e3e, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("has_explicit_bound", method_pointer_b4e3ee0aa8f85320b4d08cde36dd2484, "");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof_kind");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("create_deserialized");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCTypeParamDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCTypeParamDecl >, autowig::HeldType< class ::clang::TypedefNameDecl > >();
    }

}