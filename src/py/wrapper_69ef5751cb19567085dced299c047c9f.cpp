/**********************************************************************************/
/*                                                                                */
/* PyClangLite: Python bindings for Clang                                         */
/*                                                                                */
/* Homepage: http://pyclanglite.readthedocs.io/                                   */
/*                                                                                */
/* Copyright (c) 2016 Pierre Fernique                                             */
/*                                                                                */
/* This software is distributed under the CeCILL-C license. You should have       */
/* received a copy of the legalcode along with this work. If not, see             */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/* File authors: Pierre Fernique <pfernique@gmail.com> (36)                       */
/*                                                                                */
/**********************************************************************************/

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
    class ::clang::CXXConstructorDecl  * (*method_pointer_5ea9b8f3b28c558a8af0a28a9e524add)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_6ff4549517dd5e858b5093f17f334197)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_bd4f24ef1d2a5d2999e1072de659a638)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_a48435ac32425db6a49bab3d0c4c13b6)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_5870b598eabe526d9e1cfba00b59c1b6)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_fcb38a33c2695f9c91276079cd757f5f)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_5df252299ccb547197159c9e52db86d2)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_f68b121b747c5c69b76820045d9e9173)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b084dc1bde565ae1b632f9720c6d909e)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_523ad2cb8db35600800a77829595f2cc)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b0dbad94811750539e28ee219ce620cf)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_dafb353bca3d52879f590d0fd3fe843f)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_1d083af374445d7daef3373a22b3f269)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_3b8c6685cff7514fb4693525ae3c173a)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f9cd3a5bd8655153a51005ee385d3daa)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_048d7ebc202c5f5f9b637bdffbbd9ef0)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_ba31907e44885ce29a0d621915942c79)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_cc381515b16b5bdfaab4b1307b7254e7)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_8b9cafcabe725430953096bfb03f9f09)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_7a7bef7825a559cdb9b7a7e9aeabc835)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_23a4c98d3dd2566b9fbbcb28606b83de)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_027755cc30835271a2e2ec6fbf2beee6)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_5ea9b8f3b28c558a8af0a28a9e524add, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_6ff4549517dd5e858b5093f17f334197, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_bd4f24ef1d2a5d2999e1072de659a638, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_a48435ac32425db6a49bab3d0c4c13b6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_5870b598eabe526d9e1cfba00b59c1b6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_fcb38a33c2695f9c91276079cd757f5f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_5df252299ccb547197159c9e52db86d2, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_f68b121b747c5c69b76820045d9e9173, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_b084dc1bde565ae1b632f9720c6d909e, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_523ad2cb8db35600800a77829595f2cc, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_b0dbad94811750539e28ee219ce620cf, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_dafb353bca3d52879f590d0fd3fe843f, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_1d083af374445d7daef3373a22b3f269, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_3b8c6685cff7514fb4693525ae3c173a, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_f9cd3a5bd8655153a51005ee385d3daa, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_048d7ebc202c5f5f9b637bdffbbd9ef0, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_ba31907e44885ce29a0d621915942c79, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_cc381515b16b5bdfaab4b1307b7254e7, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_8b9cafcabe725430953096bfb03f9f09, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_7a7bef7825a559cdb9b7a7e9aeabc835, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_23a4c98d3dd2566b9fbbcb28606b83de, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_027755cc30835271a2e2ec6fbf2beee6, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}