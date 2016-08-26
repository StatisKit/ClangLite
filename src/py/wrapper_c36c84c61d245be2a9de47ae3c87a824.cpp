#include "_clanglite.h"


namespace autowig
{
}


void wrapper_c36c84c61d245be2a9de47ae3c87a824()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_cbeb98f37b0f55a8a66a5aa44c82acf6)(class ::clang::Type  const *) = ::clang::PointerType::classof;
    bool  (::clang::PointerType::*method_pointer_14a575752dcd51dab527638d4ad93503)() const = &::clang::PointerType::isSugared;
    boost::python::class_< class ::clang::PointerType, autowig::HeldType< class ::clang::PointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_c36c84c61d245be2a9de47ae3c87a824("PointerType", "", boost::python::no_init);
    class_c36c84c61d245be2a9de47ae3c87a824.def("classof", method_pointer_cbeb98f37b0f55a8a66a5aa44c82acf6, "");
    class_c36c84c61d245be2a9de47ae3c87a824.def("is_sugared", method_pointer_14a575752dcd51dab527638d4ad93503, "");
    class_c36c84c61d245be2a9de47ae3c87a824.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::PointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::PointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}