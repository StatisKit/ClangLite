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
    bool  (*method_pointer_16ec3ef6518558d1b20fb78ae8a45ed5)(class ::clang::Type  const *) = ::clang::SubstTemplateTypeParmType::classof;
    class ::clang::TemplateTypeParmType  const * (::clang::SubstTemplateTypeParmType::*method_pointer_1b8a684506f65b84baf021a96cad47d6)() const = &::clang::SubstTemplateTypeParmType::getReplacedParameter;
    bool  (::clang::SubstTemplateTypeParmType::*method_pointer_bdc94ee2f6de569badf4a10a664ba534)() const = &::clang::SubstTemplateTypeParmType::isSugared;
    boost::python::class_< class ::clang::SubstTemplateTypeParmType, autowig::HeldType< class ::clang::SubstTemplateTypeParmType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_e1bf2afb60925357a415152f90671c83("SubstTemplateTypeParmType", "", boost::python::no_init);
    class_e1bf2afb60925357a415152f90671c83.def("classof", method_pointer_16ec3ef6518558d1b20fb78ae8a45ed5, "");
    class_e1bf2afb60925357a415152f90671c83.def("get_replaced_parameter", method_pointer_1b8a684506f65b84baf021a96cad47d6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e1bf2afb60925357a415152f90671c83.def("is_sugared", method_pointer_bdc94ee2f6de569badf4a10a664ba534, "");
    class_e1bf2afb60925357a415152f90671c83.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::SubstTemplateTypeParmType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::SubstTemplateTypeParmType >, autowig::HeldType< class ::clang::Type > >();
    }

}