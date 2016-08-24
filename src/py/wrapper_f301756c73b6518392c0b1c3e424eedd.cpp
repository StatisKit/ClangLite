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
    class ::clang::ObjCTypeParamDecl  * (*method_pointer_d6d5ac742d605cfaa561aab1f349e697)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCTypeParamDecl::CreateDeserialized;
    bool  (*method_pointer_ac267aa0a5565e069361324179517bc7)(class ::clang::Decl  const *) = ::clang::ObjCTypeParamDecl::classof;
    bool  (*method_pointer_2c9179bbfec95b4294a204a626a54ce1)(enum ::clang::Decl::Kind ) = ::clang::ObjCTypeParamDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCTypeParamDecl::*method_pointer_b64bbf9f83a85bf4a641174bec8c427f)() const = &::clang::ObjCTypeParamDecl::getColonLoc;
    unsigned int  (::clang::ObjCTypeParamDecl::*method_pointer_1fb5bc9a7c76523da5e8fbadd5314cf1)() const = &::clang::ObjCTypeParamDecl::getIndex;
    class ::clang::SourceLocation  (::clang::ObjCTypeParamDecl::*method_pointer_c54106d79d465f22badd0da41a05ff50)() const = &::clang::ObjCTypeParamDecl::getVarianceLoc;
    bool  (::clang::ObjCTypeParamDecl::*method_pointer_2140a1cc0e3658d3be5c98b5a7840efe)() const = &::clang::ObjCTypeParamDecl::hasExplicitBound;
    boost::python::class_< class ::clang::ObjCTypeParamDecl, autowig::HeldType< class ::clang::ObjCTypeParamDecl >, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_f301756c73b6518392c0b1c3e424eedd("ObjCTypeParamDecl", "", boost::python::no_init);
    class_f301756c73b6518392c0b1c3e424eedd.def("create_deserialized", method_pointer_d6d5ac742d605cfaa561aab1f349e697, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof", method_pointer_ac267aa0a5565e069361324179517bc7, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof_kind", method_pointer_2c9179bbfec95b4294a204a626a54ce1, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_colon_loc", method_pointer_b64bbf9f83a85bf4a641174bec8c427f, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_index", method_pointer_1fb5bc9a7c76523da5e8fbadd5314cf1, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_variance_loc", method_pointer_c54106d79d465f22badd0da41a05ff50, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("has_explicit_bound", method_pointer_2140a1cc0e3658d3be5c98b5a7840efe, "");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof_kind");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("create_deserialized");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCTypeParamDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCTypeParamDecl >, autowig::HeldType< class ::clang::TypedefNameDecl > >();
    }

}