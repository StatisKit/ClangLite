#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_ca8ac52d86e758baac4c0aab82cfaeb8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarTemplateSpecializationDecl  * (*method_pointer_c99afaedfa0a529a9a434510d03ea80b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplateSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_07216e6e024353faa5f8063218c41d9b)(class ::clang::Decl  const *) = ::clang::VarTemplateSpecializationDecl::classof;
    bool  (*method_pointer_e60a42d67cca566cbb00c1194b4d3b8b)(enum ::clang::Decl::Kind ) = ::clang::VarTemplateSpecializationDecl::classofKind;
    class ::clang::VarTemplateSpecializationDecl  * (::clang::VarTemplateSpecializationDecl::*method_pointer_dd4d0addba3d555699b7e0b85d3c1bf1)() = &::clang::VarTemplateSpecializationDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateSpecializationDecl::*method_pointer_cdc54c98da4452b9b8faa71c17fc3381)() const = &::clang::VarTemplateSpecializationDecl::getSpecializedTemplate;
    bool  (::clang::VarTemplateSpecializationDecl::*method_pointer_93e0752d7fc5560eb381d87c6949faa3)() const = &::clang::VarTemplateSpecializationDecl::isExplicitInstantiationOrSpecialization;
    bool  (::clang::VarTemplateSpecializationDecl::*method_pointer_4a75b026cd2e534ba588d708ef0153eb)() const = &::clang::VarTemplateSpecializationDecl::isExplicitSpecialization;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_ca99380d69105837874c396599fb6f1b)(class ::clang::VarTemplatePartialSpecializationDecl  *, class ::clang::TemplateArgumentList  const *) = &::clang::VarTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_d9561238239c52489687435e14d3f6b7)(class ::clang::VarTemplateDecl  *) = &::clang::VarTemplateSpecializationDecl::setInstantiationOf;
    boost::python::class_< class ::clang::VarTemplateSpecializationDecl, autowig::HeldType< class ::clang::VarTemplateSpecializationDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_ca8ac52d86e758baac4c0aab82cfaeb8("VarTemplateSpecializationDecl", "", boost::python::no_init);
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("create_deserialized", method_pointer_c99afaedfa0a529a9a434510d03ea80b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("classof", method_pointer_07216e6e024353faa5f8063218c41d9b, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("classof_kind", method_pointer_e60a42d67cca566cbb00c1194b4d3b8b, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_most_recent_decl", method_pointer_dd4d0addba3d555699b7e0b85d3c1bf1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_specialized_template", method_pointer_cdc54c98da4452b9b8faa71c17fc3381, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("is_explicit_instantiation_or_specialization", method_pointer_93e0752d7fc5560eb381d87c6949faa3, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("is_explicit_specialization", method_pointer_4a75b026cd2e534ba588d708ef0153eb, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_instantiation_of", method_pointer_ca99380d69105837874c396599fb6f1b, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_instantiation_of", method_pointer_d9561238239c52489687435e14d3f6b7, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("classof_kind");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("create_deserialized");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplateSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplateSpecializationDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}