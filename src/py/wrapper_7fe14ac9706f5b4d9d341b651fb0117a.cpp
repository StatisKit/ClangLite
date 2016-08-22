#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_7fe14ac9706f5b4d9d341b651fb0117a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TagDecl  * (*method_pointer_f03e6cd8530f5979a9301e762e1e5957)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_765166d0a6c45756a1a5155d49f93288)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_424d0e3476625284955e782577d39d54)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_782d591a06fe5698a9087c728f51a3e2)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_fe8e05f475f85b19917674aefadfa2ef)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_9d6f548269525e3faed3240d3999fe10)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_19a4d2d40d8e5daf999e4e4267728512)() const = &::clang::TagDecl::getDefinition;
    unsigned int  (::clang::TagDecl::*method_pointer_1ea30961e13555cf84389f8e5af50c69)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_947b63dbcd51517290d3abe67f93fa64)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_c9ba8829035b5187bc967f795fb76611)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_6f96c33772cc59af97d05d1480053a46)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_9714a1a2054a52788ececb5ae153fd4f)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_f8e58b61c88551c79fd07c7286b9301d)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_e6fb28585ea657828eeb0798960b023d)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_26434df3088a50c1be2356b3297d58fd)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_d4f3a375728b5d89a10f0ccbf8cbfbe0)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_66c5d4b50c5951448fde4b56e939d922)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_c9a4281480775d708a9755d06ec1720f)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_f72e13f4cca75651995e31996f7b9600)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_6738ef4e315a506c904dc8e9b594ce3e)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_27093231a2d751db8dcb85d835975c0b)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_83c4c2f4d8f8549d92542e5a6d4ba993)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_17f3cff28a9d5ee6ae00fdcf35839079)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_95adefdedb8d5e3d9f536ba8f7d4ad27)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_7914f703d5f855cca6953c13eb0a0b3c)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_3faf7229d2025f54bd87bcea41d6f854)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_02226b41877e5e0385c9dd7a0c0311ea)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_cde7dec7e0ce5e32a77d37788f4213fa)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_f03e6cd8530f5979a9301e762e1e5957, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_765166d0a6c45756a1a5155d49f93288, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_424d0e3476625284955e782577d39d54, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_782d591a06fe5698a9087c728f51a3e2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_fe8e05f475f85b19917674aefadfa2ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_9d6f548269525e3faed3240d3999fe10, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_19a4d2d40d8e5daf999e4e4267728512, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_1ea30961e13555cf84389f8e5af50c69, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_947b63dbcd51517290d3abe67f93fa64, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_c9ba8829035b5187bc967f795fb76611, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_6f96c33772cc59af97d05d1480053a46, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_9714a1a2054a52788ececb5ae153fd4f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_f8e58b61c88551c79fd07c7286b9301d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_e6fb28585ea657828eeb0798960b023d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_26434df3088a50c1be2356b3297d58fd, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_d4f3a375728b5d89a10f0ccbf8cbfbe0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_66c5d4b50c5951448fde4b56e939d922, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_c9a4281480775d708a9755d06ec1720f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_f72e13f4cca75651995e31996f7b9600, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_6738ef4e315a506c904dc8e9b594ce3e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_27093231a2d751db8dcb85d835975c0b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_83c4c2f4d8f8549d92542e5a6d4ba993, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_17f3cff28a9d5ee6ae00fdcf35839079, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_95adefdedb8d5e3d9f536ba8f7d4ad27, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_7914f703d5f855cca6953c13eb0a0b3c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_3faf7229d2025f54bd87bcea41d6f854, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_02226b41877e5e0385c9dd7a0c0311ea, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_cde7dec7e0ce5e32a77d37788f4213fa, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("classof_kind");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("classof");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("cast_from_decl_context");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::TagDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TagDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TagDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}