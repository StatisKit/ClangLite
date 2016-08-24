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
    class ::clang::EnumDecl  * (*method_pointer_287d7ae0a9fc5389ba691f8ec9340a44)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumDecl::CreateDeserialized;
    bool  (*method_pointer_aa2ea7373c4e590c9b6e95c80efc7a5b)(class ::clang::Decl  const *) = ::clang::EnumDecl::classof;
    bool  (*method_pointer_7107977624655e5e86599dce1a8f3edf)(enum ::clang::Decl::Kind ) = ::clang::EnumDecl::classofKind;
    void  (::clang::EnumDecl::*method_pointer_a7ebc3aaaac7597a8f8f6ca58db41236)(class ::clang::QualType , class ::clang::QualType , unsigned int , unsigned int ) = &::clang::EnumDecl::completeDefinition;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_8b6c9cae68045e41989fce5bc861f87f)() = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_51f2e80361525786a03934a32d8430ba)() const = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_5bd8e962e126544cbcd840c3afc0c9dd)() const = &::clang::EnumDecl::getDefinition;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_26219c4e9f725ac4880da7ef8078962d)() const = &::clang::EnumDecl::getInstantiatedFromMemberEnum;
    class ::clang::QualType  (::clang::EnumDecl::*method_pointer_be95ce27461f59609c48d6163903a2f7)() const = &::clang::EnumDecl::getIntegerType;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_e41f9db0d9f15e1bb23b3e70a54931e0)() = &::clang::EnumDecl::getMostRecentDecl;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_35f981cd39695cee84d4d3f2c178e56d)() const = &::clang::EnumDecl::getMostRecentDecl;
    unsigned int  (::clang::EnumDecl::*method_pointer_e5106296c6ee58a2ad22ee57a89bbe29)() const = &::clang::EnumDecl::getNumNegativeBits;
    unsigned int  (::clang::EnumDecl::*method_pointer_8511aa1ed92a5b67a14a7bea8f5785aa)() const = &::clang::EnumDecl::getNumPositiveBits;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_7ed268426f54590da80279e4421a1a44)() = &::clang::EnumDecl::getPreviousDecl;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_6c927a2ac1e05db5b39af8e44f5e579e)() const = &::clang::EnumDecl::getPreviousDecl;
    class ::clang::QualType  (::clang::EnumDecl::*method_pointer_1792f893dc955a779f6163fc15356071)() const = &::clang::EnumDecl::getPromotionType;
    bool  (::clang::EnumDecl::*method_pointer_8d9b2b1168125f07aa082aef3b974b6b)() const = &::clang::EnumDecl::isComplete;
    bool  (::clang::EnumDecl::*method_pointer_99a46e2270a055dc826408572cec5551)() const = &::clang::EnumDecl::isFixed;
    bool  (::clang::EnumDecl::*method_pointer_9f7010de7b345b30a3e5b1c69537e786)() const = &::clang::EnumDecl::isScoped;
    bool  (::clang::EnumDecl::*method_pointer_007c0cfb6a8155248fb458382deb8d73)() const = &::clang::EnumDecl::isScopedUsingClassTag;
    void  (::clang::EnumDecl::*method_pointer_109277f82c5c5b77929074836fade9e9)(class ::clang::QualType ) = &::clang::EnumDecl::setIntegerType;
    void  (::clang::EnumDecl::*method_pointer_5369e56d949c5b9b9be785fa7d31e436)(unsigned int ) = &::clang::EnumDecl::setNumNegativeBits;
    void  (::clang::EnumDecl::*method_pointer_efb293cda3bd5f979c43c9c84aa7e293)(unsigned int ) = &::clang::EnumDecl::setNumPositiveBits;
    void  (::clang::EnumDecl::*method_pointer_e1b9e4572317505da54ff67726657799)(class ::clang::QualType ) = &::clang::EnumDecl::setPromotionType;
    boost::python::class_< class ::clang::EnumDecl, autowig::HeldType< class ::clang::EnumDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_14c4bbdd8f0a57b0a17277a678e9b9df("EnumDecl", "", boost::python::no_init);
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("create_deserialized", method_pointer_287d7ae0a9fc5389ba691f8ec9340a44, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof", method_pointer_aa2ea7373c4e590c9b6e95c80efc7a5b, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof_kind", method_pointer_7107977624655e5e86599dce1a8f3edf, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("complete_definition", method_pointer_a7ebc3aaaac7597a8f8f6ca58db41236, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_8b6c9cae68045e41989fce5bc861f87f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_51f2e80361525786a03934a32d8430ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_definition", method_pointer_5bd8e962e126544cbcd840c3afc0c9dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_instantiated_from_member_enum", method_pointer_26219c4e9f725ac4880da7ef8078962d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_integer_type", method_pointer_be95ce27461f59609c48d6163903a2f7, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_e41f9db0d9f15e1bb23b3e70a54931e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_35f981cd39695cee84d4d3f2c178e56d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_negative_bits", method_pointer_e5106296c6ee58a2ad22ee57a89bbe29, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_positive_bits", method_pointer_8511aa1ed92a5b67a14a7bea8f5785aa, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_7ed268426f54590da80279e4421a1a44, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_6c927a2ac1e05db5b39af8e44f5e579e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_promotion_type", method_pointer_1792f893dc955a779f6163fc15356071, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_complete", method_pointer_8d9b2b1168125f07aa082aef3b974b6b, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_fixed", method_pointer_99a46e2270a055dc826408572cec5551, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped", method_pointer_9f7010de7b345b30a3e5b1c69537e786, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped_using_class_tag", method_pointer_007c0cfb6a8155248fb458382deb8d73, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_integer_type", method_pointer_109277f82c5c5b77929074836fade9e9, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_negative_bits", method_pointer_5369e56d949c5b9b9be785fa7d31e436, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_positive_bits", method_pointer_efb293cda3bd5f979c43c9c84aa7e293, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_promotion_type", method_pointer_e1b9e4572317505da54ff67726657799, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof_kind");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("create_deserialized");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}