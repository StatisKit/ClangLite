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
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_d64061c9775551dab1e069b3153e9a0b)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_eb07946661265dd5b87b22b62696bbae)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    bool  (*method_pointer_1758be92f8ae5499bef86514448ab024)(class ::clang::Decl  const *) = ::clang::NonTypeTemplateParmDecl::classof;
    bool  (*method_pointer_d1547aa324685061996460696245f0be)(enum ::clang::Decl::Kind ) = ::clang::NonTypeTemplateParmDecl::classofKind;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_f2f08eef876a53668fecfab5c1cc5f7a)() const = &::clang::NonTypeTemplateParmDecl::defaultArgumentWasInherited;
    class ::clang::SourceLocation  (::clang::NonTypeTemplateParmDecl::*method_pointer_5303d97027d356649feb185759d1866f)() const = &::clang::NonTypeTemplateParmDecl::getDefaultArgumentLoc;
    class ::clang::QualType  (::clang::NonTypeTemplateParmDecl::*method_pointer_9aec21f439e65d7c98b53d429989954c)(unsigned int ) const = &::clang::NonTypeTemplateParmDecl::getExpansionType;
    unsigned int  (::clang::NonTypeTemplateParmDecl::*method_pointer_cd21e12097f8594d90a2ea28c66ff4f4)() const = &::clang::NonTypeTemplateParmDecl::getNumExpansionTypes;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_61127fa68fba56bc872249656ede9671)() const = &::clang::NonTypeTemplateParmDecl::hasDefaultArgument;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_d30c9bfdeae251eaa7533fe7e86a9cb2)() const = &::clang::NonTypeTemplateParmDecl::isExpandedParameterPack;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_1f96c77663665d6e855c4dd5f4b0143f)() const = &::clang::NonTypeTemplateParmDecl::isPackExpansion;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_556d6a603c565f849ebafe227f8fff3c)() const = &::clang::NonTypeTemplateParmDecl::isParameterPack;
    void  (::clang::NonTypeTemplateParmDecl::*method_pointer_020586356157567cb1b4d4d7b539a715)() = &::clang::NonTypeTemplateParmDecl::removeDefaultArgument;
    boost::python::class_< class ::clang::NonTypeTemplateParmDecl, autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_b1fd1e019724544297cacfa9f9dcfbac("NonTypeTemplateParmDecl", "", boost::python::no_init);
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_d64061c9775551dab1e069b3153e9a0b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_eb07946661265dd5b87b22b62696bbae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof", method_pointer_1758be92f8ae5499bef86514448ab024, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof_kind", method_pointer_d1547aa324685061996460696245f0be, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("default_argument_was_inherited", method_pointer_f2f08eef876a53668fecfab5c1cc5f7a, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_default_argument_loc", method_pointer_5303d97027d356649feb185759d1866f, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_expansion_type", method_pointer_9aec21f439e65d7c98b53d429989954c, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_num_expansion_types", method_pointer_cd21e12097f8594d90a2ea28c66ff4f4, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("has_default_argument", method_pointer_61127fa68fba56bc872249656ede9671, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_expanded_parameter_pack", method_pointer_d30c9bfdeae251eaa7533fe7e86a9cb2, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_pack_expansion", method_pointer_1f96c77663665d6e855c4dd5f4b0143f, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_parameter_pack", method_pointer_556d6a603c565f849ebafe227f8fff3c, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("remove_default_argument", method_pointer_020586356157567cb1b4d4d7b539a715, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof_kind");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("create_deserialized");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}