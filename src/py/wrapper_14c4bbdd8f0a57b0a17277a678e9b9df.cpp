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
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_2b44bade0e195d1995abc5ac70c02ae9)() const = &::clang::EnumDecl::getPreviousDecl;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_20df978c98175dd9a18945547b9f1cfd)() const = &::clang::EnumDecl::getCanonicalDecl;
    unsigned int  (::clang::EnumDecl::*method_pointer_382506bbb59255f6b8539b9d6c73c20d)() const = &::clang::EnumDecl::getNumNegativeBits;
    unsigned int  (::clang::EnumDecl::*method_pointer_a5da05d8fa105f73968d901318d8fac2)() const = &::clang::EnumDecl::getNumPositiveBits;
    bool  (::clang::EnumDecl::*method_pointer_90df48fff7c454feba1ae13549362a93)() const = &::clang::EnumDecl::isScoped;
    bool  (*method_pointer_0b8b9dc18ab551319a6d43d14f683ed6)(class ::clang::Decl  const *) = ::clang::EnumDecl::classof;
    bool  (::clang::EnumDecl::*method_pointer_763e8bf192845dfcb29ec6d4a4c26d30)() const = &::clang::EnumDecl::isFixed;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_379ea3fa531351888362b005fa4a8dd8)() = &::clang::EnumDecl::getPreviousDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_392a88638a775a5784140e80cdda9ca6)() const = &::clang::EnumDecl::getInstantiatedFromMemberEnum;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_bc3f55917f5d5fd9a0d0fbf3fb0e0e04)() = &::clang::EnumDecl::getMostRecentDecl;
    void  (::clang::EnumDecl::*method_pointer_8d9fc576f7b65d52b57a220499a55968)(unsigned int ) = &::clang::EnumDecl::setNumNegativeBits;
    bool  (::clang::EnumDecl::*method_pointer_013ab19912ca5d7285a09cbc0bb2bb18)() const = &::clang::EnumDecl::isComplete;
    bool  (::clang::EnumDecl::*method_pointer_1d1d6d4f7db957c4a148fff8e1600cfe)() const = &::clang::EnumDecl::isScopedUsingClassTag;
    class ::clang::EnumDecl  * (*method_pointer_a003ce67fba651888e53e95fb50bee98)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumDecl::CreateDeserialized;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_107b7d644a765a9f8b7b6e22bca6fd42)() = &::clang::EnumDecl::getCanonicalDecl;
    class ::clang::EnumDecl  const * (::clang::EnumDecl::*method_pointer_6d6c89eaece35f3e8cb7d6731a43cd54)() const = &::clang::EnumDecl::getMostRecentDecl;
    class ::clang::EnumDecl  * (::clang::EnumDecl::*method_pointer_451b2da5402c5f458251cb54b6c7583d)() const = &::clang::EnumDecl::getDefinition;
    void  (::clang::EnumDecl::*method_pointer_e94911ffe66758a4bc86c999d7720984)(unsigned int ) = &::clang::EnumDecl::setNumPositiveBits;
    bool  (*method_pointer_60ccca95dcab5b959adb7476c6f3ee22)(enum ::clang::Decl::Kind ) = ::clang::EnumDecl::classofKind;
    boost::python::class_< class ::clang::EnumDecl, autowig::HeldType< class ::clang::EnumDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_14c4bbdd8f0a57b0a17277a678e9b9df("EnumDecl", "", boost::python::no_init);
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_2b44bade0e195d1995abc5ac70c02ae9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_20df978c98175dd9a18945547b9f1cfd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_negative_bits", method_pointer_382506bbb59255f6b8539b9d6c73c20d, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_num_positive_bits", method_pointer_a5da05d8fa105f73968d901318d8fac2, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped", method_pointer_90df48fff7c454feba1ae13549362a93, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof", method_pointer_0b8b9dc18ab551319a6d43d14f683ed6, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_fixed", method_pointer_763e8bf192845dfcb29ec6d4a4c26d30, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_previous_decl", method_pointer_379ea3fa531351888362b005fa4a8dd8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_instantiated_from_member_enum", method_pointer_392a88638a775a5784140e80cdda9ca6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_bc3f55917f5d5fd9a0d0fbf3fb0e0e04, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_negative_bits", method_pointer_8d9fc576f7b65d52b57a220499a55968, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_complete", method_pointer_013ab19912ca5d7285a09cbc0bb2bb18, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("is_scoped_using_class_tag", method_pointer_1d1d6d4f7db957c4a148fff8e1600cfe, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("create_deserialized", method_pointer_a003ce67fba651888e53e95fb50bee98, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_canonical_decl", method_pointer_107b7d644a765a9f8b7b6e22bca6fd42, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_most_recent_decl", method_pointer_6d6c89eaece35f3e8cb7d6731a43cd54, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("get_definition", method_pointer_451b2da5402c5f458251cb54b6c7583d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("set_num_positive_bits", method_pointer_e94911ffe66758a4bc86c999d7720984, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.def("classof_kind", method_pointer_60ccca95dcab5b959adb7476c6f3ee22, "");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof_kind");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("create_deserialized");
    class_14c4bbdd8f0a57b0a17277a678e9b9df.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}