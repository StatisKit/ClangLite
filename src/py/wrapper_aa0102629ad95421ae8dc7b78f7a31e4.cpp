#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_aa0102629ad95421ae8dc7b78f7a31e4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::TemplateTypeParmType::*method_pointer_e018b74b1df65083899b55e631c42931)() const = &::clang::TemplateTypeParmType::isParameterPack;
    class ::clang::TemplateTypeParmDecl  * (::clang::TemplateTypeParmType::*method_pointer_1cf50df028805767b7766b24004c5864)() const = &::clang::TemplateTypeParmType::getDecl;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_00f3a3683d2a562da164cdd63a3e2e23)() const = &::clang::TemplateTypeParmType::getDepth;
    bool  (::clang::TemplateTypeParmType::*method_pointer_b6ea2a3d31285c2c8c6e8a81be313519)() const = &::clang::TemplateTypeParmType::isSugared;
    bool  (*method_pointer_3b73f7feabb25f139919d0b610f27a1a)(class ::clang::Type  const *) = ::clang::TemplateTypeParmType::classof;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_28b53f274eed59a9864f7bbcc7621958)() const = &::clang::TemplateTypeParmType::getIndex;
    boost::python::class_< class ::clang::TemplateTypeParmType, autowig::HeldType< class ::clang::TemplateTypeParmType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_aa0102629ad95421ae8dc7b78f7a31e4("TemplateTypeParmType", "", boost::python::no_init);
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_parameter_pack", method_pointer_e018b74b1df65083899b55e631c42931, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_decl", method_pointer_1cf50df028805767b7766b24004c5864, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_depth", method_pointer_00f3a3683d2a562da164cdd63a3e2e23, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_sugared", method_pointer_b6ea2a3d31285c2c8c6e8a81be313519, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("classof", method_pointer_3b73f7feabb25f139919d0b610f27a1a, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_index", method_pointer_28b53f274eed59a9864f7bbcc7621958, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmType >, autowig::HeldType< class ::clang::Type > >();
    }

}