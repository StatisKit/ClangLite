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
    class ::clang::VarTemplateSpecializationDecl  * (*method_pointer_04bf47ab23f45f2fac72b469ed8e5c92)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplateSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_dec31ebc64b85c899d102e1335c79031)(class ::clang::Decl  const *) = ::clang::VarTemplateSpecializationDecl::classof;
    bool  (*method_pointer_f38ed204a02d5bc78db3844acda0db8f)(enum ::clang::Decl::Kind ) = ::clang::VarTemplateSpecializationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::VarTemplateSpecializationDecl::*method_pointer_624e65c3d94557449410d2cdac67c957)() const = &::clang::VarTemplateSpecializationDecl::getExternLoc;
    class ::clang::VarTemplateSpecializationDecl  * (::clang::VarTemplateSpecializationDecl::*method_pointer_2751b43e760f5a0e82b716ce57869cbd)() = &::clang::VarTemplateSpecializationDecl::getMostRecentDecl;
    class ::clang::SourceLocation  (::clang::VarTemplateSpecializationDecl::*method_pointer_2e8a0d6d0f6254b482795b1eccecba0f)() const = &::clang::VarTemplateSpecializationDecl::getPointOfInstantiation;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateSpecializationDecl::*method_pointer_e3a85fe589825402aa18c32f57809ce3)() const = &::clang::VarTemplateSpecializationDecl::getSpecializedTemplate;
    class ::clang::SourceLocation  (::clang::VarTemplateSpecializationDecl::*method_pointer_4d5dbc357eae5595a16967d99588b29b)() const = &::clang::VarTemplateSpecializationDecl::getTemplateKeywordLoc;
    bool  (::clang::VarTemplateSpecializationDecl::*method_pointer_c300061a5b1e5f9a9213e34053813391)() const = &::clang::VarTemplateSpecializationDecl::isExplicitInstantiationOrSpecialization;
    bool  (::clang::VarTemplateSpecializationDecl::*method_pointer_bb4f47d41dfd5c8b9252df40cf569fca)() const = &::clang::VarTemplateSpecializationDecl::isExplicitSpecialization;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_6a2990f84eaa5505b8becbdb3488c804)(class ::clang::SourceLocation ) = &::clang::VarTemplateSpecializationDecl::setExternLoc;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_ff2e60396786528983884d81f7e16cd3)(class ::clang::VarTemplatePartialSpecializationDecl  *, class ::clang::TemplateArgumentList  const *) = &::clang::VarTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_6795145557bb5909af8528cae6aa7f0f)(class ::clang::VarTemplateDecl  *) = &::clang::VarTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_c86974f1665b56849588758a81c51e4e)(class ::clang::SourceLocation ) = &::clang::VarTemplateSpecializationDecl::setPointOfInstantiation;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_4a0a1421fc4753b7a2a57f6a89f170f2)(class ::clang::SourceLocation ) = &::clang::VarTemplateSpecializationDecl::setTemplateKeywordLoc;
    boost::python::class_< class ::clang::VarTemplateSpecializationDecl, autowig::HeldType< class ::clang::VarTemplateSpecializationDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_ca8ac52d86e758baac4c0aab82cfaeb8("VarTemplateSpecializationDecl", "", boost::python::no_init);
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("create_deserialized", method_pointer_04bf47ab23f45f2fac72b469ed8e5c92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("classof", method_pointer_dec31ebc64b85c899d102e1335c79031, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("classof_kind", method_pointer_f38ed204a02d5bc78db3844acda0db8f, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_extern_loc", method_pointer_624e65c3d94557449410d2cdac67c957, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_most_recent_decl", method_pointer_2751b43e760f5a0e82b716ce57869cbd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_point_of_instantiation", method_pointer_2e8a0d6d0f6254b482795b1eccecba0f, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_specialized_template", method_pointer_e3a85fe589825402aa18c32f57809ce3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_template_keyword_loc", method_pointer_4d5dbc357eae5595a16967d99588b29b, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("is_explicit_instantiation_or_specialization", method_pointer_c300061a5b1e5f9a9213e34053813391, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("is_explicit_specialization", method_pointer_bb4f47d41dfd5c8b9252df40cf569fca, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_extern_loc", method_pointer_6a2990f84eaa5505b8becbdb3488c804, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_instantiation_of", method_pointer_ff2e60396786528983884d81f7e16cd3, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_instantiation_of", method_pointer_6795145557bb5909af8528cae6aa7f0f, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_point_of_instantiation", method_pointer_c86974f1665b56849588758a81c51e4e, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_template_keyword_loc", method_pointer_4a0a1421fc4753b7a2a57f6a89f170f2, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("classof_kind");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("create_deserialized");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplateSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplateSpecializationDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}