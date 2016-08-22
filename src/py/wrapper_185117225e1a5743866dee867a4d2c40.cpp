#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_185117225e1a5743866dee867a4d2c40()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_644f9f5d999f52cdb02bf1244046e59a)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_fd893b2e11025596ba81c3bf04bec0cf)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_3f15893511e05c8fa2b8997cfb389b2a)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_a794ecf430825aeb91aaee2edf1e369e)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_fcc539d3d5e15dd1b99e9b2999e6d97e)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_cf4f85528c0659c0ab03afbeab25bc2d)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_3194b37469635a2f95be2a70627d61f9)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_f2a09f12803453e2a3cea50f1ac062c9)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_914199c2d6c75ed5ae4366f1a4530958)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_54f7ed8fde9b518c995348e1186c1232)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_7e60e769df7c5478a57fcf51a6c55b2e)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_d0838053f07d549280a0e83e67f9bbb0)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_2edb27b66c5f59eb8ed477f376da4ee5)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_605574541d505f7cb643e5ff1d8d0313)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_3a44632e23345c2dad224fd1c57d8921)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_573512acde6555239a0f511d8da61be0)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_e4286a5e9a9a5dfc96cf925975df23c9)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_df04f44ea0c056aa8f9f2e6d40bfaaa2)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_b8730fbbafcb538db28ebaec00119786)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_6d0e02b1b37b5e12bcedaf3b981aa89c)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_7e779f905eb85e019b53492702d35a4f)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_e653340ac1dd5b83b3c0777991d5aeff)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_68ac30d135ed574898823e353a66354e)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_70f90660b5925b7e83252ebb88797d93)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_3992ed81c0665bb19d1e0034548d6e75)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_644f9f5d999f52cdb02bf1244046e59a, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_fd893b2e11025596ba81c3bf04bec0cf, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_3f15893511e05c8fa2b8997cfb389b2a, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_a794ecf430825aeb91aaee2edf1e369e, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_fcc539d3d5e15dd1b99e9b2999e6d97e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_cf4f85528c0659c0ab03afbeab25bc2d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_3194b37469635a2f95be2a70627d61f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_f2a09f12803453e2a3cea50f1ac062c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_914199c2d6c75ed5ae4366f1a4530958, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_54f7ed8fde9b518c995348e1186c1232, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_7e60e769df7c5478a57fcf51a6c55b2e, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_d0838053f07d549280a0e83e67f9bbb0, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_2edb27b66c5f59eb8ed477f376da4ee5, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_605574541d505f7cb643e5ff1d8d0313, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_3a44632e23345c2dad224fd1c57d8921, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_573512acde6555239a0f511d8da61be0, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_e4286a5e9a9a5dfc96cf925975df23c9, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_df04f44ea0c056aa8f9f2e6d40bfaaa2, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_b8730fbbafcb538db28ebaec00119786, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_6d0e02b1b37b5e12bcedaf3b981aa89c, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_7e779f905eb85e019b53492702d35a4f, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_e653340ac1dd5b83b3c0777991d5aeff, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_68ac30d135ed574898823e353a66354e, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_70f90660b5925b7e83252ebb88797d93, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_3992ed81c0665bb19d1e0034548d6e75, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}