#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_aa0102629ad95421ae8dc7b78f7a31e4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_eded2cbfec8852b78df94c100087a50c)(class ::clang::Type  const *) = ::clang::TemplateTypeParmType::classof;
    class ::clang::QualType  (::clang::TemplateTypeParmType::*method_pointer_259ccb1eccac5ea9a4d8a6e23c308992)() const = &::clang::TemplateTypeParmType::desugar;
    class ::clang::TemplateTypeParmDecl  * (::clang::TemplateTypeParmType::*method_pointer_cf8813b3f93e56b288362eeacb9c3fe9)() const = &::clang::TemplateTypeParmType::getDecl;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_defcf01342645c9491553eb3dac353e5)() const = &::clang::TemplateTypeParmType::getDepth;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_ef9dd0e1d79d51f29461256a7dd44e67)() const = &::clang::TemplateTypeParmType::getIndex;
    bool  (::clang::TemplateTypeParmType::*method_pointer_5fae2bbd790c525dae051c2845fa19f7)() const = &::clang::TemplateTypeParmType::isParameterPack;
    bool  (::clang::TemplateTypeParmType::*method_pointer_6697f96b5b8b5d0281208a93ea86f170)() const = &::clang::TemplateTypeParmType::isSugared;
    boost::python::class_< class ::clang::TemplateTypeParmType, autowig::HeldType< class ::clang::TemplateTypeParmType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_aa0102629ad95421ae8dc7b78f7a31e4("TemplateTypeParmType", "", boost::python::no_init);
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("classof", method_pointer_eded2cbfec8852b78df94c100087a50c, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("desugar", method_pointer_259ccb1eccac5ea9a4d8a6e23c308992, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_decl", method_pointer_cf8813b3f93e56b288362eeacb9c3fe9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_depth", method_pointer_defcf01342645c9491553eb3dac353e5, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_index", method_pointer_ef9dd0e1d79d51f29461256a7dd44e67, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_parameter_pack", method_pointer_5fae2bbd790c525dae051c2845fa19f7, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_sugared", method_pointer_6697f96b5b8b5d0281208a93ea86f170, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmType >, autowig::HeldType< class ::clang::Type > >();
    }

}