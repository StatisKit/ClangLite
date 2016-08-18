#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_69ef5751cb19567085dced299c047c9f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXConstructorDecl  * (*method_pointer_e243b58035175731842a7e80c6a43e3e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_24316189722057dab847029880015b3f)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_b51c6950799254d3870d984156617542)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_56404b39b43156b38beff2fe83d3f4b6)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_59cd62ce08bb5c029130818d476bb65c)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_139670989e7d56faa6a6dd1899f348b4)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_badf4fc64e6a50ba9cfe8a95f77ffeea)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_6f7dc36cd587526ea64324c104b35140)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_ee74e07faee657f08d0d64e99513b27a)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b8786663e96c5447b141ee326eed7266)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_ab16ab76502150ab8f5d48d52c7a4b09)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_6899f650ad1956c08ad1038ba2edde89)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_6150806a9f1551669e0dfd7831428683)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_7543aafb6441557db5da8560ef16f90a)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_a131bcb331db58d291a5c5aca14e3e47)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_eee855f41dd65939b4d8e98b4658dc8e)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_8b23a07a281d5b73a1b92c7a3432505d)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_6f8f555871d65411aca8fe2a038354cf)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_51de8f34442c58a99cc4d01c28e8036e)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b4d5e76a7f9652abaedbc63e2348f3cc)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_780454b6be525028b2a0d135b8066c56)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_150db9d5e2e452cf9db4b44292204688)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_e243b58035175731842a7e80c6a43e3e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_24316189722057dab847029880015b3f, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_b51c6950799254d3870d984156617542, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_56404b39b43156b38beff2fe83d3f4b6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_59cd62ce08bb5c029130818d476bb65c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_139670989e7d56faa6a6dd1899f348b4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_badf4fc64e6a50ba9cfe8a95f77ffeea, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_6f7dc36cd587526ea64324c104b35140, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_ee74e07faee657f08d0d64e99513b27a, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_b8786663e96c5447b141ee326eed7266, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_ab16ab76502150ab8f5d48d52c7a4b09, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_6899f650ad1956c08ad1038ba2edde89, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_6150806a9f1551669e0dfd7831428683, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_7543aafb6441557db5da8560ef16f90a, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_a131bcb331db58d291a5c5aca14e3e47, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_eee855f41dd65939b4d8e98b4658dc8e, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_8b23a07a281d5b73a1b92c7a3432505d, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_6f8f555871d65411aca8fe2a038354cf, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_51de8f34442c58a99cc4d01c28e8036e, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_b4d5e76a7f9652abaedbc63e2348f3cc, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_780454b6be525028b2a0d135b8066c56, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_150db9d5e2e452cf9db4b44292204688, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}