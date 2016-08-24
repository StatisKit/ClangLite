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
    bool  (*method_pointer_4103dead92ca5586bbe55357464bda87)(class ::clang::Type  const *) = ::clang::SubstTemplateTypeParmPackType::classof;
    class ::clang::QualType  (::clang::SubstTemplateTypeParmPackType::*method_pointer_1a063e444cca5d66acfefb60cff57c33)() const = &::clang::SubstTemplateTypeParmPackType::desugar;
    class ::clang::TemplateArgument  (::clang::SubstTemplateTypeParmPackType::*method_pointer_03580a9a2d4e5a83a213b304db36dfd4)() const = &::clang::SubstTemplateTypeParmPackType::getArgumentPack;
    class ::clang::TemplateTypeParmType  const * (::clang::SubstTemplateTypeParmPackType::*method_pointer_3dc1a4dac04750eb8ce3e1d90e7f709e)() const = &::clang::SubstTemplateTypeParmPackType::getReplacedParameter;
    bool  (::clang::SubstTemplateTypeParmPackType::*method_pointer_8012dadff2ef53b0a997ded7c35160b3)() const = &::clang::SubstTemplateTypeParmPackType::isSugared;
    boost::python::class_< class ::clang::SubstTemplateTypeParmPackType, autowig::HeldType< class ::clang::SubstTemplateTypeParmPackType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_8c3d682fda725ecaa6f62d0cc71e3761("SubstTemplateTypeParmPackType", "", boost::python::no_init);
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("classof", method_pointer_4103dead92ca5586bbe55357464bda87, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("desugar", method_pointer_1a063e444cca5d66acfefb60cff57c33, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("get_argument_pack", method_pointer_03580a9a2d4e5a83a213b304db36dfd4, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("get_replaced_parameter", method_pointer_3dc1a4dac04750eb8ce3e1d90e7f709e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("is_sugared", method_pointer_8012dadff2ef53b0a997ded7c35160b3, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::SubstTemplateTypeParmPackType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::SubstTemplateTypeParmPackType >, autowig::HeldType< class ::clang::Type > >();
    }

}