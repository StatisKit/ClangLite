#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_14c4bbdd8f0a57b0a17277a678e9b9df()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::EnumDecl  * (*method_pointer_fe85bee552db5fcf87945b376513ec0a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumDecl::CreateDeserialized;
    bool  (*method_pointer_deeeccb7e4005aae97b8bd93632125e4)(class ::clang::Decl  const *) = ::clang::EnumDecl::classof;
    bool  (*method_pointer_1e8783ac1acf5cb5b2ae40b61b6d8345)(enum ::clang::Decl::Kind ) = ::clang::EnumDecl::classofKind;
    void  (::clang::EnumDecl::*method_pointer_1fc3d89283f750ef96b65e076242d534)(class ::clang::QualType , class ::clang::QualType , unsigned int , unsigned int ) = &::clang::EnumDecl::completeDefinition;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_8a0b5a6f0f7e5ade95f0bbd5206231a0)() const = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_c8710012eddf5cdd9869151925374e22)() = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_d9260ff1db0957d2880af270616b0ca9)() const = &::clang::EnumDecl::getDefinition;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_bdcf075557a7517ea0a42dc81f0aa465)() const = &::clang::EnumDecl::getInstantiatedFromMemberEnum;
    class ::clang::QualType  (::clang::EnumDecl::*method_pointer_228b121ea450509f8881c5789a080ac1)() const = &::clang::EnumDecl::getIntegerType;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_dc9b749342805bc29e58264e30c7c81f)() const = &::clang::EnumDecl::getMostRecentDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_b410e1abb3e35ad0b5d8bdb9a8f71b39)() = &::clang::EnumDecl::getMostRecentDecl;
    unsigned int  (::clang::EnumDecl::*method_pointer_597291571e5d568590530354416cf3d5)() const = &::clang::EnumDecl::getNumNegativeBits;
    unsigned int  (::clang::EnumDecl::*method_pointer_e3eccc05592e5114aef45ba439358b83)() const = &::clang::EnumDecl::getNumPositiveBits;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_d2f0e9fe5e7d52908b5f653e5e9ce957)() const = &::clang::EnumDecl::getPreviousDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_f81bd21ad6b758119c07b80f573d9842)() = &::clang::EnumDecl::getPreviousDecl;
    class ::clang::QualType  (::clang::EnumDecl::*method_pointer_fd6289b42f2553dc830218ce42026e62)() const = &::clang::EnumDecl::getPromotionType;
    bool  (::clang::EnumDecl::*method_pointer_6cd744494b0050b0b14d8a49373df2d2)() const = &::clang::EnumDecl::isComplete;
    bool  (::clang::EnumDecl::*method_pointer_7e24196e45a953cdbc5801f3b50eea85)() const = &::clang::EnumDecl::isFixed;
    bool  (::clang::EnumDecl::*method_pointer_5cf307e12a315cc8946cabb3177bf136)() const = &::clang::EnumDecl::isScoped;
    bool  (::clang::EnumDecl::*method_pointer_c4afe650917c528189478b4bfe082094)() const = &::clang::EnumDecl::isScopedUsingClassTag;
    void  (::clang::EnumDecl::*method_pointer_75cb1f954aca5d6886cb738ab63a3792)(class ::clang::QualType ) = &::clang::EnumDecl::setIntegerType;
    void  (::clang::EnumDecl::*method_pointer_a6cf96286df45c6f8d8087934bc7d3a5)(unsigned int ) = &::clang::EnumDecl::setNumNegativeBits;
    void  (::clang::EnumDecl::*method_pointer_6f00d221fe2e5fc4b70cdf0c44b3541e)(unsigned int ) = &::clang::EnumDecl::setNumPositiveBits;
    void  (::clang::EnumDecl::*method_pointer_d801ad68b6d1589bb9ea3c0b972296fc)(class ::clang::QualType ) = &::clang::EnumDecl::setPromotionType;
    boost::python::class_< class ::clang::EnumDecl, autowig::HeldType< class ::clang::EnumDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_14c4bbdd8f0a57b0a17277a678e9b9df("EnumDecl", "", boost::python::no_init);
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("create_deserialized", method_pointer_fe85bee552db5fcf87945b376513ec0a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof", method_pointer_deeeccb7e4005aae97b8bd93632125e4, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof_kind", method_pointer_1e8783ac1acf5cb5b2ae40b61b6d8345, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("complete_definition", method_pointer_1fc3d89283f750ef96b65e076242d534, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_8a0b5a6f0f7e5ade95f0bbd5206231a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_c8710012eddf5cdd9869151925374e22, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_definition", method_pointer_d9260ff1db0957d2880af270616b0ca9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_instantiated_from_member_enum", method_pointer_bdcf075557a7517ea0a42dc81f0aa465, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_integer_type", method_pointer_228b121ea450509f8881c5789a080ac1, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_dc9b749342805bc29e58264e30c7c81f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_b410e1abb3e35ad0b5d8bdb9a8f71b39, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_negative_bits", method_pointer_597291571e5d568590530354416cf3d5, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_positive_bits", method_pointer_e3eccc05592e5114aef45ba439358b83, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_d2f0e9fe5e7d52908b5f653e5e9ce957, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_f81bd21ad6b758119c07b80f573d9842, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_promotion_type", method_pointer_fd6289b42f2553dc830218ce42026e62, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_complete", method_pointer_6cd744494b0050b0b14d8a49373df2d2, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_fixed", method_pointer_7e24196e45a953cdbc5801f3b50eea85, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped", method_pointer_5cf307e12a315cc8946cabb3177bf136, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped_using_class_tag", method_pointer_c4afe650917c528189478b4bfe082094, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_integer_type", method_pointer_75cb1f954aca5d6886cb738ab63a3792, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_negative_bits", method_pointer_a6cf96286df45c6f8d8087934bc7d3a5, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_positive_bits", method_pointer_6f00d221fe2e5fc4b70cdf0c44b3541e, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_promotion_type", method_pointer_d801ad68b6d1589bb9ea3c0b972296fc, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof_kind");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("create_deserialized");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}