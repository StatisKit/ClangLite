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
    bool  (*method_pointer_cb200bd1cf655dbe84e13bdf367b0c4e)(class ::clang::Type  const *) = ::clang::TemplateTypeParmType::classof;
    class ::clang::QualType  (::clang::TemplateTypeParmType::*method_pointer_3905976a24c6553f9ff51c9858f6670a)() const = &::clang::TemplateTypeParmType::desugar;
    class ::clang::TemplateTypeParmDecl  * (::clang::TemplateTypeParmType::*method_pointer_600400edb9345d9a96c4a093cfc150b0)() const = &::clang::TemplateTypeParmType::getDecl;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_1b684ed4bad757bfb8d3588318a0e45a)() const = &::clang::TemplateTypeParmType::getDepth;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_3374ecc5d69455d696875e74037adb61)() const = &::clang::TemplateTypeParmType::getIndex;
    bool  (::clang::TemplateTypeParmType::*method_pointer_536efa7adb795f93897b0c924541436c)() const = &::clang::TemplateTypeParmType::isParameterPack;
    bool  (::clang::TemplateTypeParmType::*method_pointer_f67f4c9fbef15e3a85f672cc82a22b58)() const = &::clang::TemplateTypeParmType::isSugared;
    boost::python::class_< class ::clang::TemplateTypeParmType, autowig::HeldType< class ::clang::TemplateTypeParmType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_aa0102629ad95421ae8dc7b78f7a31e4("TemplateTypeParmType", "", boost::python::no_init);
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("classof", method_pointer_cb200bd1cf655dbe84e13bdf367b0c4e, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("desugar", method_pointer_3905976a24c6553f9ff51c9858f6670a, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_decl", method_pointer_600400edb9345d9a96c4a093cfc150b0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_depth", method_pointer_1b684ed4bad757bfb8d3588318a0e45a, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_index", method_pointer_3374ecc5d69455d696875e74037adb61, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_parameter_pack", method_pointer_536efa7adb795f93897b0c924541436c, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_sugared", method_pointer_f67f4c9fbef15e3a85f672cc82a22b58, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmType >, autowig::HeldType< class ::clang::Type > >();
    }

}