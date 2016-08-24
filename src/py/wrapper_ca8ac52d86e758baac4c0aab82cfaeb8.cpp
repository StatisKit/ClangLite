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
    class ::clang::VarTemplateSpecializationDecl  * (*method_pointer_3cab173133415a108b2c728a281fe65c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplateSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_569616caeec25e17bb8a79e6cde0ee67)(class ::clang::Decl  const *) = ::clang::VarTemplateSpecializationDecl::classof;
    bool  (*method_pointer_f488876476f450eda7bd3be099ca637d)(enum ::clang::Decl::Kind ) = ::clang::VarTemplateSpecializationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::VarTemplateSpecializationDecl::*method_pointer_0ef4727602d0509eaa33d0ed3cb6b8c8)() const = &::clang::VarTemplateSpecializationDecl::getExternLoc;
    class ::clang::VarTemplateSpecializationDecl  * (::clang::VarTemplateSpecializationDecl::*method_pointer_352f7cae21435089a9ed53f62ff46662)() = &::clang::VarTemplateSpecializationDecl::getMostRecentDecl;
    class ::clang::SourceLocation  (::clang::VarTemplateSpecializationDecl::*method_pointer_d89290d413835b04a654e3880c534e84)() const = &::clang::VarTemplateSpecializationDecl::getPointOfInstantiation;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateSpecializationDecl::*method_pointer_5b94f80a56a4565191cd35f301192983)() const = &::clang::VarTemplateSpecializationDecl::getSpecializedTemplate;
    class ::clang::TemplateArgumentList  const & (::clang::VarTemplateSpecializationDecl::*method_pointer_3423e696b954527ebc913f008eddf07a)() const = &::clang::VarTemplateSpecializationDecl::getTemplateArgs;
    class ::clang::TemplateArgumentList  const & (::clang::VarTemplateSpecializationDecl::*method_pointer_7b34f2f4375a515ebb69831d674d874f)() const = &::clang::VarTemplateSpecializationDecl::getTemplateInstantiationArgs;
    class ::clang::SourceLocation  (::clang::VarTemplateSpecializationDecl::*method_pointer_8bb12abae6005e428d74d121978a3e08)() const = &::clang::VarTemplateSpecializationDecl::getTemplateKeywordLoc;
    bool  (::clang::VarTemplateSpecializationDecl::*method_pointer_b743ce0ee79358b5b6db3531f2e02bbf)() const = &::clang::VarTemplateSpecializationDecl::isExplicitInstantiationOrSpecialization;
    bool  (::clang::VarTemplateSpecializationDecl::*method_pointer_2e3f5a0f831c57a0906a3098f42695c8)() const = &::clang::VarTemplateSpecializationDecl::isExplicitSpecialization;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_200765f2bd5356edbb950930bf4db94a)(class ::clang::SourceLocation ) = &::clang::VarTemplateSpecializationDecl::setExternLoc;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_ebd80a2a36ad5561bcfc836e0671fc45)(class ::clang::VarTemplateDecl  *) = &::clang::VarTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_4abed62510d8509a96e937435c9faab7)(class ::clang::VarTemplatePartialSpecializationDecl  *, class ::clang::TemplateArgumentList  const *) = &::clang::VarTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_fde104e65d98586fab56ced0c7e07162)(class ::clang::SourceLocation ) = &::clang::VarTemplateSpecializationDecl::setPointOfInstantiation;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_50366eb2564d5e1285d488714bc4b8dc)(class ::clang::SourceLocation ) = &::clang::VarTemplateSpecializationDecl::setTemplateKeywordLoc;
    boost::python::class_< class ::clang::VarTemplateSpecializationDecl, autowig::HeldType< class ::clang::VarTemplateSpecializationDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_ca8ac52d86e758baac4c0aab82cfaeb8("VarTemplateSpecializationDecl", "", boost::python::no_init);
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("create_deserialized", method_pointer_3cab173133415a108b2c728a281fe65c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("classof", method_pointer_569616caeec25e17bb8a79e6cde0ee67, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("classof_kind", method_pointer_f488876476f450eda7bd3be099ca637d, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_extern_loc", method_pointer_0ef4727602d0509eaa33d0ed3cb6b8c8, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_most_recent_decl", method_pointer_352f7cae21435089a9ed53f62ff46662, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_point_of_instantiation", method_pointer_d89290d413835b04a654e3880c534e84, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_specialized_template", method_pointer_5b94f80a56a4565191cd35f301192983, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_template_args", method_pointer_3423e696b954527ebc913f008eddf07a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_template_instantiation_args", method_pointer_7b34f2f4375a515ebb69831d674d874f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_template_keyword_loc", method_pointer_8bb12abae6005e428d74d121978a3e08, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("is_explicit_instantiation_or_specialization", method_pointer_b743ce0ee79358b5b6db3531f2e02bbf, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("is_explicit_specialization", method_pointer_2e3f5a0f831c57a0906a3098f42695c8, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_extern_loc", method_pointer_200765f2bd5356edbb950930bf4db94a, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_instantiation_of", method_pointer_ebd80a2a36ad5561bcfc836e0671fc45, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_instantiation_of", method_pointer_4abed62510d8509a96e937435c9faab7, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_point_of_instantiation", method_pointer_fde104e65d98586fab56ced0c7e07162, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_template_keyword_loc", method_pointer_50366eb2564d5e1285d488714bc4b8dc, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("classof_kind");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("create_deserialized");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplateSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplateSpecializationDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}