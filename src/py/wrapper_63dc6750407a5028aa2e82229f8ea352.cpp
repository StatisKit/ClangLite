#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_63dc6750407a5028aa2e82229f8ea352()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_6f5a1ace4c045992bcc16ad0e64d42a4)(class ::clang::Type  const *) = ::clang::UnaryTransformType::classof;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_2fcf331dc9d25d1abf85547722a10a18)() const = &::clang::UnaryTransformType::desugar;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_6b8f5ceac1b05dd6a356c2fa2bbb6955)() const = &::clang::UnaryTransformType::getBaseType;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_c2b58c5acafd5b67936322cc0f099ab2)() const = &::clang::UnaryTransformType::getUnderlyingType;
    bool  (::clang::UnaryTransformType::*method_pointer_2118714e24e258749cd7ec7bdef549d6)() const = &::clang::UnaryTransformType::isSugared;
    boost::python::class_< class ::clang::UnaryTransformType, autowig::HeldType< class ::clang::UnaryTransformType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_63dc6750407a5028aa2e82229f8ea352("UnaryTransformType", "", boost::python::no_init);
    class_63dc6750407a5028aa2e82229f8ea352.def("classof", method_pointer_6f5a1ace4c045992bcc16ad0e64d42a4, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("desugar", method_pointer_2fcf331dc9d25d1abf85547722a10a18, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_base_type", method_pointer_6b8f5ceac1b05dd6a356c2fa2bbb6955, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_underlying_type", method_pointer_c2b58c5acafd5b67936322cc0f099ab2, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("is_sugared", method_pointer_2118714e24e258749cd7ec7bdef549d6, "");
    class_63dc6750407a5028aa2e82229f8ea352.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnaryTransformType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnaryTransformType >, autowig::HeldType< class ::clang::Type > >();
    }

}