#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_8c3d682fda725ecaa6f62d0cc71e3761()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_92684830a0b956abb519a476e4a8510d)(class ::clang::Type  const *) = ::clang::SubstTemplateTypeParmPackType::classof;
    class ::clang::QualType  (::clang::SubstTemplateTypeParmPackType::*method_pointer_9d3a6994d74754b09963227854fd98ce)() const = &::clang::SubstTemplateTypeParmPackType::desugar;
    class ::clang::TemplateArgument  (::clang::SubstTemplateTypeParmPackType::*method_pointer_47a09aea1361551ba69b823da2cb6289)() const = &::clang::SubstTemplateTypeParmPackType::getArgumentPack;
    class ::clang::TemplateTypeParmType  const * (::clang::SubstTemplateTypeParmPackType::*method_pointer_8c58a6a3ed395671b063f746521522ad)() const = &::clang::SubstTemplateTypeParmPackType::getReplacedParameter;
    bool  (::clang::SubstTemplateTypeParmPackType::*method_pointer_959297d1876657aaa7180f04f4cf222a)() const = &::clang::SubstTemplateTypeParmPackType::isSugared;
    boost::python::class_< class ::clang::SubstTemplateTypeParmPackType, autowig::HeldType< class ::clang::SubstTemplateTypeParmPackType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_8c3d682fda725ecaa6f62d0cc71e3761("SubstTemplateTypeParmPackType", "", boost::python::no_init);
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("classof", method_pointer_92684830a0b956abb519a476e4a8510d, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("desugar", method_pointer_9d3a6994d74754b09963227854fd98ce, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("get_argument_pack", method_pointer_47a09aea1361551ba69b823da2cb6289, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("get_replaced_parameter", method_pointer_8c58a6a3ed395671b063f746521522ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("is_sugared", method_pointer_959297d1876657aaa7180f04f4cf222a, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::SubstTemplateTypeParmPackType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::SubstTemplateTypeParmPackType >, autowig::HeldType< class ::clang::Type > >();
    }

}