#include "_clanglite.h"


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
    boost::python::enum_< enum ::clang::Type::TypeClass > enum_fee0b351ba125e67a931f272642991b9("type_class");
    enum_fee0b351ba125e67a931f272642991b9.value("BUILTIN", ::clang::Type::Builtin);
    enum_fee0b351ba125e67a931f272642991b9.value("COMPLEX", ::clang::Type::Complex);
    enum_fee0b351ba125e67a931f272642991b9.value("POINTER", ::clang::Type::Pointer);
    enum_fee0b351ba125e67a931f272642991b9.value("BLOCK_POINTER", ::clang::Type::BlockPointer);
    enum_fee0b351ba125e67a931f272642991b9.value("L_VALUE_REFERENCE", ::clang::Type::LValueReference);
    enum_fee0b351ba125e67a931f272642991b9.value("R_VALUE_REFERENCE", ::clang::Type::RValueReference);
    enum_fee0b351ba125e67a931f272642991b9.value("MEMBER_POINTER", ::clang::Type::MemberPointer);
    enum_fee0b351ba125e67a931f272642991b9.value("CONSTANT_ARRAY", ::clang::Type::ConstantArray);
    enum_fee0b351ba125e67a931f272642991b9.value("INCOMPLETE_ARRAY", ::clang::Type::IncompleteArray);
    enum_fee0b351ba125e67a931f272642991b9.value("VARIABLE_ARRAY", ::clang::Type::VariableArray);
    enum_fee0b351ba125e67a931f272642991b9.value("DEPENDENT_SIZED_ARRAY", ::clang::Type::DependentSizedArray);
    enum_fee0b351ba125e67a931f272642991b9.value("DEPENDENT_SIZED_EXT_VECTOR", ::clang::Type::DependentSizedExtVector);
    enum_fee0b351ba125e67a931f272642991b9.value("VECTOR", ::clang::Type::Vector);
    enum_fee0b351ba125e67a931f272642991b9.value("EXT_VECTOR", ::clang::Type::ExtVector);
    enum_fee0b351ba125e67a931f272642991b9.value("FUNCTION_PROTO", ::clang::Type::FunctionProto);
    enum_fee0b351ba125e67a931f272642991b9.value("FUNCTION_NO_PROTO", ::clang::Type::FunctionNoProto);
    enum_fee0b351ba125e67a931f272642991b9.value("UNRESOLVED_USING", ::clang::Type::UnresolvedUsing);
    enum_fee0b351ba125e67a931f272642991b9.value("PAREN", ::clang::Type::Paren);
    enum_fee0b351ba125e67a931f272642991b9.value("TYPEDEF", ::clang::Type::Typedef);
    enum_fee0b351ba125e67a931f272642991b9.value("ADJUSTED", ::clang::Type::Adjusted);
    enum_fee0b351ba125e67a931f272642991b9.value("DECAYED", ::clang::Type::Decayed);
    enum_fee0b351ba125e67a931f272642991b9.value("TYPE_OF_EXPR", ::clang::Type::TypeOfExpr);
    enum_fee0b351ba125e67a931f272642991b9.value("TYPE_OF", ::clang::Type::TypeOf);
    enum_fee0b351ba125e67a931f272642991b9.value("DECLTYPE", ::clang::Type::Decltype);
    enum_fee0b351ba125e67a931f272642991b9.value("UNARY_TRANSFORM", ::clang::Type::UnaryTransform);
    enum_fee0b351ba125e67a931f272642991b9.value("RECORD", ::clang::Type::Record);
    enum_fee0b351ba125e67a931f272642991b9.value("ENUM", ::clang::Type::Enum);
    enum_fee0b351ba125e67a931f272642991b9.value("ELABORATED", ::clang::Type::Elaborated);
    enum_fee0b351ba125e67a931f272642991b9.value("ATTRIBUTED", ::clang::Type::Attributed);
    enum_fee0b351ba125e67a931f272642991b9.value("TEMPLATE_TYPE_PARM", ::clang::Type::TemplateTypeParm);
    enum_fee0b351ba125e67a931f272642991b9.value("SUBST_TEMPLATE_TYPE_PARM", ::clang::Type::SubstTemplateTypeParm);
    enum_fee0b351ba125e67a931f272642991b9.value("SUBST_TEMPLATE_TYPE_PARM_PACK", ::clang::Type::SubstTemplateTypeParmPack);
    enum_fee0b351ba125e67a931f272642991b9.value("TEMPLATE_SPECIALIZATION", ::clang::Type::TemplateSpecialization);
    enum_fee0b351ba125e67a931f272642991b9.value("AUTO", ::clang::Type::Auto);
    enum_fee0b351ba125e67a931f272642991b9.value("INJECTED_CLASS_NAME", ::clang::Type::InjectedClassName);
    enum_fee0b351ba125e67a931f272642991b9.value("DEPENDENT_NAME", ::clang::Type::DependentName);
    enum_fee0b351ba125e67a931f272642991b9.value("DEPENDENT_TEMPLATE_SPECIALIZATION", ::clang::Type::DependentTemplateSpecialization);
    enum_fee0b351ba125e67a931f272642991b9.value("PACK_EXPANSION", ::clang::Type::PackExpansion);
    enum_fee0b351ba125e67a931f272642991b9.value("OBJ_C_TYPE_PARAM", ::clang::Type::ObjCTypeParam);
    enum_fee0b351ba125e67a931f272642991b9.value("OBJ_C_OBJECT", ::clang::Type::ObjCObject);
    enum_fee0b351ba125e67a931f272642991b9.value("OBJ_C_INTERFACE", ::clang::Type::ObjCInterface);
    enum_fee0b351ba125e67a931f272642991b9.value("OBJ_C_OBJECT_POINTER", ::clang::Type::ObjCObjectPointer);
    enum_fee0b351ba125e67a931f272642991b9.value("PIPE", ::clang::Type::Pipe);
    enum_fee0b351ba125e67a931f272642991b9.value("ATOMIC", ::clang::Type::Atomic);
    enum_fee0b351ba125e67a931f272642991b9.value("TYPE_LAST", ::clang::Type::TypeLast);
    enum_fee0b351ba125e67a931f272642991b9.value("TAG_FIRST", ::clang::Type::TagFirst);
    enum_fee0b351ba125e67a931f272642991b9.value("TAG_LAST", ::clang::Type::TagLast);

}