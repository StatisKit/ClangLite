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
    class ::clang::CXXConstructorDecl  * (*method_pointer_22aac81af97e552e9013521bccfabf89)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_c7bf13b0842c5c9d9bc64d1460dfec2f)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_4eea459495cf576488cceb923c9f5921)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_e1450861feb65380b54485023e5ea96e)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_be92b753c44e5348ad4fbf249a4cd43c)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_ffcc2d47053b5203bb009df0d0d04c84)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_12f89c8013fa5a1db51ff7cdceefdd60)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_bd5a8a86c3e858d59fd9b6727ae30c96)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_00f57c76628458f8a0d548164ace7dae)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f52713ffefd056f89e3ad4ccf864f2f9)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f0db0f257d4e53388245890f95ebd110)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_fecf279a4c7f53c8ab3f35e871e95768)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_1b6bde3be8be5babbe1a00ee05c1956b)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_9d8ec499b8785dd5bf04b9249ac6ad8a)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b80837bf469d5270b0175adf9c6f7b1d)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_40b3cb898ed45279a95c8e4d84bf2390)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_765c47c78b135a969804d2f5f1e67092)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f0b159684e5654d78c06f5ba56e3401d)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_5523e2e01907525d8cc856a5eec7bba4)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_2ad2835a3d585f108937f7aa2b6e19b4)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_76f0586916d4588fbfc459d25e6061fb)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_f1c3ed081f2d5ac7904d3d31f6e0cf02)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_22aac81af97e552e9013521bccfabf89, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_c7bf13b0842c5c9d9bc64d1460dfec2f, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_4eea459495cf576488cceb923c9f5921, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_e1450861feb65380b54485023e5ea96e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_be92b753c44e5348ad4fbf249a4cd43c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_ffcc2d47053b5203bb009df0d0d04c84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_12f89c8013fa5a1db51ff7cdceefdd60, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_bd5a8a86c3e858d59fd9b6727ae30c96, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_00f57c76628458f8a0d548164ace7dae, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_f52713ffefd056f89e3ad4ccf864f2f9, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_f0db0f257d4e53388245890f95ebd110, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_fecf279a4c7f53c8ab3f35e871e95768, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_1b6bde3be8be5babbe1a00ee05c1956b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_9d8ec499b8785dd5bf04b9249ac6ad8a, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_b80837bf469d5270b0175adf9c6f7b1d, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_40b3cb898ed45279a95c8e4d84bf2390, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_765c47c78b135a969804d2f5f1e67092, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_f0b159684e5654d78c06f5ba56e3401d, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_5523e2e01907525d8cc856a5eec7bba4, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_2ad2835a3d585f108937f7aa2b6e19b4, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_76f0586916d4588fbfc459d25e6061fb, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_f1c3ed081f2d5ac7904d3d31f6e0cf02, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}