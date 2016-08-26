#include "_clanglite.h"


namespace autowig
{
}


void wrapper_282d613855865c408950cce436839a1f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_d157b34f77b153c79cc9d92b82961fb5)(class ::clang::Type  const *) = ::clang::ObjCObjectPointerType::classof;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_4ca23db025775438a0c4b92c822355ec)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectPointerType::*method_pointer_4849372da1705c69a08040bfd9b89351)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    class ::clang::ObjCInterfaceType  const * (::clang::ObjCObjectPointerType::*method_pointer_32ef416d2ef05781855de41432e0a57c)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_a5e956ce8a4b577f886cce0e75230def)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCObjectType  const * (::clang::ObjCObjectPointerType::*method_pointer_35d0803435f35d0cafbaef49baf2c7d7)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_8394516a42ca5f70a85aea0c3ce13863)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectPointerType::*method_pointer_c219a2f028875cffa0c250d4539603c5)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_251d802b332a5e66ba49d7c136075b3f)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_de8f301d41965b08967232c5b3a5ee8b)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_9aa8ede4843153ceb8d5ee7bf68d8406)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_74f1cb4e18dd5777ac479cda34d3fe88)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d29c188f41ed5adbb84c9dc6e917d634)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_360774809e3050dc979b5af5a9de8dfa)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_934d6c450aba5c15bb141e8a490c55d0)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_1b8195564e9f5ddf83d5913b81b5c34d)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_e6c208c579de5cf29b017289a0a9979a)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_6a45db6e22d95d25b2e3e4af126738ad)() const = &::clang::ObjCObjectPointerType::isSugared;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_8d89936422985086bc44d0ac736685f3)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_66deb5b6e26f527eb1c481d1ea05824f)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_12ba037dda4857108d57547f9c42d6fe)() const = &::clang::ObjCObjectPointerType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::HeldType< class ::clang::ObjCObjectPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_d157b34f77b153c79cc9d92b82961fb5, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_4ca23db025775438a0c4b92c822355ec, "");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_4849372da1705c69a08040bfd9b89351, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_32ef416d2ef05781855de41432e0a57c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_a5e956ce8a4b577f886cce0e75230def, "");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_35d0803435f35d0cafbaef49baf2c7d7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_8394516a42ca5f70a85aea0c3ce13863, "");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_c219a2f028875cffa0c250d4539603c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_251d802b332a5e66ba49d7c136075b3f, "");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_de8f301d41965b08967232c5b3a5ee8b, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_9aa8ede4843153ceb8d5ee7bf68d8406, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_74f1cb4e18dd5777ac479cda34d3fe88, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_d29c188f41ed5adbb84c9dc6e917d634, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_360774809e3050dc979b5af5a9de8dfa, "");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_934d6c450aba5c15bb141e8a490c55d0, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_1b8195564e9f5ddf83d5913b81b5c34d, "");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_e6c208c579de5cf29b017289a0a9979a, "");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_6a45db6e22d95d25b2e3e4af126738ad, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_8d89936422985086bc44d0ac736685f3, "");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_66deb5b6e26f527eb1c481d1ea05824f, "");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_12ba037dda4857108d57547f9c42d6fe, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}