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
    class ::clang::CXXConstructorDecl  * (*method_pointer_b1c4fce08fcc5fcf9b61d86498b4faf1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_a21f24dab6f55a37aa3cffe9e4fa5aee)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_b761965ecbf75150b9fcc88277c8e6dd)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_20e590b0438756b083e239ee905597db)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_6dd6847035c0558e989e845eca8d3c8b)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_85f2f333b8d75de5b799bc3379405431)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_7e042fc3bf4752bcb031cf42ceecada5)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_837ae41380a956ceb2a808399c55f8ea)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_c850f69bb9ca553a8661d3e54ca835d3)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4a610e675acb5175b9b120f2103d337d)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_d1b61de1c61353a2936ae48256fbc406)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_dfc21583d569547d886d043c6aa4afcb)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_2f163b7f3c815fc7a71a040c07379661)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_db27c219f9d9524f9c281b0417e5b0bf)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_0545516d6d315a59ac5dab0ef50d6519)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_2294c52af54d51d2a2ce0642dffec853)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_391828592ceb5cc3b4c1b4bae25069f3)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_a8de4483ef5b5a3a92f74bbfe66e7057)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_ea4f81111a0d544395c18ccbaaea3209)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_d64a4d0e63f757b3b0cecc3b5450e09e)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_db4631b5dc7e5d7f8031365e4a55d423)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_3a30b20f18b859a0b58d1f3169758b59)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_b1c4fce08fcc5fcf9b61d86498b4faf1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_a21f24dab6f55a37aa3cffe9e4fa5aee, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_b761965ecbf75150b9fcc88277c8e6dd, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_20e590b0438756b083e239ee905597db, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_6dd6847035c0558e989e845eca8d3c8b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_85f2f333b8d75de5b799bc3379405431, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_7e042fc3bf4752bcb031cf42ceecada5, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_837ae41380a956ceb2a808399c55f8ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_c850f69bb9ca553a8661d3e54ca835d3, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_4a610e675acb5175b9b120f2103d337d, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_d1b61de1c61353a2936ae48256fbc406, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_dfc21583d569547d886d043c6aa4afcb, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_2f163b7f3c815fc7a71a040c07379661, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_db27c219f9d9524f9c281b0417e5b0bf, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_0545516d6d315a59ac5dab0ef50d6519, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_2294c52af54d51d2a2ce0642dffec853, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_391828592ceb5cc3b4c1b4bae25069f3, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_a8de4483ef5b5a3a92f74bbfe66e7057, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_ea4f81111a0d544395c18ccbaaea3209, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_d64a4d0e63f757b3b0cecc3b5450e09e, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_db4631b5dc7e5d7f8031365e4a55d423, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_3a30b20f18b859a0b58d1f3169758b59, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}