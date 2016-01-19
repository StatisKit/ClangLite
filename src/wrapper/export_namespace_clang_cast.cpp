#include <boost/python.hpp>
#include <clang/AST/Decl.h>
#include <clang/AST/DeclCXX.h>
#include <clang/AST/DeclTemplate.h>
#include <clang/AST/DeclBase.h>
#include <clang/AST/DeclObjC.h>

namespace autowig
{
	class ::clang::CXXConstructorDecl * cast_as_cxxconstructor_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::CXXConstructorDecl * >(decl); }

	class ::clang::ObjCInterfaceDecl * cast_as_obj_cinterface_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::ObjCInterfaceDecl * >(decl); }

	class ::clang::NamespaceDecl * cast_as_namespace_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::NamespaceDecl * >(decl); }

	class ::clang::FunctionDecl * cast_as_function_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::FunctionDecl * >(decl); }

	class ::clang::EnumDecl * cast_as_enum_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::EnumDecl * >(decl); }

	class ::clang::LinkageSpecDecl * cast_as_linkage_spec_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::LinkageSpecDecl * >(decl); }

	class ::clang::CXXDestructorDecl * cast_as_cxxdestructor_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::CXXDestructorDecl * >(decl); }

	class ::clang::TranslationUnitDecl * cast_as_translation_unit_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::TranslationUnitDecl * >(decl); }

	class ::clang::ObjCCategoryDecl * cast_as_obj_ccategory_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::ObjCCategoryDecl * >(decl); }

	class ::clang::CXXRecordDecl * cast_as_cxxrecord_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::CXXRecordDecl * >(decl); }

	class ::clang::CapturedDecl * cast_as_captured_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::CapturedDecl * >(decl); }

	class ::clang::ObjCMethodDecl * cast_as_obj_cmethod_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::ObjCMethodDecl * >(decl); }

	class ::clang::ObjCImplementationDecl * cast_as_obj_cimplementation_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::ObjCImplementationDecl * >(decl); }

	class ::clang::ObjCCategoryImplDecl * cast_as_obj_ccategory_impl_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::ObjCCategoryImplDecl * >(decl); }

	class ::clang::CXXConversionDecl * cast_as_cxxconversion_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::CXXConversionDecl * >(decl); }

	class ::clang::ExternCContextDecl * cast_as_extern_ccontext_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::ExternCContextDecl * >(decl); }

	class ::clang::ClassTemplateSpecializationDecl * cast_as_class_template_specialization_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::ClassTemplateSpecializationDecl * >(decl); }

	class ::clang::ObjCProtocolDecl * cast_as_obj_cprotocol_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::ObjCProtocolDecl * >(decl); }

	class ::clang::ClassTemplatePartialSpecializationDecl * cast_as_class_template_partial_specialization_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::ClassTemplatePartialSpecializationDecl * >(decl); }

	class ::clang::BlockDecl * cast_as_block_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::BlockDecl * >(decl); }

	class ::clang::CXXMethodDecl * cast_as_cxxmethod_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::CXXMethodDecl * >(decl); }

	class ::clang::RecordDecl * cast_as_record_decl(::clang::DeclContext* decl)
	{ return static_cast< class ::clang::RecordDecl * >(decl); }
}

void export_namespace_clang_cast()
{
    std::string clang_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object clang_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_name.c_str()))));
    boost::python::scope().attr("clang") = clang_module;
    boost::python::scope clang_scope = clang_module;
    std::string cast_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".cast");
    boost::python::object cast_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(cast_name.c_str()))));
    boost::python::scope().attr("cast") = cast_module;
    boost::python::scope cast_scope = cast_module;	boost::python::def("cast_as_cxxconstructor_decl", ::autowig::cast_as_cxxconstructor_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_obj_cinterface_decl", ::autowig::cast_as_obj_cinterface_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_namespace_decl", ::autowig::cast_as_namespace_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_function_decl", ::autowig::cast_as_function_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_enum_decl", ::autowig::cast_as_enum_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_linkage_spec_decl", ::autowig::cast_as_linkage_spec_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_cxxdestructor_decl", ::autowig::cast_as_cxxdestructor_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_translation_unit_decl", ::autowig::cast_as_translation_unit_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_obj_ccategory_decl", ::autowig::cast_as_obj_ccategory_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_cxxrecord_decl", ::autowig::cast_as_cxxrecord_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_captured_decl", ::autowig::cast_as_captured_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_obj_cmethod_decl", ::autowig::cast_as_obj_cmethod_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_obj_cimplementation_decl", ::autowig::cast_as_obj_cimplementation_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_obj_ccategory_impl_decl", ::autowig::cast_as_obj_ccategory_impl_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_cxxconversion_decl", ::autowig::cast_as_cxxconversion_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_extern_ccontext_decl", ::autowig::cast_as_extern_ccontext_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_class_template_specialization_decl", ::autowig::cast_as_class_template_specialization_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_obj_cprotocol_decl", ::autowig::cast_as_obj_cprotocol_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_class_template_partial_specialization_decl", ::autowig::cast_as_class_template_partial_specialization_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_block_decl", ::autowig::cast_as_block_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_cxxmethod_decl", ::autowig::cast_as_cxxmethod_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
	boost::python::def("cast_as_record_decl", ::autowig::cast_as_record_decl, boost::python::return_value_policy< boost::python::reference_existing_object >());
}