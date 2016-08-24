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
    bool  (*method_pointer_3f81ad9105fc5d318636c32a792e53fe)(class ::clang::Type  const *) = ::clang::VariableArrayType::classof;
    class ::clang::QualType  (::clang::VariableArrayType::*method_pointer_ac76f40bbdf85477b7ce4b05b7cae270)() const = &::clang::VariableArrayType::desugar;
    class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_721d576c680857cc9194928128a4fd37)() const = &::clang::VariableArrayType::getLBracketLoc;
    class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_e5d3bed1b52250d995bd3f3fc664edd3)() const = &::clang::VariableArrayType::getRBracketLoc;
    bool  (::clang::VariableArrayType::*method_pointer_452b7e174de4550ba98b1896d0062709)() const = &::clang::VariableArrayType::isSugared;
    boost::python::class_< class ::clang::VariableArrayType, autowig::HeldType< class ::clang::VariableArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_77869ea344e0552885031daa303806b9("VariableArrayType", "", boost::python::no_init);
    class_77869ea344e0552885031daa303806b9.def("classof", method_pointer_3f81ad9105fc5d318636c32a792e53fe, "");
    class_77869ea344e0552885031daa303806b9.def("desugar", method_pointer_ac76f40bbdf85477b7ce4b05b7cae270, "");
    class_77869ea344e0552885031daa303806b9.def("get_l_bracket_loc", method_pointer_721d576c680857cc9194928128a4fd37, "");
    class_77869ea344e0552885031daa303806b9.def("get_r_bracket_loc", method_pointer_e5d3bed1b52250d995bd3f3fc664edd3, "");
    class_77869ea344e0552885031daa303806b9.def("is_sugared", method_pointer_452b7e174de4550ba98b1896d0062709, "");
    class_77869ea344e0552885031daa303806b9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VariableArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VariableArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}