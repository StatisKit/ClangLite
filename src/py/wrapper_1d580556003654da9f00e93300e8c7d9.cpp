#include "_clanglite.h"


namespace autowig
{
}


void wrapper_1d580556003654da9f00e93300e8c7d9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_d89809be143153a28179cfc966e0c816)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    bool  (::clang::AttributedType::*method_pointer_9f3871a132d459fb9934504f2ecdd777)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_44f9aa5dab005175a3c0f3d38d3691cd)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_52566fc28fd1557ab810270a459bbcf4)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_85162f24b41f5dee856ed2659eb8a345)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_d89809be143153a28179cfc966e0c816, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_9f3871a132d459fb9934504f2ecdd777, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_44f9aa5dab005175a3c0f3d38d3691cd, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_52566fc28fd1557ab810270a459bbcf4, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_85162f24b41f5dee856ed2659eb8a345, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}