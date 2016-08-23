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
    class ::clang::ObjCTypeParamDecl  * (*method_pointer_66e4b11a23345c1db18712fd45de069d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCTypeParamDecl::CreateDeserialized;
    bool  (*method_pointer_5869908860a45387a01aad3ae5b5d22d)(class ::clang::Decl  const *) = ::clang::ObjCTypeParamDecl::classof;
    bool  (*method_pointer_8bb3a2720f3253cfb681b54f7c7fac5f)(enum ::clang::Decl::Kind ) = ::clang::ObjCTypeParamDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCTypeParamDecl::*method_pointer_b66bf2753eef5fae9d980ae2dd45e239)() const = &::clang::ObjCTypeParamDecl::getColonLoc;
    unsigned int  (::clang::ObjCTypeParamDecl::*method_pointer_a5bae8498614515d8f263befb9b377af)() const = &::clang::ObjCTypeParamDecl::getIndex;
    class ::clang::SourceLocation  (::clang::ObjCTypeParamDecl::*method_pointer_d6c78f84225353e490fc35d96550f8bf)() const = &::clang::ObjCTypeParamDecl::getVarianceLoc;
    bool  (::clang::ObjCTypeParamDecl::*method_pointer_645ba873a2b051e4a994f8bd05924a48)() const = &::clang::ObjCTypeParamDecl::hasExplicitBound;
    boost::python::class_< class ::clang::ObjCTypeParamDecl, autowig::HeldType< class ::clang::ObjCTypeParamDecl >, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_f301756c73b6518392c0b1c3e424eedd("ObjCTypeParamDecl", "", boost::python::no_init);
    class_f301756c73b6518392c0b1c3e424eedd.def("create_deserialized", method_pointer_66e4b11a23345c1db18712fd45de069d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof", method_pointer_5869908860a45387a01aad3ae5b5d22d, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof_kind", method_pointer_8bb3a2720f3253cfb681b54f7c7fac5f, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_colon_loc", method_pointer_b66bf2753eef5fae9d980ae2dd45e239, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_index", method_pointer_a5bae8498614515d8f263befb9b377af, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_variance_loc", method_pointer_d6c78f84225353e490fc35d96550f8bf, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("has_explicit_bound", method_pointer_645ba873a2b051e4a994f8bd05924a48, "");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof_kind");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("create_deserialized");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCTypeParamDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCTypeParamDecl >, autowig::HeldType< class ::clang::TypedefNameDecl > >();
    }

}