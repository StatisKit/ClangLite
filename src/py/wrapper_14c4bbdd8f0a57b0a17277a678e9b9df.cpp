#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::EnumDecl const volatile * get_pointer<class ::clang::EnumDecl const volatile >(class ::clang::EnumDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_14c4bbdd8f0a57b0a17277a678e9b9df()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::EnumDecl * (::clang::EnumDecl::*method_pointer_84593835da7152e1b0cfbddb7248fb06)() = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl const * (::clang::EnumDecl::*method_pointer_2466ca3628f95311975722622ea157d2)() const = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl * (::clang::EnumDecl::*method_pointer_fecdc0a8931553eeb0ba2f7c79945d1b)() = &::clang::EnumDecl::getPreviousDecl;
    class ::clang::EnumDecl const * (::clang::EnumDecl::*method_pointer_b94c3d219b02547c90fd1c66a303a716)() const = &::clang::EnumDecl::getPreviousDecl;
    class ::clang::EnumDecl * (::clang::EnumDecl::*method_pointer_9fa4ffea2f22543eb81439e2cfbcab4d)() = &::clang::EnumDecl::getMostRecentDecl;
    class ::clang::EnumDecl const * (::clang::EnumDecl::*method_pointer_31280899b3cb518d81d99c486b9279c7)() const = &::clang::EnumDecl::getMostRecentDecl;
    class ::clang::EnumDecl * (::clang::EnumDecl::*method_pointer_d66ca70340225fc7a8667420bead7c48)() const = &::clang::EnumDecl::getDefinition;
    class ::clang::EnumDecl * (*method_pointer_210b4cb725455201ac059dcde7081cc7)(class ::clang::ASTContext &, unsigned int ) = ::clang::EnumDecl::CreateDeserialized;
    void  (::clang::EnumDecl::*method_pointer_28bfa42076d05b7b8d62d00e7340f23b)(class ::clang::QualType , class ::clang::QualType , unsigned int , unsigned int ) = &::clang::EnumDecl::completeDefinition;
    class ::clang::QualType  (::clang::EnumDecl::*method_pointer_7dfc1461d8f75545af6a6453c04a88fb)() const = &::clang::EnumDecl::getPromotionType;
    void  (::clang::EnumDecl::*method_pointer_8fccd0b9a9cd53389940b4cfcd8a9856)(class ::clang::QualType ) = &::clang::EnumDecl::setPromotionType;
    class ::clang::QualType  (::clang::EnumDecl::*method_pointer_8de112b5813d58049ebe040be9b1ce56)() const = &::clang::EnumDecl::getIntegerType;
    void  (::clang::EnumDecl::*method_pointer_d8fcf5da25cd56298a555397d210362a)(class ::clang::QualType ) = &::clang::EnumDecl::setIntegerType;
    unsigned int  (::clang::EnumDecl::*method_pointer_1e03e84ccca153b9a01f0f021c57b045)() const = &::clang::EnumDecl::getNumPositiveBits;
    void  (::clang::EnumDecl::*method_pointer_992ffd6b101b562fa574082bd725a834)(unsigned int ) = &::clang::EnumDecl::setNumPositiveBits;
    unsigned int  (::clang::EnumDecl::*method_pointer_514b70320d935517a7f17f2f8dca0b36)() const = &::clang::EnumDecl::getNumNegativeBits;
    void  (::clang::EnumDecl::*method_pointer_b0b67e95549b582a9b4d9316d9a427ab)(unsigned int ) = &::clang::EnumDecl::setNumNegativeBits;
    bool  (::clang::EnumDecl::*method_pointer_83c60164f6b65c9399edbc65e39b0602)() const = &::clang::EnumDecl::isScoped;
    bool  (::clang::EnumDecl::*method_pointer_432e7d98c3435af78697b45f1f286645)() const = &::clang::EnumDecl::isScopedUsingClassTag;
    bool  (::clang::EnumDecl::*method_pointer_9362618f44875115945452b1b3ea4103)() const = &::clang::EnumDecl::isFixed;
    bool  (::clang::EnumDecl::*method_pointer_641892e48321594d842c92f653495c1e)() const = &::clang::EnumDecl::isComplete;
    class ::clang::EnumDecl * (::clang::EnumDecl::*method_pointer_eacdccf0aee1568e9dca6ad293546ad6)() const = &::clang::EnumDecl::getInstantiatedFromMemberEnum;
    bool  (*method_pointer_87d46405e2395cdeaf15a56c54b08219)(class ::clang::Decl const *) = ::clang::EnumDecl::classof;
    bool  (*method_pointer_7839896a7e0d5ab7ae779b2bbe61f0ea)(enum ::clang::Decl::Kind ) = ::clang::EnumDecl::classofKind;
    boost::python::class_< class ::clang::EnumDecl, autowig::Held< class ::clang::EnumDecl >::Type, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_14c4bbdd8f0a57b0a17277a678e9b9df("EnumDecl", "", boost::python::no_init);
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_84593835da7152e1b0cfbddb7248fb06, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_2466ca3628f95311975722622ea157d2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_fecdc0a8931553eeb0ba2f7c79945d1b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_b94c3d219b02547c90fd1c66a303a716, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_9fa4ffea2f22543eb81439e2cfbcab4d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_31280899b3cb518d81d99c486b9279c7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_definition", method_pointer_d66ca70340225fc7a8667420bead7c48, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("create_deserialized", method_pointer_210b4cb725455201ac059dcde7081cc7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("complete_definition", method_pointer_28bfa42076d05b7b8d62d00e7340f23b, ":Parameters:\n  - `NewType` (:py:class:`clanglite.clang.QualType`) - Undocumented\n  - `PromotionType` (:py:class:`clanglite.clang.QualType`) - Undocumented\n  - `NumPositiveBits` (:cpp:any:`unsigned` int) - Undocumented\n  - `NumNegativeBits` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_promotion_type", method_pointer_7dfc1461d8f75545af6a6453c04a88fb, ":Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_promotion_type", method_pointer_8fccd0b9a9cd53389940b4cfcd8a9856, "Set the promotion type.\n\n:Parameter:\n    `T` (:py:class:`clanglite.clang.QualType`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_integer_type", method_pointer_8de112b5813d58049ebe040be9b1ce56, ":Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_integer_type", method_pointer_d8fcf5da25cd56298a555397d210362a, "Set the underlying integer type.\n\n:Parameter:\n    `T` (:py:class:`clanglite.clang.QualType`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_positive_bits", method_pointer_1e03e84ccca153b9a01f0f021c57b045, "Returns the width in bits required to store all the non-negative\nenumerators of this enum.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_positive_bits", method_pointer_992ffd6b101b562fa574082bd725a834, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_negative_bits", method_pointer_514b70320d935517a7f17f2f8dca0b36, "Returns the width in bits required to store all the negative enumerators\nof this enum. These widths include the rightmost leading 1; that is:\n\n+----------------------------+-----------+---------------------+\n| MOST NEGATIVE ENUMERATOR   | PATTERN   | NUM NEGATIVE BITS   |\n+============================+===========+=====================+\n| -1 1111111                 | 1         |                     |\n+----------------------------+-----------+---------------------+\n| -10 1110110                | 5         |                     |\n+----------------------------+-----------+---------------------+\n| -101 1001011               | 8         |                     |\n+----------------------------+-----------+---------------------+\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_negative_bits", method_pointer_b0b67e95549b582a9b4d9316d9a427ab, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped", method_pointer_83c60164f6b65c9399edbc65e39b0602, "Returns true if this is a C++11 scoped enumeration.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped_using_class_tag", method_pointer_432e7d98c3435af78697b45f1f286645, "Returns true if this is a C++11 scoped enumeration.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_fixed", method_pointer_9362618f44875115945452b1b3ea4103, "Returns true if this is an Objective-C, C++11, or Microsoft-style\nenumeration with a fixed underlying type.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_complete", method_pointer_641892e48321594d842c92f653495c1e, "Returns true if this can be considered a complete type.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_instantiated_from_member_enum", method_pointer_eacdccf0aee1568e9dca6ad293546ad6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Returns the enumeration (declared within the template) from which this\nenumeration type was instantiated, or NULL if this enumeration was not\ninstantiated from any template.\n\n:Return Type:\n    :py:class:`clanglite.clang.EnumDecl`\n\n");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof", method_pointer_87d46405e2395cdeaf15a56c54b08219, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof_kind", method_pointer_7839896a7e0d5ab7ae779b2bbe61f0ea, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof_kind");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("create_deserialized");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof");

    if(autowig::Held< class ::clang::EnumDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::EnumDecl >::Type, autowig::Held< class ::clang::TagDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::EnumDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::EnumDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::EnumDecl >::Type, class ::clang::EnumDecl > > >();
    }

}