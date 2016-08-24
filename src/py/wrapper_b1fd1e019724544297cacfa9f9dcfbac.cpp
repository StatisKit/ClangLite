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
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_9b85fba8aa6b5297b0684722220b146b)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_87f0b6a374895a84b879372ff7c94d40)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    bool  (*method_pointer_611de385d00159078f0ea214acb0a633)(class ::clang::Decl  const *) = ::clang::NonTypeTemplateParmDecl::classof;
    bool  (*method_pointer_101b3939ed1e58ffb6716733ff919791)(enum ::clang::Decl::Kind ) = ::clang::NonTypeTemplateParmDecl::classofKind;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_8dd86d82c66450e6a3b5bc528ae7f34c)() const = &::clang::NonTypeTemplateParmDecl::defaultArgumentWasInherited;
    class ::clang::SourceLocation  (::clang::NonTypeTemplateParmDecl::*method_pointer_3a845f1a9f8c568aaf04e661708f9a67)() const = &::clang::NonTypeTemplateParmDecl::getDefaultArgumentLoc;
    class ::clang::QualType  (::clang::NonTypeTemplateParmDecl::*method_pointer_3a72b33e444a52b3b8bde83c5bbd51a1)(unsigned int ) const = &::clang::NonTypeTemplateParmDecl::getExpansionType;
    unsigned int  (::clang::NonTypeTemplateParmDecl::*method_pointer_b1630f24df28564281d873c639f595b1)() const = &::clang::NonTypeTemplateParmDecl::getNumExpansionTypes;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_1f61f68190495ea6b99ed6a51645db37)() const = &::clang::NonTypeTemplateParmDecl::hasDefaultArgument;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_f6e2395319f158b2898e253986d217ad)() const = &::clang::NonTypeTemplateParmDecl::isExpandedParameterPack;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_9764d5d25d735fcb96db6d943acd03cf)() const = &::clang::NonTypeTemplateParmDecl::isPackExpansion;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_1ea0903aa4ac5206a63fa31c3de1d95f)() const = &::clang::NonTypeTemplateParmDecl::isParameterPack;
    void  (::clang::NonTypeTemplateParmDecl::*method_pointer_4e210717c9c35e6ab9a457587335afe0)() = &::clang::NonTypeTemplateParmDecl::removeDefaultArgument;
    boost::python::class_< class ::clang::NonTypeTemplateParmDecl, autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_b1fd1e019724544297cacfa9f9dcfbac("NonTypeTemplateParmDecl", "", boost::python::no_init);
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_9b85fba8aa6b5297b0684722220b146b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_87f0b6a374895a84b879372ff7c94d40, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof", method_pointer_611de385d00159078f0ea214acb0a633, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof_kind", method_pointer_101b3939ed1e58ffb6716733ff919791, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("default_argument_was_inherited", method_pointer_8dd86d82c66450e6a3b5bc528ae7f34c, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_default_argument_loc", method_pointer_3a845f1a9f8c568aaf04e661708f9a67, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_expansion_type", method_pointer_3a72b33e444a52b3b8bde83c5bbd51a1, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_num_expansion_types", method_pointer_b1630f24df28564281d873c639f595b1, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("has_default_argument", method_pointer_1f61f68190495ea6b99ed6a51645db37, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_expanded_parameter_pack", method_pointer_f6e2395319f158b2898e253986d217ad, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_pack_expansion", method_pointer_9764d5d25d735fcb96db6d943acd03cf, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_parameter_pack", method_pointer_1ea0903aa4ac5206a63fa31c3de1d95f, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("remove_default_argument", method_pointer_4e210717c9c35e6ab9a457587335afe0, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof_kind");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("create_deserialized");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}