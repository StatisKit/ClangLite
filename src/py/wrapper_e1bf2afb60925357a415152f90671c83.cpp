#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e1bf2afb60925357a415152f90671c83()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_a4e94c8c15915da9a611b5afa8485fd8)(class ::clang::Type  const *) = ::clang::SubstTemplateTypeParmType::classof;
    class ::clang::QualType  (::clang::SubstTemplateTypeParmType::*method_pointer_84af81b07c5457c6acd73e608fc841c7)() const = &::clang::SubstTemplateTypeParmType::desugar;
    class ::clang::TemplateTypeParmType  const * (::clang::SubstTemplateTypeParmType::*method_pointer_35c5ff0033da5a31b05390f1641d4aa5)() const = &::clang::SubstTemplateTypeParmType::getReplacedParameter;
    class ::clang::QualType  (::clang::SubstTemplateTypeParmType::*method_pointer_3e23307a8e8d5964913cd284b8c7ef5a)() const = &::clang::SubstTemplateTypeParmType::getReplacementType;
    bool  (::clang::SubstTemplateTypeParmType::*method_pointer_499d91089f0558328a6bc8d16ec2d551)() const = &::clang::SubstTemplateTypeParmType::isSugared;
    boost::python::class_< class ::clang::SubstTemplateTypeParmType, autowig::HeldType< class ::clang::SubstTemplateTypeParmType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_e1bf2afb60925357a415152f90671c83("SubstTemplateTypeParmType", "", boost::python::no_init);
    class_e1bf2afb60925357a415152f90671c83.def("classof", method_pointer_a4e94c8c15915da9a611b5afa8485fd8, "");
    class_e1bf2afb60925357a415152f90671c83.def("desugar", method_pointer_84af81b07c5457c6acd73e608fc841c7, "");
    class_e1bf2afb60925357a415152f90671c83.def("get_replaced_parameter", method_pointer_35c5ff0033da5a31b05390f1641d4aa5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e1bf2afb60925357a415152f90671c83.def("get_replacement_type", method_pointer_3e23307a8e8d5964913cd284b8c7ef5a, "");
    class_e1bf2afb60925357a415152f90671c83.def("is_sugared", method_pointer_499d91089f0558328a6bc8d16ec2d551, "");
    class_e1bf2afb60925357a415152f90671c83.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::SubstTemplateTypeParmType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::SubstTemplateTypeParmType >, autowig::HeldType< class ::clang::Type > >();
    }

}