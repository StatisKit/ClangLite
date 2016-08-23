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
    bool  (*method_pointer_b82ee42cf54952c9abf41dcccf8ba369)(class ::clang::Type  const *) = ::clang::TemplateTypeParmType::classof;
    class ::clang::QualType  (::clang::TemplateTypeParmType::*method_pointer_495f7882d40256eab820f33232c9965e)() const = &::clang::TemplateTypeParmType::desugar;
    class ::clang::TemplateTypeParmDecl  * (::clang::TemplateTypeParmType::*method_pointer_1be184beafdd5805a4ea680d67802352)() const = &::clang::TemplateTypeParmType::getDecl;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_476d1cf898985585a8e0666c4096b90e)() const = &::clang::TemplateTypeParmType::getDepth;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_8e55c14fc7115b9a990ebb33c7c6e771)() const = &::clang::TemplateTypeParmType::getIndex;
    bool  (::clang::TemplateTypeParmType::*method_pointer_b98a160cf0a95a18836e11c74f1c468b)() const = &::clang::TemplateTypeParmType::isParameterPack;
    bool  (::clang::TemplateTypeParmType::*method_pointer_464d66cdca4a5e1eb7a889b13263ce41)() const = &::clang::TemplateTypeParmType::isSugared;
    boost::python::class_< class ::clang::TemplateTypeParmType, autowig::HeldType< class ::clang::TemplateTypeParmType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_aa0102629ad95421ae8dc7b78f7a31e4("TemplateTypeParmType", "", boost::python::no_init);
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("classof", method_pointer_b82ee42cf54952c9abf41dcccf8ba369, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("desugar", method_pointer_495f7882d40256eab820f33232c9965e, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_decl", method_pointer_1be184beafdd5805a4ea680d67802352, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_depth", method_pointer_476d1cf898985585a8e0666c4096b90e, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_index", method_pointer_8e55c14fc7115b9a990ebb33c7c6e771, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_parameter_pack", method_pointer_b98a160cf0a95a18836e11c74f1c468b, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_sugared", method_pointer_464d66cdca4a5e1eb7a889b13263ce41, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmType >, autowig::HeldType< class ::clang::Type > >();
    }

}