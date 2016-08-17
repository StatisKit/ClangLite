#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_e1bf2afb60925357a415152f90671c83()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::SubstTemplateTypeParmType::*method_pointer_29489c15e7d65ae49ece0033b8544231)() const = &::clang::SubstTemplateTypeParmType::isSugared;
    bool  (*method_pointer_02d93c3874de5b46bfbcc2b3560387d6)(class ::clang::Type  const *) = ::clang::SubstTemplateTypeParmType::classof;
    class ::clang::TemplateTypeParmType  const * (::clang::SubstTemplateTypeParmType::*method_pointer_c1bb153237045739972ecc842dc3d9cc)() const = &::clang::SubstTemplateTypeParmType::getReplacedParameter;
    boost::python::class_< class ::clang::SubstTemplateTypeParmType, autowig::HeldType< class ::clang::SubstTemplateTypeParmType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_e1bf2afb60925357a415152f90671c83("SubstTemplateTypeParmType", "", boost::python::no_init);
    class_e1bf2afb60925357a415152f90671c83.def("is_sugared", method_pointer_29489c15e7d65ae49ece0033b8544231, "");
    class_e1bf2afb60925357a415152f90671c83.def("classof", method_pointer_02d93c3874de5b46bfbcc2b3560387d6, "");
    class_e1bf2afb60925357a415152f90671c83.def("get_replaced_parameter", method_pointer_c1bb153237045739972ecc842dc3d9cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e1bf2afb60925357a415152f90671c83.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::SubstTemplateTypeParmType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::SubstTemplateTypeParmType >, autowig::HeldType< class ::clang::Type > >();
    }

}