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
    bool  (*method_pointer_aac17a8c0cf5545bb23d2ad17dc6ce58)(class ::clang::Type  const *) = ::clang::TemplateTypeParmType::classof;
    class ::clang::QualType  (::clang::TemplateTypeParmType::*method_pointer_090bc24691565740874de6bfa4588ace)() const = &::clang::TemplateTypeParmType::desugar;
    class ::clang::TemplateTypeParmDecl  * (::clang::TemplateTypeParmType::*method_pointer_32632aae5ab15d148824fb1103903d55)() const = &::clang::TemplateTypeParmType::getDecl;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_6cd6a34dfc22526d96e0bb2a26d3bf7e)() const = &::clang::TemplateTypeParmType::getDepth;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_e5ef3634f6cc5f4784adbf28e232175d)() const = &::clang::TemplateTypeParmType::getIndex;
    bool  (::clang::TemplateTypeParmType::*method_pointer_3ddc97c7f0635c0793e99f66e713fdb6)() const = &::clang::TemplateTypeParmType::isParameterPack;
    bool  (::clang::TemplateTypeParmType::*method_pointer_c8b43c543f405f1f9dbd57cfdf526291)() const = &::clang::TemplateTypeParmType::isSugared;
    boost::python::class_< class ::clang::TemplateTypeParmType, autowig::HeldType< class ::clang::TemplateTypeParmType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_aa0102629ad95421ae8dc7b78f7a31e4("TemplateTypeParmType", "", boost::python::no_init);
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("classof", method_pointer_aac17a8c0cf5545bb23d2ad17dc6ce58, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("desugar", method_pointer_090bc24691565740874de6bfa4588ace, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_decl", method_pointer_32632aae5ab15d148824fb1103903d55, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_depth", method_pointer_6cd6a34dfc22526d96e0bb2a26d3bf7e, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_index", method_pointer_e5ef3634f6cc5f4784adbf28e232175d, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_parameter_pack", method_pointer_3ddc97c7f0635c0793e99f66e713fdb6, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_sugared", method_pointer_c8b43c543f405f1f9dbd57cfdf526291, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmType >, autowig::HeldType< class ::clang::Type > >();
    }

}