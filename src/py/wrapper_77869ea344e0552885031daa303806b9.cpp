#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_77869ea344e0552885031daa303806b9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_974881e2e92e5624abc6fd5e29c463d9)(class ::clang::Type  const *) = ::clang::VariableArrayType::classof;
    class ::clang::QualType  (::clang::VariableArrayType::*method_pointer_cfc724c782e4542481e8858e359682f9)() const = &::clang::VariableArrayType::desugar;
    class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_b29aa1967c61573e9db06688f58072a5)() const = &::clang::VariableArrayType::getLBracketLoc;
    class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_39059bf0b7db583ca9904d1ca0b2efb4)() const = &::clang::VariableArrayType::getRBracketLoc;
    bool  (::clang::VariableArrayType::*method_pointer_dec4e6cc7d885593ac22f4d9814fa549)() const = &::clang::VariableArrayType::isSugared;
    boost::python::class_< class ::clang::VariableArrayType, autowig::HeldType< class ::clang::VariableArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_77869ea344e0552885031daa303806b9("VariableArrayType", "", boost::python::no_init);
    class_77869ea344e0552885031daa303806b9.def("classof", method_pointer_974881e2e92e5624abc6fd5e29c463d9, "");
    class_77869ea344e0552885031daa303806b9.def("desugar", method_pointer_cfc724c782e4542481e8858e359682f9, "");
    class_77869ea344e0552885031daa303806b9.def("get_l_bracket_loc", method_pointer_b29aa1967c61573e9db06688f58072a5, "");
    class_77869ea344e0552885031daa303806b9.def("get_r_bracket_loc", method_pointer_39059bf0b7db583ca9904d1ca0b2efb4, "");
    class_77869ea344e0552885031daa303806b9.def("is_sugared", method_pointer_dec4e6cc7d885593ac22f4d9814fa549, "");
    class_77869ea344e0552885031daa303806b9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VariableArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VariableArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}