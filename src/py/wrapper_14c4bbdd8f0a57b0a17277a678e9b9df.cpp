#include "_clanglite.h"


namespace autowig
{
}


void wrapper_14c4bbdd8f0a57b0a17277a678e9b9df()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::EnumDecl  * (*method_pointer_759aefff805a5e9b8163f9f4d7f7f395)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumDecl::CreateDeserialized;
    bool  (*method_pointer_f2ed6d0d2de858f991f7907a0136c4af)(class ::clang::Decl  const *) = ::clang::EnumDecl::classof;
    bool  (*method_pointer_e8117ed681b35d5f9974254b16049571)(enum ::clang::Decl::Kind ) = ::clang::EnumDecl::classofKind;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_409274e800a65d4cb2c1f581690bdac5)() const = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_0db62f2d884e58c1ae3d68067f0c09fd)() = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_763920b28a2f5136a096938c84e7f585)() const = &::clang::EnumDecl::getDefinition;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_7feadd19e122530cb5d85c60914ee3f9)() const = &::clang::EnumDecl::getInstantiatedFromMemberEnum;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_f1c1f59b46235a3185934fa4f9787dbf)() const = &::clang::EnumDecl::getMostRecentDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_4906932460e655c496df03f815f83fdf)() = &::clang::EnumDecl::getMostRecentDecl;
    unsigned int  (::clang::EnumDecl::*method_pointer_1d1d391464ea585493e8484f99b1da89)() const = &::clang::EnumDecl::getNumNegativeBits;
    unsigned int  (::clang::EnumDecl::*method_pointer_740d9f85a0455743b2663d57656b1493)() const = &::clang::EnumDecl::getNumPositiveBits;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_a50690fb457e518eb9b83f85d11f2880)() = &::clang::EnumDecl::getPreviousDecl;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_ebd8e8727ece5a389eb9a3d4083bdec3)() const = &::clang::EnumDecl::getPreviousDecl;
    bool  (::clang::EnumDecl::*method_pointer_577ecef4a6615fcb98ba606772ea6fa9)() const = &::clang::EnumDecl::isComplete;
    bool  (::clang::EnumDecl::*method_pointer_26e1825345a65f0c814387ead9dd628c)() const = &::clang::EnumDecl::isFixed;
    bool  (::clang::EnumDecl::*method_pointer_f04c116f54595139b17cbda3b42f9b97)() const = &::clang::EnumDecl::isScoped;
    bool  (::clang::EnumDecl::*method_pointer_6493c3dc3ab35d849dc51e23c06b258f)() const = &::clang::EnumDecl::isScopedUsingClassTag;
    void  (::clang::EnumDecl::*method_pointer_b583e6fec0725b50aaf6dca61d048065)(unsigned int ) = &::clang::EnumDecl::setNumNegativeBits;
    void  (::clang::EnumDecl::*method_pointer_e05a42cb914d5c398759080a866190e2)(unsigned int ) = &::clang::EnumDecl::setNumPositiveBits;
    boost::python::class_< class ::clang::EnumDecl, autowig::HeldType< class ::clang::EnumDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_14c4bbdd8f0a57b0a17277a678e9b9df("EnumDecl", "", boost::python::no_init);
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("create_deserialized", method_pointer_759aefff805a5e9b8163f9f4d7f7f395, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof", method_pointer_f2ed6d0d2de858f991f7907a0136c4af, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof_kind", method_pointer_e8117ed681b35d5f9974254b16049571, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_409274e800a65d4cb2c1f581690bdac5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_0db62f2d884e58c1ae3d68067f0c09fd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_definition", method_pointer_763920b28a2f5136a096938c84e7f585, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_instantiated_from_member_enum", method_pointer_7feadd19e122530cb5d85c60914ee3f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_f1c1f59b46235a3185934fa4f9787dbf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_4906932460e655c496df03f815f83fdf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_negative_bits", method_pointer_1d1d391464ea585493e8484f99b1da89, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_positive_bits", method_pointer_740d9f85a0455743b2663d57656b1493, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_a50690fb457e518eb9b83f85d11f2880, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_ebd8e8727ece5a389eb9a3d4083bdec3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_complete", method_pointer_577ecef4a6615fcb98ba606772ea6fa9, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_fixed", method_pointer_26e1825345a65f0c814387ead9dd628c, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped", method_pointer_f04c116f54595139b17cbda3b42f9b97, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped_using_class_tag", method_pointer_6493c3dc3ab35d849dc51e23c06b258f, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_negative_bits", method_pointer_b583e6fec0725b50aaf6dca61d048065, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_positive_bits", method_pointer_e05a42cb914d5c398759080a866190e2, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof_kind");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("create_deserialized");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}