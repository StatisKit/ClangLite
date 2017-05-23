#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::VariableArrayType const volatile * get_pointer<class ::clang::VariableArrayType const volatile >(class ::clang::VariableArrayType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_77869ea344e0552885031daa303806b9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_91fa005535c05c1f8b7db2e454978229)() const = &::clang::VariableArrayType::getLBracketLoc;
    class ::clang::SourceLocation  (::clang::VariableArrayType::*method_pointer_0eff004e01eb57f2995721d08cd7a82a)() const = &::clang::VariableArrayType::getRBracketLoc;
    bool  (::clang::VariableArrayType::*method_pointer_b9307fd0eb2f5345b55ec88fc82cfb89)() const = &::clang::VariableArrayType::isSugared;
    class ::clang::QualType  (::clang::VariableArrayType::*method_pointer_64bbc0896de95e48973d6c6f429f48e8)() const = &::clang::VariableArrayType::desugar;
    bool  (*method_pointer_551d4d399de55b229f38a8b0c928c78f)(class ::clang::Type const *) = ::clang::VariableArrayType::classof;
    boost::python::class_< class ::clang::VariableArrayType, autowig::Held< class ::clang::VariableArrayType >::Type, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_77869ea344e0552885031daa303806b9("VariableArrayType", "", boost::python::no_init);
    class_77869ea344e0552885031daa303806b9.def("get_l_bracket_loc", method_pointer_91fa005535c05c1f8b7db2e454978229, "");
    class_77869ea344e0552885031daa303806b9.def("get_r_bracket_loc", method_pointer_0eff004e01eb57f2995721d08cd7a82a, "");
    class_77869ea344e0552885031daa303806b9.def("is_sugared", method_pointer_b9307fd0eb2f5345b55ec88fc82cfb89, "");
    class_77869ea344e0552885031daa303806b9.def("desugar", method_pointer_64bbc0896de95e48973d6c6f429f48e8, "");
    class_77869ea344e0552885031daa303806b9.def("classof", method_pointer_551d4d399de55b229f38a8b0c928c78f, "");
    class_77869ea344e0552885031daa303806b9.staticmethod("classof");

    if(autowig::Held< class ::clang::VariableArrayType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::VariableArrayType >::Type, autowig::Held< class ::clang::ArrayType >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::VariableArrayType >::Type, boost::python::objects::make_ptr_instance< class ::clang::VariableArrayType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::VariableArrayType >::Type, class ::clang::VariableArrayType > > >();
    }

}