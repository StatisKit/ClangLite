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
    bool  (*method_pointer_dd4594302dcb5b63bfd3503cf282e0d6)(class ::clang::Type  const *) = ::clang::VariableArrayType::classof;
    class ::clang::QualType  (::clang::VariableArrayType::*method_pointer_8360b374ebce5602bfb6aa850a1afe83)() const = &::clang::VariableArrayType::desugar;
    class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_379081d70dad5001b56ac7e3b3e1efd7)() const = &::clang::VariableArrayType::getLBracketLoc;
    class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_a6f4798f457a5d19a6f1f0e1a88cee4e)() const = &::clang::VariableArrayType::getRBracketLoc;
    bool  (::clang::VariableArrayType::*method_pointer_856b3af17d545180b64b1cb3b2dd1a39)() const = &::clang::VariableArrayType::isSugared;
    boost::python::class_< class ::clang::VariableArrayType, autowig::HeldType< class ::clang::VariableArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_77869ea344e0552885031daa303806b9("VariableArrayType", "", boost::python::no_init);
    class_77869ea344e0552885031daa303806b9.def("classof", method_pointer_dd4594302dcb5b63bfd3503cf282e0d6, "");
    class_77869ea344e0552885031daa303806b9.def("desugar", method_pointer_8360b374ebce5602bfb6aa850a1afe83, "");
    class_77869ea344e0552885031daa303806b9.def("get_l_bracket_loc", method_pointer_379081d70dad5001b56ac7e3b3e1efd7, "");
    class_77869ea344e0552885031daa303806b9.def("get_r_bracket_loc", method_pointer_a6f4798f457a5d19a6f1f0e1a88cee4e, "");
    class_77869ea344e0552885031daa303806b9.def("is_sugared", method_pointer_856b3af17d545180b64b1cb3b2dd1a39, "");
    class_77869ea344e0552885031daa303806b9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VariableArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VariableArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}