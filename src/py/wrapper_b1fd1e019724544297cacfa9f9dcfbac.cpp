#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_b1fd1e019724544297cacfa9f9dcfbac()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    unsigned int  (::clang::NonTypeTemplateParmDecl::*method_pointer_19baa91663325abcac54d3d66035d686)() const = &::clang::NonTypeTemplateParmDecl::getNumExpansionTypes;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_764fbbffb44755638560380e403cf1d9)() const = &::clang::NonTypeTemplateParmDecl::isPackExpansion;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_6c217856245e5562ac1530b4629dd8f5)() const = &::clang::NonTypeTemplateParmDecl::isParameterPack;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_5b4a4f074d3d5f68b693417fe3cb8647)() const = &::clang::NonTypeTemplateParmDecl::hasDefaultArgument;
    void  (::clang::NonTypeTemplateParmDecl::*method_pointer_46d05ff2c8c55077b8579e6c7778ae35)() = &::clang::NonTypeTemplateParmDecl::removeDefaultArgument;
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_134c86dc35a5537daf9758797f1c320e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_3cd19d9bdcdb51d39cc4de2edb9f1ac2)() const = &::clang::NonTypeTemplateParmDecl::isExpandedParameterPack;
    bool  (*method_pointer_6c219b3c5c5853529472cfeb719623d1)(class ::clang::Decl  const *) = ::clang::NonTypeTemplateParmDecl::classof;
    bool  (*method_pointer_3282c175dc2a5c40a35e55c81eb87613)(enum ::clang::Decl::Kind ) = ::clang::NonTypeTemplateParmDecl::classofKind;
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_44aa0a68dbe5595dbe786fc4740fdc6b)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_627b08edb1e75ae89f68ed8211233e34)() const = &::clang::NonTypeTemplateParmDecl::defaultArgumentWasInherited;
    boost::python::class_< class ::clang::NonTypeTemplateParmDecl, autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_b1fd1e019724544297cacfa9f9dcfbac("NonTypeTemplateParmDecl", "", boost::python::no_init);
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_num_expansion_types", method_pointer_19baa91663325abcac54d3d66035d686, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_pack_expansion", method_pointer_764fbbffb44755638560380e403cf1d9, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_parameter_pack", method_pointer_6c217856245e5562ac1530b4629dd8f5, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("has_default_argument", method_pointer_5b4a4f074d3d5f68b693417fe3cb8647, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("remove_default_argument", method_pointer_46d05ff2c8c55077b8579e6c7778ae35, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_134c86dc35a5537daf9758797f1c320e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_expanded_parameter_pack", method_pointer_3cd19d9bdcdb51d39cc4de2edb9f1ac2, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof", method_pointer_6c219b3c5c5853529472cfeb719623d1, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof_kind", method_pointer_3282c175dc2a5c40a35e55c81eb87613, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_44aa0a68dbe5595dbe786fc4740fdc6b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("default_argument_was_inherited", method_pointer_627b08edb1e75ae89f68ed8211233e34, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof_kind");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("create_deserialized");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}