#include "_clanglite.h"


namespace autowig
{
}


void wrapper_69ef5751cb19567085dced299c047c9f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXConstructorDecl  * (*method_pointer_c2e76b70947e5edd9a7bd8034ae0e44c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_b1ab74c81c0359b785b7ad0bcbf93faa)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_c2a3ee1ef71150a985c7f7a6d3909f60)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_fb20ce46cc6350e8acfdb2be6ad6a06c)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_f1dccdace4975edd943e9621f547bd92)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_58ce4a2f833c596784f38c248eed07c6)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_bcd403f6d3d6583e8e508826c2970b7a)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_626e75a166de5d168a8239e2ccb0364d)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_3b265044564e5567a05a0ce1d5301f2f)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_63c43e1f13bd5f12857882be6410e009)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_ebc388f1a52f5cd5b0107bc9eee84f55)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_094b476c001d579bb966118250fb5766)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_163a0bdb9dfc538d87f2844d47acccbb)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4b543dfb49dd5b3d9213934e00d0f4dc)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_d6bf42cd2be051089cbd23357c90e158)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e02d88023ab95075880f413d6bd8e1fd)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_0faea1d8876a52019ec733897aa5a2ba)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_2fdfc2e1b24e544fa09611154392d807)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_25b01390545654d5a6040cec7056e6a9)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f48d971199545d8b8027a3b57ed88a9f)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_3588b402c6a4505fb90984904d9014ea)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_db3839197f875889b1b2e346ba2ae5b5)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_c2e76b70947e5edd9a7bd8034ae0e44c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_b1ab74c81c0359b785b7ad0bcbf93faa, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_c2a3ee1ef71150a985c7f7a6d3909f60, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_fb20ce46cc6350e8acfdb2be6ad6a06c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_f1dccdace4975edd943e9621f547bd92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_58ce4a2f833c596784f38c248eed07c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_bcd403f6d3d6583e8e508826c2970b7a, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_626e75a166de5d168a8239e2ccb0364d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_3b265044564e5567a05a0ce1d5301f2f, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_63c43e1f13bd5f12857882be6410e009, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_ebc388f1a52f5cd5b0107bc9eee84f55, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_094b476c001d579bb966118250fb5766, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_163a0bdb9dfc538d87f2844d47acccbb, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_4b543dfb49dd5b3d9213934e00d0f4dc, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_d6bf42cd2be051089cbd23357c90e158, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_e02d88023ab95075880f413d6bd8e1fd, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_0faea1d8876a52019ec733897aa5a2ba, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_2fdfc2e1b24e544fa09611154392d807, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_25b01390545654d5a6040cec7056e6a9, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_f48d971199545d8b8027a3b57ed88a9f, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_3588b402c6a4505fb90984904d9014ea, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_db3839197f875889b1b2e346ba2ae5b5, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}