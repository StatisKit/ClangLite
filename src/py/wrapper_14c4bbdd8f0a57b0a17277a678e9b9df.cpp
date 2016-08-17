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
    bool  (::clang::EnumDecl::*method_pointer_23f1eced0213509e82aa949c452c6005)() const = &::clang::EnumDecl::isFixed;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_f9ef68e2438752f4b3cc0538d2de2fb1)() const = &::clang::EnumDecl::getInstantiatedFromMemberEnum;
    void  (::clang::EnumDecl::*method_pointer_5322aa5ba47f5081a1bb3b54c52be754)(unsigned int ) = &::clang::EnumDecl::setNumNegativeBits;
    bool  (*method_pointer_1a319bd034f2537091d7c1d9ce6386cb)(class ::clang::Decl  const *) = ::clang::EnumDecl::classof;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_a2e80dfadcfd58068b9636d967505286)() = &::clang::EnumDecl::getPreviousDecl;
    void  (::clang::EnumDecl::*method_pointer_367d30b74c825ca881cb47994527aaa0)(unsigned int ) = &::clang::EnumDecl::setNumPositiveBits;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_8f6476f5633e5b578d0a16f65371bf79)() = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_a9339218957d520c9bab3f4cb2ce04ff)() const = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_62f839893a1b5bf6b8d9b05ffa06d6ea)() const = &::clang::EnumDecl::getDefinition;
    class ::clang::EnumDecl  * (*method_pointer_426c185b51a95b0c91866f48923a96a0)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumDecl::CreateDeserialized;
    bool  (*method_pointer_d5cccd96c2565d859c4670e9c7b04180)(enum ::clang::Decl::Kind ) = ::clang::EnumDecl::classofKind;
    unsigned int  (::clang::EnumDecl::*method_pointer_fc7e49f6c87659c5bdf2d9541b63e3c6)() const = &::clang::EnumDecl::getNumPositiveBits;
    unsigned int  (::clang::EnumDecl::*method_pointer_6ce887bb6d3f5a208a4b73fcf3c04371)() const = &::clang::EnumDecl::getNumNegativeBits;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_33288ac5e9f557d3ad3dd734a1f0d8e7)() const = &::clang::EnumDecl::getMostRecentDecl;
    bool  (::clang::EnumDecl::*method_pointer_6489ee9e840f5ace8098daccb5bd9ecd)() const = &::clang::EnumDecl::isScopedUsingClassTag;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_84155ed6203354b4a8d3fcca3c3e6c4f)() const = &::clang::EnumDecl::getPreviousDecl;
    bool  (::clang::EnumDecl::*method_pointer_ceea41a641ba5c83bfff7cc4ab8b9692)() const = &::clang::EnumDecl::isScoped;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_5ed7e583f6d9592ca40a2140b984baff)() = &::clang::EnumDecl::getMostRecentDecl;
    bool  (::clang::EnumDecl::*method_pointer_d26474b5d2cf5fc0965053da8c8c9cd0)() const = &::clang::EnumDecl::isComplete;
    boost::python::class_< class ::clang::EnumDecl, autowig::HeldType< class ::clang::EnumDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_14c4bbdd8f0a57b0a17277a678e9b9df("EnumDecl", "", boost::python::no_init);
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_fixed", method_pointer_23f1eced0213509e82aa949c452c6005, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_instantiated_from_member_enum", method_pointer_f9ef68e2438752f4b3cc0538d2de2fb1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_negative_bits", method_pointer_5322aa5ba47f5081a1bb3b54c52be754, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof", method_pointer_1a319bd034f2537091d7c1d9ce6386cb, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_a2e80dfadcfd58068b9636d967505286, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_positive_bits", method_pointer_367d30b74c825ca881cb47994527aaa0, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_8f6476f5633e5b578d0a16f65371bf79, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_a9339218957d520c9bab3f4cb2ce04ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_definition", method_pointer_62f839893a1b5bf6b8d9b05ffa06d6ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("create_deserialized", method_pointer_426c185b51a95b0c91866f48923a96a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof_kind", method_pointer_d5cccd96c2565d859c4670e9c7b04180, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_positive_bits", method_pointer_fc7e49f6c87659c5bdf2d9541b63e3c6, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_negative_bits", method_pointer_6ce887bb6d3f5a208a4b73fcf3c04371, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_33288ac5e9f557d3ad3dd734a1f0d8e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped_using_class_tag", method_pointer_6489ee9e840f5ace8098daccb5bd9ecd, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_84155ed6203354b4a8d3fcca3c3e6c4f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped", method_pointer_ceea41a641ba5c83bfff7cc4ab8b9692, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_5ed7e583f6d9592ca40a2140b984baff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_complete", method_pointer_d26474b5d2cf5fc0965053da8c8c9cd0, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof_kind");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("create_deserialized");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}