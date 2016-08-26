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
    bool  (*method_pointer_ef08c7c1a4275bdb918bae2607e75dc9)(class ::clang::Type  const *) = ::clang::FunctionNoProtoType::classof;
    bool  (::clang::FunctionNoProtoType::*method_pointer_1acf3449c81e520ca966df6343ca87a4)() const = &::clang::FunctionNoProtoType::isSugared;
    boost::python::class_< class ::clang::FunctionNoProtoType, autowig::HeldType< class ::clang::FunctionNoProtoType >, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_d0a4d455ddf25a6eaff261924ecb6a85("FunctionNoProtoType", "", boost::python::no_init);
    class_d0a4d455ddf25a6eaff261924ecb6a85.def("classof", method_pointer_ef08c7c1a4275bdb918bae2607e75dc9, "");
    class_d0a4d455ddf25a6eaff261924ecb6a85.def("is_sugared", method_pointer_1acf3449c81e520ca966df6343ca87a4, "");
    class_d0a4d455ddf25a6eaff261924ecb6a85.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionNoProtoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionNoProtoType >, autowig::HeldType< class ::clang::FunctionType > >();
    }

}