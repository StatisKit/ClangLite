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
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_87f7ed9450fd54d1ae1d5a47ced8c973)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_ef14f4f06cc6549bbc6fe6a82d24a446)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    bool  (*method_pointer_eae577af2f035e199ca0f3a55e7fb907)(class ::clang::Decl  const *) = ::clang::NonTypeTemplateParmDecl::classof;
    bool  (*method_pointer_1b7c1919fa6358ffbe4e63762ebbee5d)(enum ::clang::Decl::Kind ) = ::clang::NonTypeTemplateParmDecl::classofKind;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_2c0eb1e6807c5c8282a5afe8d7ae3592)() const = &::clang::NonTypeTemplateParmDecl::defaultArgumentWasInherited;
    class ::clang::SourceLocation  (::clang::NonTypeTemplateParmDecl::*method_pointer_91ddc30ea8db52ea8396ee929f78c3a9)() const = &::clang::NonTypeTemplateParmDecl::getDefaultArgumentLoc;
    class ::clang::QualType  (::clang::NonTypeTemplateParmDecl::*method_pointer_89115fbd78eb5e02ba64e690146799d9)(unsigned int ) const = &::clang::NonTypeTemplateParmDecl::getExpansionType;
    unsigned int  (::clang::NonTypeTemplateParmDecl::*method_pointer_8637343e94325953b40773e8ef426c61)() const = &::clang::NonTypeTemplateParmDecl::getNumExpansionTypes;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_cbdea52e9d5158aab69a5c17f32bd59c)() const = &::clang::NonTypeTemplateParmDecl::hasDefaultArgument;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_62fcdd593af653b78ce5ce719f7bab66)() const = &::clang::NonTypeTemplateParmDecl::isExpandedParameterPack;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_4a43e47be41a53008628586d72d28196)() const = &::clang::NonTypeTemplateParmDecl::isPackExpansion;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_44d676310d74583390f18d5652689e14)() const = &::clang::NonTypeTemplateParmDecl::isParameterPack;
    void  (::clang::NonTypeTemplateParmDecl::*method_pointer_19294220a9d650c5b40852db3ba83693)() = &::clang::NonTypeTemplateParmDecl::removeDefaultArgument;
    boost::python::class_< class ::clang::NonTypeTemplateParmDecl, autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_b1fd1e019724544297cacfa9f9dcfbac("NonTypeTemplateParmDecl", "", boost::python::no_init);
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_87f7ed9450fd54d1ae1d5a47ced8c973, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_ef14f4f06cc6549bbc6fe6a82d24a446, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof", method_pointer_eae577af2f035e199ca0f3a55e7fb907, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof_kind", method_pointer_1b7c1919fa6358ffbe4e63762ebbee5d, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("default_argument_was_inherited", method_pointer_2c0eb1e6807c5c8282a5afe8d7ae3592, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_default_argument_loc", method_pointer_91ddc30ea8db52ea8396ee929f78c3a9, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_expansion_type", method_pointer_89115fbd78eb5e02ba64e690146799d9, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_num_expansion_types", method_pointer_8637343e94325953b40773e8ef426c61, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("has_default_argument", method_pointer_cbdea52e9d5158aab69a5c17f32bd59c, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_expanded_parameter_pack", method_pointer_62fcdd593af653b78ce5ce719f7bab66, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_pack_expansion", method_pointer_4a43e47be41a53008628586d72d28196, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_parameter_pack", method_pointer_44d676310d74583390f18d5652689e14, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("remove_default_argument", method_pointer_19294220a9d650c5b40852db3ba83693, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof_kind");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("create_deserialized");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}