#include "_clanglite.h"


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
    boost::python::enum_< enum ::clang::BuiltinType::Kind > enum_f651c14028675908a3d30652316d9859("kind");

    enum_f651c14028675908a3d30652316d9859.value("VOID", ::clang::BuiltinType::Void);

    enum_f651c14028675908a3d30652316d9859.value("BOOL", ::clang::BuiltinType::Bool);

    enum_f651c14028675908a3d30652316d9859.value("CHAR_U", ::clang::BuiltinType::Char_U);

    enum_f651c14028675908a3d30652316d9859.value("U_CHAR", ::clang::BuiltinType::UChar);

    enum_f651c14028675908a3d30652316d9859.value("W_CHAR_U", ::clang::BuiltinType::WChar_U);

    enum_f651c14028675908a3d30652316d9859.value("CHAR_16", ::clang::BuiltinType::Char16);

    enum_f651c14028675908a3d30652316d9859.value("CHAR_32", ::clang::BuiltinType::Char32);

    enum_f651c14028675908a3d30652316d9859.value("U_SHORT", ::clang::BuiltinType::UShort);

    enum_f651c14028675908a3d30652316d9859.value("U_INT", ::clang::BuiltinType::UInt);

    enum_f651c14028675908a3d30652316d9859.value("U_LONG", ::clang::BuiltinType::ULong);

    enum_f651c14028675908a3d30652316d9859.value("U_LONG_LONG", ::clang::BuiltinType::ULongLong);

    enum_f651c14028675908a3d30652316d9859.value("U_INT_128", ::clang::BuiltinType::UInt128);

    enum_f651c14028675908a3d30652316d9859.value("CHAR_S", ::clang::BuiltinType::Char_S);

    enum_f651c14028675908a3d30652316d9859.value("S_CHAR", ::clang::BuiltinType::SChar);

    enum_f651c14028675908a3d30652316d9859.value("W_CHAR_S", ::clang::BuiltinType::WChar_S);

    enum_f651c14028675908a3d30652316d9859.value("SHORT", ::clang::BuiltinType::Short);

    enum_f651c14028675908a3d30652316d9859.value("INT", ::clang::BuiltinType::Int);

    enum_f651c14028675908a3d30652316d9859.value("LONG", ::clang::BuiltinType::Long);

    enum_f651c14028675908a3d30652316d9859.value("LONG_LONG", ::clang::BuiltinType::LongLong);

    enum_f651c14028675908a3d30652316d9859.value("INT_128", ::clang::BuiltinType::Int128);

    enum_f651c14028675908a3d30652316d9859.value("HALF", ::clang::BuiltinType::Half);

    enum_f651c14028675908a3d30652316d9859.value("FLOAT", ::clang::BuiltinType::Float);

    enum_f651c14028675908a3d30652316d9859.value("DOUBLE", ::clang::BuiltinType::Double);

    enum_f651c14028675908a3d30652316d9859.value("LONG_DOUBLE", ::clang::BuiltinType::LongDouble);

    enum_f651c14028675908a3d30652316d9859.value("NULL_PTR", ::clang::BuiltinType::NullPtr);

    enum_f651c14028675908a3d30652316d9859.value("OBJ_C_ID", ::clang::BuiltinType::ObjCId);

    enum_f651c14028675908a3d30652316d9859.value("OBJ_C_CLASS", ::clang::BuiltinType::ObjCClass);

    enum_f651c14028675908a3d30652316d9859.value("OBJ_C_SEL", ::clang::BuiltinType::ObjCSel);

    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_1D", ::clang::BuiltinType::OCLImage1d);

    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_1D_ARRAY", ::clang::BuiltinType::OCLImage1dArray);

    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_1D_BUFFER", ::clang::BuiltinType::OCLImage1dBuffer);

    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D", ::clang::BuiltinType::OCLImage2d);

    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY", ::clang::BuiltinType::OCLImage2dArray);

    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_DEPTH", ::clang::BuiltinType::OCLImage2dDepth);

    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY_DEPTH", ::clang::BuiltinType::OCLImage2dArrayDepth);

    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_MSAA", ::clang::BuiltinType::OCLImage2dMSAA);

    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY_MSAA", ::clang::BuiltinType::OCLImage2dArrayMSAA);

    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_MSAA_DEPTH", ::clang::BuiltinType::OCLImage2dMSAADepth);

    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY_MSAA_DEPTH", ::clang::BuiltinType::OCLImage2dArrayMSAADepth);

    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_3D", ::clang::BuiltinType::OCLImage3d);

    enum_f651c14028675908a3d30652316d9859.value("OCL_SAMPLER", ::clang::BuiltinType::OCLSampler);

    enum_f651c14028675908a3d30652316d9859.value("OCL_EVENT", ::clang::BuiltinType::OCLEvent);

    enum_f651c14028675908a3d30652316d9859.value("OCL_CLK_EVENT", ::clang::BuiltinType::OCLClkEvent);

    enum_f651c14028675908a3d30652316d9859.value("OCL_QUEUE", ::clang::BuiltinType::OCLQueue);

    enum_f651c14028675908a3d30652316d9859.value("OCLND_RANGE", ::clang::BuiltinType::OCLNDRange);

    enum_f651c14028675908a3d30652316d9859.value("OCL_RESERVE_ID", ::clang::BuiltinType::OCLReserveID);

    enum_f651c14028675908a3d30652316d9859.value("DEPENDENT", ::clang::BuiltinType::Dependent);

    enum_f651c14028675908a3d30652316d9859.value("OVERLOAD", ::clang::BuiltinType::Overload);

    enum_f651c14028675908a3d30652316d9859.value("BOUND_MEMBER", ::clang::BuiltinType::BoundMember);

    enum_f651c14028675908a3d30652316d9859.value("PSEUDO_OBJECT", ::clang::BuiltinType::PseudoObject);

    enum_f651c14028675908a3d30652316d9859.value("UNKNOWN_ANY", ::clang::BuiltinType::UnknownAny);

    enum_f651c14028675908a3d30652316d9859.value("BUILTIN_FN", ::clang::BuiltinType::BuiltinFn);

    enum_f651c14028675908a3d30652316d9859.value("ARC_UNBRIDGED_CAST", ::clang::BuiltinType::ARCUnbridgedCast);

    enum_f651c14028675908a3d30652316d9859.value("OMP_ARRAY_SECTION", ::clang::BuiltinType::OMPArraySection);

    enum_f651c14028675908a3d30652316d9859.value("LAST_KIND", ::clang::BuiltinType::LastKind);

}