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
    class ::clang::EnumDecl  * (*method_pointer_2974e690707252e68bb4828d426a5f56)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumDecl::CreateDeserialized;
    bool  (*method_pointer_5f3d9e187d7355cbad75b188f4375f29)(class ::clang::Decl  const *) = ::clang::EnumDecl::classof;
    bool  (*method_pointer_4f741dea77a053db932276aba4520564)(enum ::clang::Decl::Kind ) = ::clang::EnumDecl::classofKind;
    void  (::clang::EnumDecl::*method_pointer_c16a7eb90fa85f6eae7c32538c2fcec5)(class ::clang::QualType , class ::clang::QualType , unsigned int , unsigned int ) = &::clang::EnumDecl::completeDefinition;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_a87e432b53895124bfff5d17ab396f88)() const = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_bedfbdb1489e58139c4a719d50af6637)() = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_739947fb60c95a8d94fbefae8b225c53)() const = &::clang::EnumDecl::getDefinition;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_678f08b36c525d529d93b6677bac6c0a)() const = &::clang::EnumDecl::getInstantiatedFromMemberEnum;
    class ::clang::QualType  (::clang::EnumDecl::*method_pointer_d1cd8a5b3f1a5fbab1e13589796c0900)() const = &::clang::EnumDecl::getIntegerType;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_6f9096d36fc05294818be577a244a5aa)() = &::clang::EnumDecl::getMostRecentDecl;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_d593b7cb43ed5409a5e65a4a7f8aa26d)() const = &::clang::EnumDecl::getMostRecentDecl;
    unsigned int  (::clang::EnumDecl::*method_pointer_6415b7b630ea5bbb963dac92d6c0be2d)() const = &::clang::EnumDecl::getNumNegativeBits;
    unsigned int  (::clang::EnumDecl::*method_pointer_d1055ed67e8850aa8a5bac02f432c35d)() const = &::clang::EnumDecl::getNumPositiveBits;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_28d12cf26681565a8b8b6c711aa1ac38)() = &::clang::EnumDecl::getPreviousDecl;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_f8ecf4b9085e5729acaa0c435685558c)() const = &::clang::EnumDecl::getPreviousDecl;
    class ::clang::QualType  (::clang::EnumDecl::*method_pointer_f3b22da91eeb50fd9de7a9556fc663d9)() const = &::clang::EnumDecl::getPromotionType;
    bool  (::clang::EnumDecl::*method_pointer_b4b47d96acfd570e842721e2030a8203)() const = &::clang::EnumDecl::isComplete;
    bool  (::clang::EnumDecl::*method_pointer_a9643e3343a35fc18d75991da5d5cdaa)() const = &::clang::EnumDecl::isFixed;
    bool  (::clang::EnumDecl::*method_pointer_f4a80eb44647579ca6bcc00efde5e03a)() const = &::clang::EnumDecl::isScoped;
    bool  (::clang::EnumDecl::*method_pointer_001e69f645e85e2b9d6f2561a213c661)() const = &::clang::EnumDecl::isScopedUsingClassTag;
    void  (::clang::EnumDecl::*method_pointer_45f38493348355e7ab2104fe35019aaf)(class ::clang::QualType ) = &::clang::EnumDecl::setIntegerType;
    void  (::clang::EnumDecl::*method_pointer_f126d51a18815cd7beeb64b986f43264)(unsigned int ) = &::clang::EnumDecl::setNumNegativeBits;
    void  (::clang::EnumDecl::*method_pointer_eed483b5549a53d7881590def54154cb)(unsigned int ) = &::clang::EnumDecl::setNumPositiveBits;
    void  (::clang::EnumDecl::*method_pointer_ed332c274d2456fdb47fb3b755c82a18)(class ::clang::QualType ) = &::clang::EnumDecl::setPromotionType;
    boost::python::class_< class ::clang::EnumDecl, autowig::HeldType< class ::clang::EnumDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_14c4bbdd8f0a57b0a17277a678e9b9df("EnumDecl", "", boost::python::no_init);
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("create_deserialized", method_pointer_2974e690707252e68bb4828d426a5f56, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof", method_pointer_5f3d9e187d7355cbad75b188f4375f29, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof_kind", method_pointer_4f741dea77a053db932276aba4520564, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("complete_definition", method_pointer_c16a7eb90fa85f6eae7c32538c2fcec5, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_a87e432b53895124bfff5d17ab396f88, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_bedfbdb1489e58139c4a719d50af6637, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_definition", method_pointer_739947fb60c95a8d94fbefae8b225c53, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_instantiated_from_member_enum", method_pointer_678f08b36c525d529d93b6677bac6c0a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_integer_type", method_pointer_d1cd8a5b3f1a5fbab1e13589796c0900, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_6f9096d36fc05294818be577a244a5aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_d593b7cb43ed5409a5e65a4a7f8aa26d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_negative_bits", method_pointer_6415b7b630ea5bbb963dac92d6c0be2d, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_positive_bits", method_pointer_d1055ed67e8850aa8a5bac02f432c35d, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_28d12cf26681565a8b8b6c711aa1ac38, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_f8ecf4b9085e5729acaa0c435685558c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_promotion_type", method_pointer_f3b22da91eeb50fd9de7a9556fc663d9, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_complete", method_pointer_b4b47d96acfd570e842721e2030a8203, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_fixed", method_pointer_a9643e3343a35fc18d75991da5d5cdaa, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped", method_pointer_f4a80eb44647579ca6bcc00efde5e03a, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped_using_class_tag", method_pointer_001e69f645e85e2b9d6f2561a213c661, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_integer_type", method_pointer_45f38493348355e7ab2104fe35019aaf, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_negative_bits", method_pointer_f126d51a18815cd7beeb64b986f43264, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_positive_bits", method_pointer_eed483b5549a53d7881590def54154cb, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_promotion_type", method_pointer_ed332c274d2456fdb47fb3b755c82a18, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof_kind");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("create_deserialized");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}