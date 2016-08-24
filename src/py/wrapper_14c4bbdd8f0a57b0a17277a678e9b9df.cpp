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
    class ::clang::EnumDecl  * (*method_pointer_71df43d763ec57c2ae49b5d00bb1591b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumDecl::CreateDeserialized;
    bool  (*method_pointer_5b4b4e3446865bd0bed68dbd6b3b99b4)(class ::clang::Decl  const *) = ::clang::EnumDecl::classof;
    bool  (*method_pointer_fa4275da08b45c829af8d67656c09f88)(enum ::clang::Decl::Kind ) = ::clang::EnumDecl::classofKind;
    void  (::clang::EnumDecl::*method_pointer_42fad0e8300053488503b6665fd843a3)(class ::clang::QualType , class ::clang::QualType , unsigned int , unsigned int ) = &::clang::EnumDecl::completeDefinition;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_724963daf97d5076a9639d3d4bc77a62)() const = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_5b25f5576c1b5777832f77365510f196)() = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_6bba41aee6fe5bccb7a46202258ae122)() const = &::clang::EnumDecl::getDefinition;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_9d6835b55c6357548043ec232b9ad2d8)() const = &::clang::EnumDecl::getInstantiatedFromMemberEnum;
    class ::clang::QualType  (::clang::EnumDecl::*method_pointer_140db6284666578ca7773f97ef796831)() const = &::clang::EnumDecl::getIntegerType;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_02dd944bf28254499bc318f809ebf2f9)() const = &::clang::EnumDecl::getMostRecentDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_842c81dd01135e64a78252717f12abc5)() = &::clang::EnumDecl::getMostRecentDecl;
    unsigned int  (::clang::EnumDecl::*method_pointer_40c32f8e27a65193b20316f0dfec8d8c)() const = &::clang::EnumDecl::getNumNegativeBits;
    unsigned int  (::clang::EnumDecl::*method_pointer_2fe4956aec065de292edffaa87ff2af1)() const = &::clang::EnumDecl::getNumPositiveBits;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_f8cdde8dd89f5c7381d56d2549cc9301)() const = &::clang::EnumDecl::getPreviousDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_e70178ff35295ec5b55808e331a5a108)() = &::clang::EnumDecl::getPreviousDecl;
    class ::clang::QualType  (::clang::EnumDecl::*method_pointer_fa01e7f3aa7f5bee94c9fcfb98444992)() const = &::clang::EnumDecl::getPromotionType;
    bool  (::clang::EnumDecl::*method_pointer_4a736f385b2d5967983439d05526ec41)() const = &::clang::EnumDecl::isComplete;
    bool  (::clang::EnumDecl::*method_pointer_957856790b345f9b94ca490b06a6bdf4)() const = &::clang::EnumDecl::isFixed;
    bool  (::clang::EnumDecl::*method_pointer_75ebf8e842175fe7a6a24fcb8ea89819)() const = &::clang::EnumDecl::isScoped;
    bool  (::clang::EnumDecl::*method_pointer_dee2114707db5479a14995c318396a21)() const = &::clang::EnumDecl::isScopedUsingClassTag;
    void  (::clang::EnumDecl::*method_pointer_8aabf1f94c2f5cf88d10b723cbeaa5f3)(class ::clang::QualType ) = &::clang::EnumDecl::setIntegerType;
    void  (::clang::EnumDecl::*method_pointer_067ca8221477572e9dd53898d034cf28)(unsigned int ) = &::clang::EnumDecl::setNumNegativeBits;
    void  (::clang::EnumDecl::*method_pointer_d01222d0d11c5befac5715d5d5b1f27e)(unsigned int ) = &::clang::EnumDecl::setNumPositiveBits;
    void  (::clang::EnumDecl::*method_pointer_07c4c142606c59c78761d9da91ce2ac4)(class ::clang::QualType ) = &::clang::EnumDecl::setPromotionType;
    boost::python::class_< class ::clang::EnumDecl, autowig::HeldType< class ::clang::EnumDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_14c4bbdd8f0a57b0a17277a678e9b9df("EnumDecl", "", boost::python::no_init);
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("create_deserialized", method_pointer_71df43d763ec57c2ae49b5d00bb1591b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof", method_pointer_5b4b4e3446865bd0bed68dbd6b3b99b4, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof_kind", method_pointer_fa4275da08b45c829af8d67656c09f88, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("complete_definition", method_pointer_42fad0e8300053488503b6665fd843a3, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_724963daf97d5076a9639d3d4bc77a62, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_5b25f5576c1b5777832f77365510f196, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_definition", method_pointer_6bba41aee6fe5bccb7a46202258ae122, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_instantiated_from_member_enum", method_pointer_9d6835b55c6357548043ec232b9ad2d8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_integer_type", method_pointer_140db6284666578ca7773f97ef796831, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_02dd944bf28254499bc318f809ebf2f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_842c81dd01135e64a78252717f12abc5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_negative_bits", method_pointer_40c32f8e27a65193b20316f0dfec8d8c, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_positive_bits", method_pointer_2fe4956aec065de292edffaa87ff2af1, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_f8cdde8dd89f5c7381d56d2549cc9301, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_e70178ff35295ec5b55808e331a5a108, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_promotion_type", method_pointer_fa01e7f3aa7f5bee94c9fcfb98444992, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_complete", method_pointer_4a736f385b2d5967983439d05526ec41, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_fixed", method_pointer_957856790b345f9b94ca490b06a6bdf4, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped", method_pointer_75ebf8e842175fe7a6a24fcb8ea89819, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped_using_class_tag", method_pointer_dee2114707db5479a14995c318396a21, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_integer_type", method_pointer_8aabf1f94c2f5cf88d10b723cbeaa5f3, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_negative_bits", method_pointer_067ca8221477572e9dd53898d034cf28, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_positive_bits", method_pointer_d01222d0d11c5befac5715d5d5b1f27e, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_promotion_type", method_pointer_07c4c142606c59c78761d9da91ce2ac4, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof_kind");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("create_deserialized");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}