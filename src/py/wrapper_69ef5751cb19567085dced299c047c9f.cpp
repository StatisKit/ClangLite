#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_69ef5751cb19567085dced299c047c9f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXConstructorDecl  * (*method_pointer_a436bd8af51b543693a1951750e7ed97)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_3f5693631d375d1a992bd11db62c4281)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_8338448a04c75904937db3659c0987c4)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_0cae6c52073e5d5080c0e8ec5e50f886)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_8372bc5c1dfa58ec9d771d485af06a4e)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_b3c03cd55b1e5bd39f8b8be5e9acb83a)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_392f75ca97955bbbbb07c6778e41a925)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_6ad0f07593315f09a68ebd3a56d2e954)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f313c7a54cf65f42ac8f33e8da328b78)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_ef6e095dc730591eb2763b479ac7ce89)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_33c942a7268e5c9580abda1e662ddda6)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_6c3f011045665aecbc75ddf15b4e40e7)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_38227f23d36952489a9dec7b3695b903)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_a8a536e4427752ab9abf9485bfd4e586)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_6d85cf798e8b5d83b8c676cb7384fe7b)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f75c7d23044b5858a5f708b069ed15bc)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_19bdec5bb5855602bea1cc8b94451726)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_3a1ad8fa9c375a198de23cd9446bc633)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_abe98a7b411f563a855bc988f0a70064)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_c837e80edae053e6a62091ef70373494)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_d3ad9f45d8175cf6afd6a84a64eba96d)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_72bbf0fce07b5feeaeb1207287b38160)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_a436bd8af51b543693a1951750e7ed97, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_3f5693631d375d1a992bd11db62c4281, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_8338448a04c75904937db3659c0987c4, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_0cae6c52073e5d5080c0e8ec5e50f886, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_8372bc5c1dfa58ec9d771d485af06a4e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_b3c03cd55b1e5bd39f8b8be5e9acb83a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_392f75ca97955bbbbb07c6778e41a925, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_6ad0f07593315f09a68ebd3a56d2e954, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_f313c7a54cf65f42ac8f33e8da328b78, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_ef6e095dc730591eb2763b479ac7ce89, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_33c942a7268e5c9580abda1e662ddda6, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_6c3f011045665aecbc75ddf15b4e40e7, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_38227f23d36952489a9dec7b3695b903, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_a8a536e4427752ab9abf9485bfd4e586, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_6d85cf798e8b5d83b8c676cb7384fe7b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_f75c7d23044b5858a5f708b069ed15bc, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_19bdec5bb5855602bea1cc8b94451726, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_3a1ad8fa9c375a198de23cd9446bc633, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_abe98a7b411f563a855bc988f0a70064, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_c837e80edae053e6a62091ef70373494, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_d3ad9f45d8175cf6afd6a84a64eba96d, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_72bbf0fce07b5feeaeb1207287b38160, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}