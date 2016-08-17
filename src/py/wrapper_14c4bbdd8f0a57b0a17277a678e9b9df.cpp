#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_14c4bbdd8f0a57b0a17277a678e9b9df()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::EnumDecl::*method_pointer_325bebfd585958b5b4bd3715ae12c25d)(unsigned int ) = &::clang::EnumDecl::setNumNegativeBits;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_dfc78ca265b35eaea101ba95511b33d9)() = &::clang::EnumDecl::getPreviousDecl;
    bool  (::clang::EnumDecl::*method_pointer_b3895555185a5816a138e209adbead5f)() const = &::clang::EnumDecl::isComplete;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_be110807cd1b52eb8bbba8c2208c4d88)() const = &::clang::EnumDecl::getInstantiatedFromMemberEnum;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_a4457fab374b5a92abd805ad5f2a2737)() const = &::clang::EnumDecl::getDefinition;
    bool  (::clang::EnumDecl::*method_pointer_d3d4ec3d1ffe5ba596ae3e78db517832)() const = &::clang::EnumDecl::isScopedUsingClassTag;
    class ::clang::EnumDecl  * (*method_pointer_64959709f5b352da8bb83b7082d0fb75)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumDecl::CreateDeserialized;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_5e4b63622744592e91f0834d4d38a4d3)() const = &::clang::EnumDecl::getMostRecentDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_1701852750fc59428a2817412373d5cf)() = &::clang::EnumDecl::getMostRecentDecl;
    void  (::clang::EnumDecl::*method_pointer_0ad983526c8b5373b7b108b21da3214e)(unsigned int ) = &::clang::EnumDecl::setNumPositiveBits;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_0cf376c655a858f291aba24ff348aaf2)() const = &::clang::EnumDecl::getPreviousDecl;
    bool  (::clang::EnumDecl::*method_pointer_0c5b0a581d0d553a82324d24c4afa0eb)() const = &::clang::EnumDecl::isFixed;
    unsigned int  (::clang::EnumDecl::*method_pointer_b6f989eb4e3352a4b56f4f3638940f15)() const = &::clang::EnumDecl::getNumPositiveBits;
    unsigned int  (::clang::EnumDecl::*method_pointer_86aef33e5273539b976ba231015b1415)() const = &::clang::EnumDecl::getNumNegativeBits;
    bool  (::clang::EnumDecl::*method_pointer_e7ecf2bb1a915028b279f71d9e50e845)() const = &::clang::EnumDecl::isScoped;
    bool  (*method_pointer_257def67c2e5588ea68b7098142c4190)(enum ::clang::Decl::Kind ) = ::clang::EnumDecl::classofKind;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_05bd41e95bc257a6b35a255d0ddade28)() const = &::clang::EnumDecl::getCanonicalDecl;
    bool  (*method_pointer_c75bf3339ccc52e09bdb06f73224567e)(class ::clang::Decl  const *) = ::clang::EnumDecl::classof;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_295b8f968ea95e9d8957bc84ee092453)() = &::clang::EnumDecl::getCanonicalDecl;
    boost::python::class_< class ::clang::EnumDecl, autowig::HeldType< class ::clang::EnumDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_14c4bbdd8f0a57b0a17277a678e9b9df("EnumDecl", "", boost::python::no_init);
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_negative_bits", method_pointer_325bebfd585958b5b4bd3715ae12c25d, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_dfc78ca265b35eaea101ba95511b33d9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_complete", method_pointer_b3895555185a5816a138e209adbead5f, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_instantiated_from_member_enum", method_pointer_be110807cd1b52eb8bbba8c2208c4d88, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_definition", method_pointer_a4457fab374b5a92abd805ad5f2a2737, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped_using_class_tag", method_pointer_d3d4ec3d1ffe5ba596ae3e78db517832, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("create_deserialized", method_pointer_64959709f5b352da8bb83b7082d0fb75, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_5e4b63622744592e91f0834d4d38a4d3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_1701852750fc59428a2817412373d5cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_positive_bits", method_pointer_0ad983526c8b5373b7b108b21da3214e, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_0cf376c655a858f291aba24ff348aaf2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_fixed", method_pointer_0c5b0a581d0d553a82324d24c4afa0eb, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_positive_bits", method_pointer_b6f989eb4e3352a4b56f4f3638940f15, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_negative_bits", method_pointer_86aef33e5273539b976ba231015b1415, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped", method_pointer_e7ecf2bb1a915028b279f71d9e50e845, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof_kind", method_pointer_257def67c2e5588ea68b7098142c4190, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_05bd41e95bc257a6b35a255d0ddade28, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof", method_pointer_c75bf3339ccc52e09bdb06f73224567e, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_295b8f968ea95e9d8957bc84ee092453, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof_kind");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("create_deserialized");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}