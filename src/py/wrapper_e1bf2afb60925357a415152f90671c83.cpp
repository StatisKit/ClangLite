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
    bool  (*method_pointer_cd8ae3e08d435255b5c60c13783911c2)(class ::clang::Type  const *) = ::clang::SubstTemplateTypeParmType::classof;
    class ::clang::QualType  (::clang::SubstTemplateTypeParmType::*method_pointer_b970db1f7a3150e9b7d5dda7944283cb)() const = &::clang::SubstTemplateTypeParmType::desugar;
    class ::clang::TemplateTypeParmType  const * (::clang::SubstTemplateTypeParmType::*method_pointer_e8c4c294c0dd52a8b74c5b769107d015)() const = &::clang::SubstTemplateTypeParmType::getReplacedParameter;
    class ::clang::QualType  (::clang::SubstTemplateTypeParmType::*method_pointer_34b5deb4530b50cc8562a152852c52c2)() const = &::clang::SubstTemplateTypeParmType::getReplacementType;
    bool  (::clang::SubstTemplateTypeParmType::*method_pointer_a4e7349fd9f25a6696a049cb21661187)() const = &::clang::SubstTemplateTypeParmType::isSugared;
    boost::python::class_< class ::clang::SubstTemplateTypeParmType, autowig::HeldType< class ::clang::SubstTemplateTypeParmType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_e1bf2afb60925357a415152f90671c83("SubstTemplateTypeParmType", "", boost::python::no_init);
    class_e1bf2afb60925357a415152f90671c83.def("classof", method_pointer_cd8ae3e08d435255b5c60c13783911c2, "");
    class_e1bf2afb60925357a415152f90671c83.def("desugar", method_pointer_b970db1f7a3150e9b7d5dda7944283cb, "");
    class_e1bf2afb60925357a415152f90671c83.def("get_replaced_parameter", method_pointer_e8c4c294c0dd52a8b74c5b769107d015, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e1bf2afb60925357a415152f90671c83.def("get_replacement_type", method_pointer_34b5deb4530b50cc8562a152852c52c2, "");
    class_e1bf2afb60925357a415152f90671c83.def("is_sugared", method_pointer_a4e7349fd9f25a6696a049cb21661187, "");
    class_e1bf2afb60925357a415152f90671c83.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::SubstTemplateTypeParmType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::SubstTemplateTypeParmType >, autowig::HeldType< class ::clang::Type > >();
    }

}