#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_b1fd1e019724544297cacfa9f9dcfbac()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_dd5da2e8acd45213b5cac59cec1cc637)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_0ccdef5a05b95c8f8633b1a8c5860d51)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    bool  (*method_pointer_d25ecdf49fa95b26aea38d7cf81715ef)(class ::clang::Decl  const *) = ::clang::NonTypeTemplateParmDecl::classof;
    bool  (*method_pointer_7f8a8f04a5a55fc7a8f1f41af1e9cdf9)(enum ::clang::Decl::Kind ) = ::clang::NonTypeTemplateParmDecl::classofKind;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_dcb037cf905254038c621002eba88048)() const = &::clang::NonTypeTemplateParmDecl::defaultArgumentWasInherited;
    class ::clang::SourceLocation  (::clang::NonTypeTemplateParmDecl::*method_pointer_025e968c536e5a0eb29869142d36b5cd)() const = &::clang::NonTypeTemplateParmDecl::getDefaultArgumentLoc;
    class ::clang::QualType  (::clang::NonTypeTemplateParmDecl::*method_pointer_b4deef105ac053da99a7ffe2769b9405)(unsigned int ) const = &::clang::NonTypeTemplateParmDecl::getExpansionType;
    unsigned int  (::clang::NonTypeTemplateParmDecl::*method_pointer_443b0abdac965561a71867945877b5ed)() const = &::clang::NonTypeTemplateParmDecl::getNumExpansionTypes;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_8e28e25bd84b5ab4adecdddb78520708)() const = &::clang::NonTypeTemplateParmDecl::hasDefaultArgument;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_0d8deb80d9775c6288e6a8f8a41c4a78)() const = &::clang::NonTypeTemplateParmDecl::isExpandedParameterPack;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_9a093c28900d5a6f93a15f0c281a4c7c)() const = &::clang::NonTypeTemplateParmDecl::isPackExpansion;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_a9d80e17321855218b6649f8ea0774fc)() const = &::clang::NonTypeTemplateParmDecl::isParameterPack;
    void  (::clang::NonTypeTemplateParmDecl::*method_pointer_00464eb7cfa25d1fb0f76bb0f47a32f4)() = &::clang::NonTypeTemplateParmDecl::removeDefaultArgument;
    boost::python::class_< class ::clang::NonTypeTemplateParmDecl, autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_b1fd1e019724544297cacfa9f9dcfbac("NonTypeTemplateParmDecl", "", boost::python::no_init);
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_dd5da2e8acd45213b5cac59cec1cc637, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_0ccdef5a05b95c8f8633b1a8c5860d51, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof", method_pointer_d25ecdf49fa95b26aea38d7cf81715ef, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof_kind", method_pointer_7f8a8f04a5a55fc7a8f1f41af1e9cdf9, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("default_argument_was_inherited", method_pointer_dcb037cf905254038c621002eba88048, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_default_argument_loc", method_pointer_025e968c536e5a0eb29869142d36b5cd, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_expansion_type", method_pointer_b4deef105ac053da99a7ffe2769b9405, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_num_expansion_types", method_pointer_443b0abdac965561a71867945877b5ed, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("has_default_argument", method_pointer_8e28e25bd84b5ab4adecdddb78520708, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_expanded_parameter_pack", method_pointer_0d8deb80d9775c6288e6a8f8a41c4a78, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_pack_expansion", method_pointer_9a093c28900d5a6f93a15f0c281a4c7c, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_parameter_pack", method_pointer_a9d80e17321855218b6649f8ea0774fc, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("remove_default_argument", method_pointer_00464eb7cfa25d1fb0f76bb0f47a32f4, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof_kind");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("create_deserialized");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}