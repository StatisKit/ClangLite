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
    bool  (*method_pointer_d5b1322ab73d5c5fbaa5dfe51df4f909)(enum ::clang::Decl::Kind ) = ::clang::NonTypeTemplateParmDecl::classofKind;
    void  (::clang::NonTypeTemplateParmDecl::*method_pointer_9bb59c3d31d952a9968d61e045d6618d)() = &::clang::NonTypeTemplateParmDecl::removeDefaultArgument;
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_b105ceb820755ceb95ee925ea24ef0e8)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_2ff48c7045625c5391e279777e7e68b5)() const = &::clang::NonTypeTemplateParmDecl::isPackExpansion;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_7ac3f9ecd0a7535dbfc4d51a29d54ef8)() const = &::clang::NonTypeTemplateParmDecl::defaultArgumentWasInherited;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_6aa6dfae49a252edb6522a5af9fddd07)() const = &::clang::NonTypeTemplateParmDecl::hasDefaultArgument;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_f0e42f8f910657e7b1b114fd8118af02)() const = &::clang::NonTypeTemplateParmDecl::isParameterPack;
    bool  (*method_pointer_409a73433f9454aebdc7780aa0dba542)(class ::clang::Decl  const *) = ::clang::NonTypeTemplateParmDecl::classof;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_0a5b248eb4f854a79e733cbcff840f8b)() const = &::clang::NonTypeTemplateParmDecl::isExpandedParameterPack;
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_e23f8cb595c05c149f0b4323f9f55f43)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    unsigned int  (::clang::NonTypeTemplateParmDecl::*method_pointer_88568ffeb94c5cdc8d78b8b2bbbe2f02)() const = &::clang::NonTypeTemplateParmDecl::getNumExpansionTypes;
    boost::python::class_< class ::clang::NonTypeTemplateParmDecl, autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_b1fd1e019724544297cacfa9f9dcfbac("NonTypeTemplateParmDecl", "", boost::python::no_init);
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof_kind", method_pointer_d5b1322ab73d5c5fbaa5dfe51df4f909, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("remove_default_argument", method_pointer_9bb59c3d31d952a9968d61e045d6618d, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_b105ceb820755ceb95ee925ea24ef0e8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_pack_expansion", method_pointer_2ff48c7045625c5391e279777e7e68b5, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("default_argument_was_inherited", method_pointer_7ac3f9ecd0a7535dbfc4d51a29d54ef8, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("has_default_argument", method_pointer_6aa6dfae49a252edb6522a5af9fddd07, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_parameter_pack", method_pointer_f0e42f8f910657e7b1b114fd8118af02, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof", method_pointer_409a73433f9454aebdc7780aa0dba542, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_expanded_parameter_pack", method_pointer_0a5b248eb4f854a79e733cbcff840f8b, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_e23f8cb595c05c149f0b4323f9f55f43, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_num_expansion_types", method_pointer_88568ffeb94c5cdc8d78b8b2bbbe2f02, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof_kind");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("create_deserialized");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}