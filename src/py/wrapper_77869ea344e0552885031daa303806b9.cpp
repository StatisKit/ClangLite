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
    bool  (*method_pointer_b922fe37a3d250e48f60a3c3d8707391)(class ::clang::Type  const *) = ::clang::VariableArrayType::classof;
    class ::clang::QualType  (::clang::VariableArrayType::*method_pointer_9751e646f37a56d980c81d3e455e9958)() const = &::clang::VariableArrayType::desugar;
    class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_17bae9c84e37550da272d4088f1cbd7a)() const = &::clang::VariableArrayType::getLBracketLoc;
    class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_240efbf2a7ad5adabee48ae40c46b9d3)() const = &::clang::VariableArrayType::getRBracketLoc;
    bool  (::clang::VariableArrayType::*method_pointer_7902cb7da8a353b98180387cb24f2e0f)() const = &::clang::VariableArrayType::isSugared;
    boost::python::class_< class ::clang::VariableArrayType, autowig::HeldType< class ::clang::VariableArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_77869ea344e0552885031daa303806b9("VariableArrayType", "", boost::python::no_init);
    class_77869ea344e0552885031daa303806b9.def("classof", method_pointer_b922fe37a3d250e48f60a3c3d8707391, "");
    class_77869ea344e0552885031daa303806b9.def("desugar", method_pointer_9751e646f37a56d980c81d3e455e9958, "");
    class_77869ea344e0552885031daa303806b9.def("get_l_bracket_loc", method_pointer_17bae9c84e37550da272d4088f1cbd7a, "");
    class_77869ea344e0552885031daa303806b9.def("get_r_bracket_loc", method_pointer_240efbf2a7ad5adabee48ae40c46b9d3, "");
    class_77869ea344e0552885031daa303806b9.def("is_sugared", method_pointer_7902cb7da8a353b98180387cb24f2e0f, "");
    class_77869ea344e0552885031daa303806b9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VariableArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VariableArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}