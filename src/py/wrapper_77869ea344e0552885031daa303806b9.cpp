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
    bool  (*method_pointer_439475cbdf675b93a25d333a08cd2f25)(class ::clang::Type  const *) = ::clang::VariableArrayType::classof;
    class ::clang::QualType  (::clang::VariableArrayType::*method_pointer_291e55c0801057198725d80d939a2f91)() const = &::clang::VariableArrayType::desugar;
    class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_7c74e6f8c286580cb254a08d0c9da462)() const = &::clang::VariableArrayType::getLBracketLoc;
    class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_da65af0caafc5d2b81dd4fa44fd39741)() const = &::clang::VariableArrayType::getRBracketLoc;
    bool  (::clang::VariableArrayType::*method_pointer_02e1081eca785dd1891afb9be8e387f4)() const = &::clang::VariableArrayType::isSugared;
    boost::python::class_< class ::clang::VariableArrayType, autowig::HeldType< class ::clang::VariableArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_77869ea344e0552885031daa303806b9("VariableArrayType", "", boost::python::no_init);
    class_77869ea344e0552885031daa303806b9.def("classof", method_pointer_439475cbdf675b93a25d333a08cd2f25, "");
    class_77869ea344e0552885031daa303806b9.def("desugar", method_pointer_291e55c0801057198725d80d939a2f91, "");
    class_77869ea344e0552885031daa303806b9.def("get_l_bracket_loc", method_pointer_7c74e6f8c286580cb254a08d0c9da462, "");
    class_77869ea344e0552885031daa303806b9.def("get_r_bracket_loc", method_pointer_da65af0caafc5d2b81dd4fa44fd39741, "");
    class_77869ea344e0552885031daa303806b9.def("is_sugared", method_pointer_02e1081eca785dd1891afb9be8e387f4, "");
    class_77869ea344e0552885031daa303806b9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VariableArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VariableArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}