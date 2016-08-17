#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_434f2e3471bb55ffb2ed175a1ab61e17()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_d817d0dea76a5855b9f89eea47afdc95)(class ::clang::Type  const *) = ::clang::EnumType::classof;
    bool  (::clang::EnumType::*method_pointer_e3f56b4f945b5e5c876648ed089be469)() const = &::clang::EnumType::isSugared;
    class ::clang::EnumDecl  * (::clang::EnumType::*method_pointer_92543cdf2d295f7192b89e7989952eec)() const = &::clang::EnumType::getDecl;
    boost::python::class_< class ::clang::EnumType, autowig::HeldType< class ::clang::EnumType >, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_434f2e3471bb55ffb2ed175a1ab61e17("EnumType", "", boost::python::no_init);
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("classof", method_pointer_d817d0dea76a5855b9f89eea47afdc95, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("is_sugared", method_pointer_e3f56b4f945b5e5c876648ed089be469, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("get_decl", method_pointer_92543cdf2d295f7192b89e7989952eec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumType >, autowig::HeldType< class ::clang::TagType > >();
    }

}