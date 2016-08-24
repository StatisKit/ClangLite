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
    bool  (*method_pointer_9cba53aca6ba5e6e9f3e5feecb6f2188)(class ::clang::Type  const *) = ::clang::SubstTemplateTypeParmType::classof;
    class ::clang::QualType  (::clang::SubstTemplateTypeParmType::*method_pointer_cfb5d675be805c7eac66310688ff29c5)() const = &::clang::SubstTemplateTypeParmType::desugar;
    class ::clang::TemplateTypeParmType  const * (::clang::SubstTemplateTypeParmType::*method_pointer_930d856938985b7584980639819b0c1b)() const = &::clang::SubstTemplateTypeParmType::getReplacedParameter;
    class ::clang::QualType  (::clang::SubstTemplateTypeParmType::*method_pointer_40a66086f7805a3bae9e6159251f6447)() const = &::clang::SubstTemplateTypeParmType::getReplacementType;
    bool  (::clang::SubstTemplateTypeParmType::*method_pointer_03182176b78e538796da9f276d09b22f)() const = &::clang::SubstTemplateTypeParmType::isSugared;
    boost::python::class_< class ::clang::SubstTemplateTypeParmType, autowig::HeldType< class ::clang::SubstTemplateTypeParmType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_e1bf2afb60925357a415152f90671c83("SubstTemplateTypeParmType", "", boost::python::no_init);
    class_e1bf2afb60925357a415152f90671c83.def("classof", method_pointer_9cba53aca6ba5e6e9f3e5feecb6f2188, "");
    class_e1bf2afb60925357a415152f90671c83.def("desugar", method_pointer_cfb5d675be805c7eac66310688ff29c5, "");
    class_e1bf2afb60925357a415152f90671c83.def("get_replaced_parameter", method_pointer_930d856938985b7584980639819b0c1b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e1bf2afb60925357a415152f90671c83.def("get_replacement_type", method_pointer_40a66086f7805a3bae9e6159251f6447, "");
    class_e1bf2afb60925357a415152f90671c83.def("is_sugared", method_pointer_03182176b78e538796da9f276d09b22f, "");
    class_e1bf2afb60925357a415152f90671c83.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::SubstTemplateTypeParmType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::SubstTemplateTypeParmType >, autowig::HeldType< class ::clang::Type > >();
    }

}