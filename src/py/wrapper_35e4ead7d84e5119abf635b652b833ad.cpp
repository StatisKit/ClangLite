#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_35e4ead7d84e5119abf635b652b833ad()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_9d5037cb2057570e8ef6e3613400c8c1)(class ::clang::Type  const *) = ::clang::TagType::classof;
    class ::clang::TagDecl  * (::clang::TagType::*method_pointer_2f3e17e848ce5e22a8962433016aab1e)() const = &::clang::TagType::getDecl;
    bool  (::clang::TagType::*method_pointer_7f6a194819e4520a8d2af4d090e69b2d)() const = &::clang::TagType::isBeingDefined;
    boost::python::class_< class ::clang::TagType, autowig::HeldType< class ::clang::TagType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_35e4ead7d84e5119abf635b652b833ad("TagType", "", boost::python::no_init);
    class_35e4ead7d84e5119abf635b652b833ad.def("classof", method_pointer_9d5037cb2057570e8ef6e3613400c8c1, "");
    class_35e4ead7d84e5119abf635b652b833ad.def("get_decl", method_pointer_2f3e17e848ce5e22a8962433016aab1e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_35e4ead7d84e5119abf635b652b833ad.def("is_being_defined", method_pointer_7f6a194819e4520a8d2af4d090e69b2d, "");
    class_35e4ead7d84e5119abf635b652b833ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TagType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TagType >, autowig::HeldType< class ::clang::Type > >();
    }

}