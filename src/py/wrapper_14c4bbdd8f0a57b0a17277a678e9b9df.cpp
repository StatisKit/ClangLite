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
    class ::clang::EnumDecl  * (*method_pointer_6c07b3f046f352b88db52bdc5016fdaf)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumDecl::CreateDeserialized;
    bool  (*method_pointer_334e9e2fecbb52c19218ad68c0f47caf)(class ::clang::Decl  const *) = ::clang::EnumDecl::classof;
    bool  (*method_pointer_9b58a2c77e9b55c99a52f5db262df13b)(enum ::clang::Decl::Kind ) = ::clang::EnumDecl::classofKind;
    void  (::clang::EnumDecl::*method_pointer_f0578a6146b452889a2647127f029a36)(class ::clang::QualType , class ::clang::QualType , unsigned int , unsigned int ) = &::clang::EnumDecl::completeDefinition;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_f4084072979a59af9f3d2d484c4a7bae)() = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_267f281134865452ac2e8bdc4b2a14bd)() const = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_2a1508a38ed75c17b3b49817d54419e1)() const = &::clang::EnumDecl::getDefinition;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_00ebb0d687885bd9a7b23b3de7763239)() const = &::clang::EnumDecl::getInstantiatedFromMemberEnum;
    class ::clang::QualType  (::clang::EnumDecl::*method_pointer_027931f6dd7057a79e82ff16f7ce53ad)() const = &::clang::EnumDecl::getIntegerType;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_4d967a75d2db5e4aa465ec220c72b6df)() = &::clang::EnumDecl::getMostRecentDecl;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_2336cfdc2e34594cab69f039b57c9d5c)() const = &::clang::EnumDecl::getMostRecentDecl;
    unsigned int  (::clang::EnumDecl::*method_pointer_f1eeecdfc1da50c1af9fee8820ad2cb0)() const = &::clang::EnumDecl::getNumNegativeBits;
    unsigned int  (::clang::EnumDecl::*method_pointer_a2abf8aa6d5255e1b58a1605ccfe2a3f)() const = &::clang::EnumDecl::getNumPositiveBits;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_7a9512cd60905a6f86a357c25fc704a5)() = &::clang::EnumDecl::getPreviousDecl;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_6b4cb71596fe58e5adb7f65de47df7d5)() const = &::clang::EnumDecl::getPreviousDecl;
    class ::clang::QualType  (::clang::EnumDecl::*method_pointer_d763efe900b158e591686e343b82ca07)() const = &::clang::EnumDecl::getPromotionType;
    bool  (::clang::EnumDecl::*method_pointer_733c102e0a535e3cb87a86775ee8ccbc)() const = &::clang::EnumDecl::isComplete;
    bool  (::clang::EnumDecl::*method_pointer_438d18a97256505fabb7c6999b5f040f)() const = &::clang::EnumDecl::isFixed;
    bool  (::clang::EnumDecl::*method_pointer_cde8e46e212a5a7fba8d181cdaf372e9)() const = &::clang::EnumDecl::isScoped;
    bool  (::clang::EnumDecl::*method_pointer_574a287f8718536f9389b1b8b2b5d587)() const = &::clang::EnumDecl::isScopedUsingClassTag;
    void  (::clang::EnumDecl::*method_pointer_25d29fd21c0b544698fa5c089775f601)(class ::clang::QualType ) = &::clang::EnumDecl::setIntegerType;
    void  (::clang::EnumDecl::*method_pointer_cea6c57a13d65bbabcc1bc13f05b283b)(unsigned int ) = &::clang::EnumDecl::setNumNegativeBits;
    void  (::clang::EnumDecl::*method_pointer_d30d00d331495ac3ae9d7cf57b608b4e)(unsigned int ) = &::clang::EnumDecl::setNumPositiveBits;
    void  (::clang::EnumDecl::*method_pointer_46d39fbb58f2590ab506dbc34fe59303)(class ::clang::QualType ) = &::clang::EnumDecl::setPromotionType;
    boost::python::class_< class ::clang::EnumDecl, autowig::HeldType< class ::clang::EnumDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_14c4bbdd8f0a57b0a17277a678e9b9df("EnumDecl", "", boost::python::no_init);
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("create_deserialized", method_pointer_6c07b3f046f352b88db52bdc5016fdaf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof", method_pointer_334e9e2fecbb52c19218ad68c0f47caf, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof_kind", method_pointer_9b58a2c77e9b55c99a52f5db262df13b, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("complete_definition", method_pointer_f0578a6146b452889a2647127f029a36, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_f4084072979a59af9f3d2d484c4a7bae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_267f281134865452ac2e8bdc4b2a14bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_definition", method_pointer_2a1508a38ed75c17b3b49817d54419e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_instantiated_from_member_enum", method_pointer_00ebb0d687885bd9a7b23b3de7763239, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_integer_type", method_pointer_027931f6dd7057a79e82ff16f7ce53ad, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_4d967a75d2db5e4aa465ec220c72b6df, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_2336cfdc2e34594cab69f039b57c9d5c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_negative_bits", method_pointer_f1eeecdfc1da50c1af9fee8820ad2cb0, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_positive_bits", method_pointer_a2abf8aa6d5255e1b58a1605ccfe2a3f, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_7a9512cd60905a6f86a357c25fc704a5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_6b4cb71596fe58e5adb7f65de47df7d5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_promotion_type", method_pointer_d763efe900b158e591686e343b82ca07, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_complete", method_pointer_733c102e0a535e3cb87a86775ee8ccbc, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_fixed", method_pointer_438d18a97256505fabb7c6999b5f040f, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped", method_pointer_cde8e46e212a5a7fba8d181cdaf372e9, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped_using_class_tag", method_pointer_574a287f8718536f9389b1b8b2b5d587, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_integer_type", method_pointer_25d29fd21c0b544698fa5c089775f601, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_negative_bits", method_pointer_cea6c57a13d65bbabcc1bc13f05b283b, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_positive_bits", method_pointer_d30d00d331495ac3ae9d7cf57b608b4e, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_promotion_type", method_pointer_46d39fbb58f2590ab506dbc34fe59303, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof_kind");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("create_deserialized");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}