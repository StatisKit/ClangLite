#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_4b8444f6e9695ad99a1ccdbf56dc74ac()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ClassTemplateDecl  * (*method_pointer_457643f0b2f35a9eaefb0b5b2c63c069)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplateDecl::CreateDeserialized;
    void  (::clang::ClassTemplateDecl::*method_pointer_7b800473a5a65afc87bc3260ab2adf22)() const = &::clang::ClassTemplateDecl::LoadLazySpecializations;
    bool  (*method_pointer_363807f617735a16b0ba5738188b6f52)(class ::clang::Decl  const *) = ::clang::ClassTemplateDecl::classof;
    bool  (*method_pointer_ba6bc64355165d31b8ff90b3bf936355)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateDecl::classofKind;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplateDecl::*method_pointer_1c84de76c4265bcbae19f2274209e47d)(class ::clang::ClassTemplatePartialSpecializationDecl  *) = &::clang::ClassTemplateDecl::findPartialSpecInstantiatedFromMember;
    class ::clang::ClassTemplatePartialSpecializationDecl  * (::clang::ClassTemplateDecl::*method_pointer_012e3bb6f4e55799a01f7b29a5176e45)(class ::clang::QualType ) = &::clang::ClassTemplateDecl::findPartialSpecialization;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_8f282df4a6e75114bdfb00a0f04ac200)() = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_429ac7fbede45df190e2ced43f625c6d)() const = &::clang::ClassTemplateDecl::getCanonicalDecl;
    class ::clang::QualType  (::clang::ClassTemplateDecl::*method_pointer_e33ef0c2899d51db9561c46eaba7c3eb)() = &::clang::ClassTemplateDecl::getInjectedClassNameSpecialization;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_7580ce09d43a5040be8df937063d3c39)() const = &::clang::ClassTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_d216fd01fc34573ea317f701984ad13e)() const = &::clang::ClassTemplateDecl::getMostRecentDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_ab2b011182d25a4fab4185276d6b3511)() = &::clang::ClassTemplateDecl::getMostRecentDecl;
    class ::clang::ClassTemplateDecl  const * (::clang::ClassTemplateDecl::*method_pointer_791375d16de6555ea8dc8e25484cf157)() const = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateDecl::*method_pointer_5a232cec312259f997022e61de5be1ab)() = &::clang::ClassTemplateDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  * (::clang::ClassTemplateDecl::*method_pointer_638c82d0341655079cead1e4a9b7d7b0)() const = &::clang::ClassTemplateDecl::getTemplatedDecl;
    bool  (::clang::ClassTemplateDecl::*method_pointer_6087f708f18354be9fb8b6b8e74d4674)() const = &::clang::ClassTemplateDecl::isThisDeclarationADefinition;
    struct function_group
    {
        static class ::boost::python::list  function_433212c1c211565684efb603a105679d(class ::clang::ClassTemplateDecl  & parameter_0)
        { return ::clanglite::get_children(parameter_0); }
    };
    boost::python::class_< class ::clang::ClassTemplateDecl, autowig::HeldType< class ::clang::ClassTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_4b8444f6e9695ad99a1ccdbf56dc74ac("ClassTemplateDecl", "", boost::python::no_init);
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("create_deserialized", method_pointer_457643f0b2f35a9eaefb0b5b2c63c069, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("load_lazy_specializations", method_pointer_7b800473a5a65afc87bc3260ab2adf22, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof", method_pointer_363807f617735a16b0ba5738188b6f52, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("classof_kind", method_pointer_ba6bc64355165d31b8ff90b3bf936355, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_spec_instantiated_from_member", method_pointer_1c84de76c4265bcbae19f2274209e47d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("find_partial_specialization", method_pointer_012e3bb6f4e55799a01f7b29a5176e45, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_8f282df4a6e75114bdfb00a0f04ac200, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_canonical_decl", method_pointer_429ac7fbede45df190e2ced43f625c6d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_injected_class_name_specialization", method_pointer_e33ef0c2899d51db9561c46eaba7c3eb, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_instantiated_from_member_template", method_pointer_7580ce09d43a5040be8df937063d3c39, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_d216fd01fc34573ea317f701984ad13e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_most_recent_decl", method_pointer_ab2b011182d25a4fab4185276d6b3511, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_791375d16de6555ea8dc8e25484cf157, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_previous_decl", method_pointer_5a232cec312259f997022e61de5be1ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_templated_decl", method_pointer_638c82d0341655079cead1e4a9b7d7b0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("is_this_declaration_a_definition", method_pointer_6087f708f18354be9fb8b6b8e74d4674, "");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof_kind");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("create_deserialized");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.staticmethod("classof");
    class_4b8444f6e9695ad99a1ccdbf56dc74ac.def("get_children", function_group::function_433212c1c211565684efb603a105679d, "");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}