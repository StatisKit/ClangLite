#include "_clanglite.h"


namespace autowig
{
}


void wrapper_e1bf2afb60925357a415152f90671c83()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_cdbfbaecdeb457aabbed25ab8a416c38)(class ::clang::Type  const *) = ::clang::SubstTemplateTypeParmType::classof;
    class ::clang::QualType  (::clang::SubstTemplateTypeParmType::*method_pointer_9d34f01448ab5468b51e5d6e6d0973ea)() const = &::clang::SubstTemplateTypeParmType::desugar;
    class ::clang::TemplateTypeParmType  const * (::clang::SubstTemplateTypeParmType::*method_pointer_449972440ef852bebd1b9fb1d6aebe63)() const = &::clang::SubstTemplateTypeParmType::getReplacedParameter;
    class ::clang::QualType  (::clang::SubstTemplateTypeParmType::*method_pointer_1340ee91b89c50e29c440545b0dc2624)() const = &::clang::SubstTemplateTypeParmType::getReplacementType;
    bool  (::clang::SubstTemplateTypeParmType::*method_pointer_5d8cec15bbe55bfbae0cdf6c61f347a8)() const = &::clang::SubstTemplateTypeParmType::isSugared;
    boost::python::class_< class ::clang::SubstTemplateTypeParmType, autowig::HeldType< class ::clang::SubstTemplateTypeParmType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_e1bf2afb60925357a415152f90671c83("SubstTemplateTypeParmType", "", boost::python::no_init);
    class_e1bf2afb60925357a415152f90671c83.def("classof", method_pointer_cdbfbaecdeb457aabbed25ab8a416c38, "");
    class_e1bf2afb60925357a415152f90671c83.def("desugar", method_pointer_9d34f01448ab5468b51e5d6e6d0973ea, "");
    class_e1bf2afb60925357a415152f90671c83.def("get_replaced_parameter", method_pointer_449972440ef852bebd1b9fb1d6aebe63, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e1bf2afb60925357a415152f90671c83.def("get_replacement_type", method_pointer_1340ee91b89c50e29c440545b0dc2624, "");
    class_e1bf2afb60925357a415152f90671c83.def("is_sugared", method_pointer_5d8cec15bbe55bfbae0cdf6c61f347a8, "");
    class_e1bf2afb60925357a415152f90671c83.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::SubstTemplateTypeParmType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::SubstTemplateTypeParmType >, autowig::HeldType< class ::clang::Type > >();
    }

}