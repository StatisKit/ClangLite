#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

void wrapper_f651c14028675908a3d30652316d9859()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_306b968f39b7549b8ac1af6424e98129 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._builtin_type");
    boost::python::object module_306b968f39b7549b8ac1af6424e98129(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_306b968f39b7549b8ac1af6424e98129.c_str()))));
    boost::python::scope().attr("_builtin_type") = module_306b968f39b7549b8ac1af6424e98129;
    boost::python::scope scope_306b968f39b7549b8ac1af6424e98129 = module_306b968f39b7549b8ac1af6424e98129;
    boost::python::enum_< enum ::clang::BuiltinType::Kind >("kind")
        .value("ARC_UNBRIDGED_CAST", ::clang::BuiltinType::ARCUnbridgedCast)
        .value("BOOL", ::clang::BuiltinType::Bool)
        .value("BOUND_MEMBER", ::clang::BuiltinType::BoundMember)
        .value("BUILTIN_FN", ::clang::BuiltinType::BuiltinFn)
        .value("CHAR_16", ::clang::BuiltinType::Char16)
        .value("CHAR_32", ::clang::BuiltinType::Char32)
        .value("CHAR_S", ::clang::BuiltinType::Char_S)
        .value("CHAR_U", ::clang::BuiltinType::Char_U)
        .value("DEPENDENT", ::clang::BuiltinType::Dependent)
        .value("DOUBLE", ::clang::BuiltinType::Double)
        .value("FLOAT", ::clang::BuiltinType::Float)
        .value("HALF", ::clang::BuiltinType::Half)
        .value("INT", ::clang::BuiltinType::Int)
        .value("INT_128", ::clang::BuiltinType::Int128)
        .value("LAST_KIND", ::clang::BuiltinType::LastKind)
        .value("LONG", ::clang::BuiltinType::Long)
        .value("LONG_DOUBLE", ::clang::BuiltinType::LongDouble)
        .value("LONG_LONG", ::clang::BuiltinType::LongLong)
        .value("NULL_PTR", ::clang::BuiltinType::NullPtr)
        .value("OCL_CLK_EVENT", ::clang::BuiltinType::OCLClkEvent)
        .value("OCL_EVENT", ::clang::BuiltinType::OCLEvent)
        .value("OCL_IMAGE_1D", ::clang::BuiltinType::OCLImage1d)
        .value("OCL_IMAGE_1D_ARRAY", ::clang::BuiltinType::OCLImage1dArray)
        .value("OCL_IMAGE_1D_BUFFER", ::clang::BuiltinType::OCLImage1dBuffer)
        .value("OCL_IMAGE_2D", ::clang::BuiltinType::OCLImage2d)
        .value("OCL_IMAGE_2D_ARRAY", ::clang::BuiltinType::OCLImage2dArray)
        .value("OCL_IMAGE_2D_ARRAY_DEPTH", ::clang::BuiltinType::OCLImage2dArrayDepth)
        .value("OCL_IMAGE_2D_ARRAY_MSAA", ::clang::BuiltinType::OCLImage2dArrayMSAA)
        .value("OCL_IMAGE_2D_ARRAY_MSAA_DEPTH", ::clang::BuiltinType::OCLImage2dArrayMSAADepth)
        .value("OCL_IMAGE_2D_DEPTH", ::clang::BuiltinType::OCLImage2dDepth)
        .value("OCL_IMAGE_2D_MSAA", ::clang::BuiltinType::OCLImage2dMSAA)
        .value("OCL_IMAGE_2D_MSAA_DEPTH", ::clang::BuiltinType::OCLImage2dMSAADepth)
        .value("OCL_IMAGE_3D", ::clang::BuiltinType::OCLImage3d)
        .value("OCLND_RANGE", ::clang::BuiltinType::OCLNDRange)
        .value("OCL_QUEUE", ::clang::BuiltinType::OCLQueue)
        .value("OCL_RESERVE_ID", ::clang::BuiltinType::OCLReserveID)
        .value("OCL_SAMPLER", ::clang::BuiltinType::OCLSampler)
        .value("OMP_ARRAY_SECTION", ::clang::BuiltinType::OMPArraySection)
        .value("OBJ_C_CLASS", ::clang::BuiltinType::ObjCClass)
        .value("OBJ_C_ID", ::clang::BuiltinType::ObjCId)
        .value("OBJ_C_SEL", ::clang::BuiltinType::ObjCSel)
        .value("OVERLOAD", ::clang::BuiltinType::Overload)
        .value("PSEUDO_OBJECT", ::clang::BuiltinType::PseudoObject)
        .value("S_CHAR", ::clang::BuiltinType::SChar)
        .value("SHORT", ::clang::BuiltinType::Short)
        .value("U_CHAR", ::clang::BuiltinType::UChar)
        .value("U_INT", ::clang::BuiltinType::UInt)
        .value("U_INT_128", ::clang::BuiltinType::UInt128)
        .value("U_LONG", ::clang::BuiltinType::ULong)
        .value("U_LONG_LONG", ::clang::BuiltinType::ULongLong)
        .value("U_SHORT", ::clang::BuiltinType::UShort)
        .value("UNKNOWN_ANY", ::clang::BuiltinType::UnknownAny)
        .value("VOID", ::clang::BuiltinType::Void)
        .value("W_CHAR_S", ::clang::BuiltinType::WChar_S)
        .value("W_CHAR_U", ::clang::BuiltinType::WChar_U);
}