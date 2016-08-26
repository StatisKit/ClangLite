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
    class ::clang::CXXConstructorDecl  * (*method_pointer_0bbcb5eca79954d0a6f0ac680417c066)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_4cae69ce0eb75e94bfe2e0c378a02094)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_722346bedb735f35af7c86f8bb5692f0)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_a8ff8beb0de75de4b596900908df5af7)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_2ded7af0d97759c3bdf8f0c8d7a4d652)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_2112bd5cdad15fb78a90fffaffc4b780)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_99afd57b02bf582aa4a4a87da3ac8916)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_fb2ac4cc8a065a80b434b51a8fcc9402)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f3189f4312cd56bb82519a9ecf3a8b46)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_93c58da799e651c48ec1180a6782adae)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_fea9b8e7e1d45e199f1a99d1b7cf7846)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_235c4faf61e957969dd472234774a185)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_3dc3e305aceb5d4e8841e20eed9fb80b)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_3d299666720b5d8e9ffe3e8c8d59ec3c)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_df650424b9e0572c8d8a344c3667c2b3)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4a590daee4ee5ffead738169c6159d6f)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_85ec61a1e7f6559d9db96230f52636eb)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_2cebab8d14405558af0f2109af5d2961)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_79d58924e1bc5f6f877ba0ed0aec87f7)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f6ad539af1e3542194e09478315e5cda)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_c8b18e2a277854a58ceb26128faf183a)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_1e5fa010f87153f991fb1ab1ffa6219c)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_0bbcb5eca79954d0a6f0ac680417c066, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_4cae69ce0eb75e94bfe2e0c378a02094, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_722346bedb735f35af7c86f8bb5692f0, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_a8ff8beb0de75de4b596900908df5af7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_2ded7af0d97759c3bdf8f0c8d7a4d652, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_2112bd5cdad15fb78a90fffaffc4b780, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_99afd57b02bf582aa4a4a87da3ac8916, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_fb2ac4cc8a065a80b434b51a8fcc9402, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_f3189f4312cd56bb82519a9ecf3a8b46, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_93c58da799e651c48ec1180a6782adae, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_fea9b8e7e1d45e199f1a99d1b7cf7846, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_235c4faf61e957969dd472234774a185, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_3dc3e305aceb5d4e8841e20eed9fb80b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_3d299666720b5d8e9ffe3e8c8d59ec3c, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_df650424b9e0572c8d8a344c3667c2b3, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_4a590daee4ee5ffead738169c6159d6f, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_85ec61a1e7f6559d9db96230f52636eb, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_2cebab8d14405558af0f2109af5d2961, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_79d58924e1bc5f6f877ba0ed0aec87f7, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_f6ad539af1e3542194e09478315e5cda, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_c8b18e2a277854a58ceb26128faf183a, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_1e5fa010f87153f991fb1ab1ffa6219c, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}