#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

void wrapper_fee0b351ba125e67a931f272642991b9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_fa70cbf14eb958718b2fd94051e17863 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._type");
    boost::python::object module_fa70cbf14eb958718b2fd94051e17863(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa70cbf14eb958718b2fd94051e17863.c_str()))));
    boost::python::scope().attr("_type") = module_fa70cbf14eb958718b2fd94051e17863;
    boost::python::scope scope_fa70cbf14eb958718b2fd94051e17863 = module_fa70cbf14eb958718b2fd94051e17863;
    boost::python::enum_< enum ::clang::Type::TypeClass >("type_class")
        .value("ADJUSTED", ::clang::Type::Adjusted)
        .value("ATOMIC", ::clang::Type::Atomic)
        .value("ATTRIBUTED", ::clang::Type::Attributed)
        .value("AUTO", ::clang::Type::Auto)
        .value("BLOCK_POINTER", ::clang::Type::BlockPointer)
        .value("BUILTIN", ::clang::Type::Builtin)
        .value("COMPLEX", ::clang::Type::Complex)
        .value("CONSTANT_ARRAY", ::clang::Type::ConstantArray)
        .value("DECAYED", ::clang::Type::Decayed)
        .value("DECLTYPE", ::clang::Type::Decltype)
        .value("DEPENDENT_NAME", ::clang::Type::DependentName)
        .value("DEPENDENT_SIZED_ARRAY", ::clang::Type::DependentSizedArray)
        .value("DEPENDENT_SIZED_EXT_VECTOR", ::clang::Type::DependentSizedExtVector)
        .value("DEPENDENT_TEMPLATE_SPECIALIZATION", ::clang::Type::DependentTemplateSpecialization)
        .value("ELABORATED", ::clang::Type::Elaborated)
        .value("ENUM", ::clang::Type::Enum)
        .value("EXT_VECTOR", ::clang::Type::ExtVector)
        .value("FUNCTION_NO_PROTO", ::clang::Type::FunctionNoProto)
        .value("FUNCTION_PROTO", ::clang::Type::FunctionProto)
        .value("INCOMPLETE_ARRAY", ::clang::Type::IncompleteArray)
        .value("INJECTED_CLASS_NAME", ::clang::Type::InjectedClassName)
        .value("L_VALUE_REFERENCE", ::clang::Type::LValueReference)
        .value("MEMBER_POINTER", ::clang::Type::MemberPointer)
        .value("OBJ_C_INTERFACE", ::clang::Type::ObjCInterface)
        .value("OBJ_C_OBJECT", ::clang::Type::ObjCObject)
        .value("OBJ_C_OBJECT_POINTER", ::clang::Type::ObjCObjectPointer)
        .value("PACK_EXPANSION", ::clang::Type::PackExpansion)
        .value("PAREN", ::clang::Type::Paren)
        .value("PIPE", ::clang::Type::Pipe)
        .value("POINTER", ::clang::Type::Pointer)
        .value("R_VALUE_REFERENCE", ::clang::Type::RValueReference)
        .value("RECORD", ::clang::Type::Record)
        .value("SUBST_TEMPLATE_TYPE_PARM", ::clang::Type::SubstTemplateTypeParm)
        .value("SUBST_TEMPLATE_TYPE_PARM_PACK", ::clang::Type::SubstTemplateTypeParmPack)
        .value("TAG_FIRST", ::clang::Type::TagFirst)
        .value("TAG_LAST", ::clang::Type::TagLast)
        .value("TEMPLATE_SPECIALIZATION", ::clang::Type::TemplateSpecialization)
        .value("TEMPLATE_TYPE_PARM", ::clang::Type::TemplateTypeParm)
        .value("TYPE_LAST", ::clang::Type::TypeLast)
        .value("TYPE_OF", ::clang::Type::TypeOf)
        .value("TYPE_OF_EXPR", ::clang::Type::TypeOfExpr)
        .value("TYPEDEF", ::clang::Type::Typedef)
        .value("UNARY_TRANSFORM", ::clang::Type::UnaryTransform)
        .value("UNRESOLVED_USING", ::clang::Type::UnresolvedUsing)
        .value("VARIABLE_ARRAY", ::clang::Type::VariableArray)
        .value("VECTOR", ::clang::Type::Vector);
}