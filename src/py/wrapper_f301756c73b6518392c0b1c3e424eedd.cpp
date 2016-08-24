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
    class ::clang::ObjCTypeParamDecl  * (*method_pointer_0240064ea9675639b8c14645a935cedb)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCTypeParamDecl::CreateDeserialized;
    bool  (*method_pointer_a94ebc23fd9e5a40a6d680f4a55a04f7)(class ::clang::Decl  const *) = ::clang::ObjCTypeParamDecl::classof;
    bool  (*method_pointer_42b105119e1f514b9b4ef2e7ed8f9c18)(enum ::clang::Decl::Kind ) = ::clang::ObjCTypeParamDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCTypeParamDecl::*method_pointer_8140c25828735bb88e180b7f05b46f96)() const = &::clang::ObjCTypeParamDecl::getColonLoc;
    unsigned int  (::clang::ObjCTypeParamDecl::*method_pointer_7ad7625ad32a5e9b93706da735da497b)() const = &::clang::ObjCTypeParamDecl::getIndex;
    class ::clang::SourceLocation  (::clang::ObjCTypeParamDecl::*method_pointer_cdafc58a4d7e5685ae61afd28b6607cc)() const = &::clang::ObjCTypeParamDecl::getVarianceLoc;
    bool  (::clang::ObjCTypeParamDecl::*method_pointer_d5aea075973657239581287d2ed7ccca)() const = &::clang::ObjCTypeParamDecl::hasExplicitBound;
    boost::python::class_< class ::clang::ObjCTypeParamDecl, autowig::HeldType< class ::clang::ObjCTypeParamDecl >, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_f301756c73b6518392c0b1c3e424eedd("ObjCTypeParamDecl", "", boost::python::no_init);
    class_f301756c73b6518392c0b1c3e424eedd.def("create_deserialized", method_pointer_0240064ea9675639b8c14645a935cedb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof", method_pointer_a94ebc23fd9e5a40a6d680f4a55a04f7, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof_kind", method_pointer_42b105119e1f514b9b4ef2e7ed8f9c18, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_colon_loc", method_pointer_8140c25828735bb88e180b7f05b46f96, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_index", method_pointer_7ad7625ad32a5e9b93706da735da497b, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_variance_loc", method_pointer_cdafc58a4d7e5685ae61afd28b6607cc, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("has_explicit_bound", method_pointer_d5aea075973657239581287d2ed7ccca, "");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof_kind");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("create_deserialized");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCTypeParamDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCTypeParamDecl >, autowig::HeldType< class ::clang::TypedefNameDecl > >();
    }

}