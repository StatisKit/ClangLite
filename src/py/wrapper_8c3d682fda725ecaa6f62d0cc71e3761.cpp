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
    bool  (*method_pointer_8ea95a27255f59a38d4794b5c7dcc862)(class ::clang::Type  const *) = ::clang::SubstTemplateTypeParmPackType::classof;
    class ::clang::QualType  (::clang::SubstTemplateTypeParmPackType::*method_pointer_bebb712ecd8350b8bc0955cf8b769a55)() const = &::clang::SubstTemplateTypeParmPackType::desugar;
    class ::clang::TemplateArgument  (::clang::SubstTemplateTypeParmPackType::*method_pointer_8111be3a20ee549e8030262f1d3085b1)() const = &::clang::SubstTemplateTypeParmPackType::getArgumentPack;
    class ::clang::TemplateTypeParmType  const * (::clang::SubstTemplateTypeParmPackType::*method_pointer_5d952e4787c954b1b6000d45599f0a22)() const = &::clang::SubstTemplateTypeParmPackType::getReplacedParameter;
    bool  (::clang::SubstTemplateTypeParmPackType::*method_pointer_7020210a1a815c30b303ff5e22fa5f2d)() const = &::clang::SubstTemplateTypeParmPackType::isSugared;
    boost::python::class_< class ::clang::SubstTemplateTypeParmPackType, autowig::HeldType< class ::clang::SubstTemplateTypeParmPackType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_8c3d682fda725ecaa6f62d0cc71e3761("SubstTemplateTypeParmPackType", "", boost::python::no_init);
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("classof", method_pointer_8ea95a27255f59a38d4794b5c7dcc862, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("desugar", method_pointer_bebb712ecd8350b8bc0955cf8b769a55, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("get_argument_pack", method_pointer_8111be3a20ee549e8030262f1d3085b1, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("get_replaced_parameter", method_pointer_5d952e4787c954b1b6000d45599f0a22, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("is_sugared", method_pointer_7020210a1a815c30b303ff5e22fa5f2d, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::SubstTemplateTypeParmPackType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::SubstTemplateTypeParmPackType >, autowig::HeldType< class ::clang::Type > >();
    }

}