#include <boost/python.hpp>
#include <clang/AST/Type.h>

void enumeration_clang_type_type_class()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        std::string _type_fa70cbf14eb958718b2fd94051e17863_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._type");
        boost::python::object _type_fa70cbf14eb958718b2fd94051e17863_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(_type_fa70cbf14eb958718b2fd94051e17863_name.c_str()))));
        boost::python::scope().attr("_type") = _type_fa70cbf14eb958718b2fd94051e17863_module;
        boost::python::scope _type_fa70cbf14eb958718b2fd94051e17863_scope = _type_fa70cbf14eb958718b2fd94051e17863_module;
        boost::python::enum_< enum ::clang::Type::TypeClass >("type_class")
            .value("BUILTIN", ::clang::Type::TypeClass::Builtin)
            .value("COMPLEX", ::clang::Type::TypeClass::Complex)
            .value("POINTER", ::clang::Type::TypeClass::Pointer)
            .value("BLOCK_POINTER", ::clang::Type::TypeClass::BlockPointer)
            .value("L_VALUE_REFERENCE", ::clang::Type::TypeClass::LValueReference)
            .value("R_VALUE_REFERENCE", ::clang::Type::TypeClass::RValueReference)
            .value("MEMBER_POINTER", ::clang::Type::TypeClass::MemberPointer)
            .value("CONSTANT_ARRAY", ::clang::Type::TypeClass::ConstantArray)
            .value("INCOMPLETE_ARRAY", ::clang::Type::TypeClass::IncompleteArray)
            .value("VARIABLE_ARRAY", ::clang::Type::TypeClass::VariableArray)
            .value("DEPENDENT_SIZED_ARRAY", ::clang::Type::TypeClass::DependentSizedArray)
            .value("DEPENDENT_SIZED_EXT_VECTOR", ::clang::Type::TypeClass::DependentSizedExtVector)
            .value("VECTOR", ::clang::Type::TypeClass::Vector)
            .value("EXT_VECTOR", ::clang::Type::TypeClass::ExtVector)
            .value("FUNCTION_PROTO", ::clang::Type::TypeClass::FunctionProto)
            .value("FUNCTION_NO_PROTO", ::clang::Type::TypeClass::FunctionNoProto)
            .value("UNRESOLVED_USING", ::clang::Type::TypeClass::UnresolvedUsing)
            .value("PAREN", ::clang::Type::TypeClass::Paren)
            .value("TYPEDEF", ::clang::Type::TypeClass::Typedef)
            .value("ADJUSTED", ::clang::Type::TypeClass::Adjusted)
            .value("DECAYED", ::clang::Type::TypeClass::Decayed)
            .value("TYPE_OF_EXPR", ::clang::Type::TypeClass::TypeOfExpr)
            .value("TYPE_OF", ::clang::Type::TypeClass::TypeOf)
            .value("DECLTYPE", ::clang::Type::TypeClass::Decltype)
            .value("UNARY_TRANSFORM", ::clang::Type::TypeClass::UnaryTransform)
            .value("RECORD", ::clang::Type::TypeClass::Record)
            .value("ENUM", ::clang::Type::TypeClass::Enum)
            .value("ELABORATED", ::clang::Type::TypeClass::Elaborated)
            .value("ATTRIBUTED", ::clang::Type::TypeClass::Attributed)
            .value("TEMPLATE_TYPE_PARM", ::clang::Type::TypeClass::TemplateTypeParm)
            .value("SUBST_TEMPLATE_TYPE_PARM", ::clang::Type::TypeClass::SubstTemplateTypeParm)
            .value("SUBST_TEMPLATE_TYPE_PARM_PACK", ::clang::Type::TypeClass::SubstTemplateTypeParmPack)
            .value("TEMPLATE_SPECIALIZATION", ::clang::Type::TypeClass::TemplateSpecialization)
            .value("AUTO", ::clang::Type::TypeClass::Auto)
            .value("INJECTED_CLASS_NAME", ::clang::Type::TypeClass::InjectedClassName)
            .value("DEPENDENT_NAME", ::clang::Type::TypeClass::DependentName)
            .value("DEPENDENT_TEMPLATE_SPECIALIZATION", ::clang::Type::TypeClass::DependentTemplateSpecialization)
            .value("PACK_EXPANSION", ::clang::Type::TypeClass::PackExpansion)
            .value("OBJ_C_OBJECT", ::clang::Type::TypeClass::ObjCObject)
            .value("OBJ_C_INTERFACE", ::clang::Type::TypeClass::ObjCInterface)
            .value("OBJ_C_OBJECT_POINTER", ::clang::Type::TypeClass::ObjCObjectPointer)
            .value("ATOMIC", ::clang::Type::TypeClass::Atomic)
            .value("TYPE_LAST", ::clang::Type::TypeClass::TypeLast)
            .value("TAG_FIRST", ::clang::Type::TypeClass::TagFirst)
            .value("TAG_LAST", ::clang::Type::TypeClass::TagLast);
}