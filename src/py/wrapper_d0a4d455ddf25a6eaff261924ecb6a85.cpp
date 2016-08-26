#include "_clanglite.h"


namespace autowig
{
}


void wrapper_d0a4d455ddf25a6eaff261924ecb6a85()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_c614b6e2bf425f3e83354c4d9165866c)(class ::clang::Type  const *) = ::clang::FunctionNoProtoType::classof;
    class ::clang::QualType  (::clang::FunctionNoProtoType::*method_pointer_5d0e4a655e2358aa96df2c27a04f9ffe)() const = &::clang::FunctionNoProtoType::desugar;
    bool  (::clang::FunctionNoProtoType::*method_pointer_c44c54b8ebb85fa297bfaa1c1497fb88)() const = &::clang::FunctionNoProtoType::isSugared;
    boost::python::class_< class ::clang::FunctionNoProtoType, autowig::HeldType< class ::clang::FunctionNoProtoType >, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_d0a4d455ddf25a6eaff261924ecb6a85("FunctionNoProtoType", "", boost::python::no_init);
    class_d0a4d455ddf25a6eaff261924ecb6a85.def("classof", method_pointer_c614b6e2bf425f3e83354c4d9165866c, "");
    class_d0a4d455ddf25a6eaff261924ecb6a85.def("desugar", method_pointer_5d0e4a655e2358aa96df2c27a04f9ffe, "");
    class_d0a4d455ddf25a6eaff261924ecb6a85.def("is_sugared", method_pointer_c44c54b8ebb85fa297bfaa1c1497fb88, "");
    class_d0a4d455ddf25a6eaff261924ecb6a85.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionNoProtoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionNoProtoType >, autowig::HeldType< class ::clang::FunctionType > >();
    }

}