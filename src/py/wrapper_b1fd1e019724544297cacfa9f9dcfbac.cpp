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
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_864f115ac4a2518f8f436125ea81ffec)() const = &::clang::NonTypeTemplateParmDecl::defaultArgumentWasInherited;
    void  (::clang::NonTypeTemplateParmDecl::*method_pointer_57b24c86f24e5e5caa28c5dccb28aebd)() = &::clang::NonTypeTemplateParmDecl::removeDefaultArgument;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_c93ede81a7bc5832a2f3b2c1b388e4ef)() const = &::clang::NonTypeTemplateParmDecl::hasDefaultArgument;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_40aa7b150fff5acf947b0e76ef14bf00)() const = &::clang::NonTypeTemplateParmDecl::isParameterPack;
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_26df2b7abb45519c9df160ff2a0ef059)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    bool  (*method_pointer_61af517159335be0b864b368046e25f0)(enum ::clang::Decl::Kind ) = ::clang::NonTypeTemplateParmDecl::classofKind;
    unsigned int  (::clang::NonTypeTemplateParmDecl::*method_pointer_14ea4cc6ca3a589782f21e6fa2be471a)() const = &::clang::NonTypeTemplateParmDecl::getNumExpansionTypes;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_f10b79ac867f5ff2b042271f7285e663)() const = &::clang::NonTypeTemplateParmDecl::isExpandedParameterPack;
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_6c673eab668051649850e3e168a03eb1)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    bool  (*method_pointer_b27f9cb2e5775e479b45ec7debb5a374)(class ::clang::Decl  const *) = ::clang::NonTypeTemplateParmDecl::classof;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_3e760fa346765708bfc1a5463decc798)() const = &::clang::NonTypeTemplateParmDecl::isPackExpansion;
    boost::python::class_< class ::clang::NonTypeTemplateParmDecl, autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_b1fd1e019724544297cacfa9f9dcfbac("NonTypeTemplateParmDecl", "", boost::python::no_init);
    class_b1fd1e019724544297cacfa9f9dcfbac.def("default_argument_was_inherited", method_pointer_864f115ac4a2518f8f436125ea81ffec, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("remove_default_argument", method_pointer_57b24c86f24e5e5caa28c5dccb28aebd, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("has_default_argument", method_pointer_c93ede81a7bc5832a2f3b2c1b388e4ef, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_parameter_pack", method_pointer_40aa7b150fff5acf947b0e76ef14bf00, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_26df2b7abb45519c9df160ff2a0ef059, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof_kind", method_pointer_61af517159335be0b864b368046e25f0, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_num_expansion_types", method_pointer_14ea4cc6ca3a589782f21e6fa2be471a, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_expanded_parameter_pack", method_pointer_f10b79ac867f5ff2b042271f7285e663, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_6c673eab668051649850e3e168a03eb1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof", method_pointer_b27f9cb2e5775e479b45ec7debb5a374, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_pack_expansion", method_pointer_3e760fa346765708bfc1a5463decc798, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof_kind");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("create_deserialized");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}