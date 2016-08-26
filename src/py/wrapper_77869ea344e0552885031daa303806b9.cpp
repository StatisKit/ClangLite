#include "_clanglite.h"


namespace autowig
{
}


void wrapper_77869ea344e0552885031daa303806b9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_a5960a7f802f542394889b0dae5d8614)(class ::clang::Type  const *) = ::clang::VariableArrayType::classof;
    class ::clang::QualType  (::clang::VariableArrayType::*method_pointer_a289c00cfc945666956fc26a100e0aaf)() const = &::clang::VariableArrayType::desugar;
    class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_bb24b3983aa7566791694406bb310d4c)() const = &::clang::VariableArrayType::getLBracketLoc;
    class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_397c0a7bb26d5e22bf10bec8eb82607d)() const = &::clang::VariableArrayType::getRBracketLoc;
    bool  (::clang::VariableArrayType::*method_pointer_91d2c38fcda6546792f98ce1ec466ce3)() const = &::clang::VariableArrayType::isSugared;
    boost::python::class_< class ::clang::VariableArrayType, autowig::HeldType< class ::clang::VariableArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_77869ea344e0552885031daa303806b9("VariableArrayType", "", boost::python::no_init);
    class_77869ea344e0552885031daa303806b9.def("classof", method_pointer_a5960a7f802f542394889b0dae5d8614, "");
    class_77869ea344e0552885031daa303806b9.def("desugar", method_pointer_a289c00cfc945666956fc26a100e0aaf, "");
    class_77869ea344e0552885031daa303806b9.def("get_l_bracket_loc", method_pointer_bb24b3983aa7566791694406bb310d4c, "");
    class_77869ea344e0552885031daa303806b9.def("get_r_bracket_loc", method_pointer_397c0a7bb26d5e22bf10bec8eb82607d, "");
    class_77869ea344e0552885031daa303806b9.def("is_sugared", method_pointer_91d2c38fcda6546792f98ce1ec466ce3, "");
    class_77869ea344e0552885031daa303806b9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VariableArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VariableArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}