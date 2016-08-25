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
    class ::clang::TagDecl  * (*method_pointer_e379958fbd345b1da4f05e3c1e5e8e94)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_381b37f5a7195c3c8288d346a80e8c9b)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_10bb457ec16e5abe84a8e183e9cfba09)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_f97e7e9c30e650a7818a53663a1b7b5d)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_f739364e25655cdebc51eee7ccea30c1)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_a986cfbf49e7503483293bd81811362f)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_a6cecf5e7027556e8040589f79aaad9c)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_486ac826c4a75785863d01bd67af953b)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_02263fac830259a3baf91e2c7fac1286)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_5d672edd6b5850898f8f6a4c9591214e)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_00f42ae865c656eda25245044127d1be)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_917b6cca49ef5dc6b56fe4bd4cd8d660)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_7473a5b84cdf508a979afc506542353d)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_bce4c0d3fdc455b8a41cddfab64ee52f)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_920c48bcd69857c3897d0b9f6e55de56)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_6f34a578bace59f8b20510d80536fede)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_ea94fafaa8a9554588882d50cef140d7)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_419975b51e95587389efcff1719f7c8a)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_9e028922ffa05212bb1373f8edc1000e)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_1f64c403cbd05561bdb41be1a1007972)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_7f981339e38a569bb802ff9f2ced4a01)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_1e2eff2fd71e51dcbbfa9d31d2a33d84)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_d0006bdda29259d9805e306edfdfc199)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_3f66ce14c1ab5575b43c4fb768cdbf18)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_207305684f195a5c82466aecf308b636)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_0dbfcd49ada05ac1be618f32d633e84d)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_7b5c489882f357229d3c480ad9e2e427)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_659db26a9cab5c93b7165661d80e7350)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_3d86f3d6bb0a5ee7a829eefc06364fd4)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_fcc4c5ac6b305332b6361f0a1283a263)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_a60f6494fc6b524d9e34ca5fad4adbf4)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_16ac19dd1acc5893803cca425f2bd47b)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_d60edd2a9ec757659fdca2d581759349)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_e379958fbd345b1da4f05e3c1e5e8e94, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_381b37f5a7195c3c8288d346a80e8c9b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_10bb457ec16e5abe84a8e183e9cfba09, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_f97e7e9c30e650a7818a53663a1b7b5d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_f739364e25655cdebc51eee7ccea30c1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_a986cfbf49e7503483293bd81811362f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_a6cecf5e7027556e8040589f79aaad9c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_486ac826c4a75785863d01bd67af953b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_02263fac830259a3baf91e2c7fac1286, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_5d672edd6b5850898f8f6a4c9591214e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_00f42ae865c656eda25245044127d1be, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_917b6cca49ef5dc6b56fe4bd4cd8d660, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_7473a5b84cdf508a979afc506542353d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_bce4c0d3fdc455b8a41cddfab64ee52f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_920c48bcd69857c3897d0b9f6e55de56, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_6f34a578bace59f8b20510d80536fede, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_ea94fafaa8a9554588882d50cef140d7, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_419975b51e95587389efcff1719f7c8a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_9e028922ffa05212bb1373f8edc1000e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_1f64c403cbd05561bdb41be1a1007972, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_7f981339e38a569bb802ff9f2ced4a01, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_1e2eff2fd71e51dcbbfa9d31d2a33d84, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_d0006bdda29259d9805e306edfdfc199, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_3f66ce14c1ab5575b43c4fb768cdbf18, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_207305684f195a5c82466aecf308b636, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_0dbfcd49ada05ac1be618f32d633e84d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_7b5c489882f357229d3c480ad9e2e427, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_659db26a9cab5c93b7165661d80e7350, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_3d86f3d6bb0a5ee7a829eefc06364fd4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_fcc4c5ac6b305332b6361f0a1283a263, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_a60f6494fc6b524d9e34ca5fad4adbf4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_16ac19dd1acc5893803cca425f2bd47b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_d60edd2a9ec757659fdca2d581759349, "");
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