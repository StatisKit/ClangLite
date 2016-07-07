#include <boost/python.hpp>
#include <clang/AST/Type.h>

void enumeration_clang_builtin_type_kind()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        std::string _builtin_type_306b968f39b7549b8ac1af6424e98129_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._builtin_type");
        boost::python::object _builtin_type_306b968f39b7549b8ac1af6424e98129_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(_builtin_type_306b968f39b7549b8ac1af6424e98129_name.c_str()))));
        boost::python::scope().attr("_builtin_type") = _builtin_type_306b968f39b7549b8ac1af6424e98129_module;
        boost::python::scope _builtin_type_306b968f39b7549b8ac1af6424e98129_scope = _builtin_type_306b968f39b7549b8ac1af6424e98129_module;
        boost::python::enum_< enum ::clang::BuiltinType::Kind >("kind")
            .value("VOID", ::clang::BuiltinType::Kind::Void)
            .value("BOOL", ::clang::BuiltinType::Kind::Bool)
            .value("CHAR_U", ::clang::BuiltinType::Kind::Char_U)
            .value("U_CHAR", ::clang::BuiltinType::Kind::UChar)
            .value("W_CHAR_U", ::clang::BuiltinType::Kind::WChar_U)
            .value("CHAR_16", ::clang::BuiltinType::Kind::Char16)
            .value("CHAR_32", ::clang::BuiltinType::Kind::Char32)
            .value("U_SHORT", ::clang::BuiltinType::Kind::UShort)
            .value("U_INT", ::clang::BuiltinType::Kind::UInt)
            .value("U_LONG", ::clang::BuiltinType::Kind::ULong)
            .value("U_LONG_LONG", ::clang::BuiltinType::Kind::ULongLong)
            .value("U_INT_128", ::clang::BuiltinType::Kind::UInt128)
            .value("CHAR_S", ::clang::BuiltinType::Kind::Char_S)
            .value("S_CHAR", ::clang::BuiltinType::Kind::SChar)
            .value("W_CHAR_S", ::clang::BuiltinType::Kind::WChar_S)
            .value("SHORT", ::clang::BuiltinType::Kind::Short)
            .value("INT", ::clang::BuiltinType::Kind::Int)
            .value("LONG", ::clang::BuiltinType::Kind::Long)
            .value("LONG_LONG", ::clang::BuiltinType::Kind::LongLong)
            .value("INT_128", ::clang::BuiltinType::Kind::Int128)
            .value("HALF", ::clang::BuiltinType::Kind::Half)
            .value("FLOAT", ::clang::BuiltinType::Kind::Float)
            .value("DOUBLE", ::clang::BuiltinType::Kind::Double)
            .value("LONG_DOUBLE", ::clang::BuiltinType::Kind::LongDouble)
            .value("NULL_PTR", ::clang::BuiltinType::Kind::NullPtr)
            .value("OBJ_C_ID", ::clang::BuiltinType::Kind::ObjCId)
            .value("OBJ_C_CLASS", ::clang::BuiltinType::Kind::ObjCClass)
            .value("OBJ_C_SEL", ::clang::BuiltinType::Kind::ObjCSel)
            .value("OCL_IMAGE_1D", ::clang::BuiltinType::Kind::OCLImage1d)
            .value("OCL_IMAGE_1D_ARRAY", ::clang::BuiltinType::Kind::OCLImage1dArray)
            .value("OCL_IMAGE_1D_BUFFER", ::clang::BuiltinType::Kind::OCLImage1dBuffer)
            .value("OCL_IMAGE_2D", ::clang::BuiltinType::Kind::OCLImage2d)
            .value("OCL_IMAGE_2D_ARRAY", ::clang::BuiltinType::Kind::OCLImage2dArray)
            .value("OCL_IMAGE_3D", ::clang::BuiltinType::Kind::OCLImage3d)
            .value("OCL_SAMPLER", ::clang::BuiltinType::Kind::OCLSampler)
            .value("OCL_EVENT", ::clang::BuiltinType::Kind::OCLEvent)
            .value("DEPENDENT", ::clang::BuiltinType::Kind::Dependent)
            .value("OVERLOAD", ::clang::BuiltinType::Kind::Overload)
            .value("BOUND_MEMBER", ::clang::BuiltinType::Kind::BoundMember)
            .value("PSEUDO_OBJECT", ::clang::BuiltinType::Kind::PseudoObject)
            .value("UNKNOWN_ANY", ::clang::BuiltinType::Kind::UnknownAny)
            .value("BUILTIN_FN", ::clang::BuiltinType::Kind::BuiltinFn)
            .value("ARC_UNBRIDGED_CAST", ::clang::BuiltinType::Kind::ARCUnbridgedCast)
            .value("LAST_KIND", ::clang::BuiltinType::Kind::LastKind);
}