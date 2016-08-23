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
    class ::clang::CXXConstructorDecl  * (*method_pointer_68abf1ed62165636b9f256996be0eedf)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_cea4863f9ef0549b8803df5dd5d376f4)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_9d47e1044b805d4ebf4422e4b2484c35)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_fbd49278bfa7587790ab5ca37209b0c3)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_ee33ad12cdec505aa817e47c6d1c2f44)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_19ef9f32d90d56c1afeb80549e5790b8)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_58e205372e315af09b9ac31368fcf91a)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_a8abf153c05454abbbf1c0cd17cd3816)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_a7aabbe27336587fbca336a7ce08909e)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f3432fa177a85cdab94b085094760aaa)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_2023581921c850ffb8cc2556f0c3048a)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_237dceb4d360547aa108f6c410e9e706)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_fb9453273670583cb397d7832d214b0e)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_a5318f737304500e8757ced79d1615c2)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_ea9702ad2fbe599893bfe15082f7fa17)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_476bb7dc34fe5b8eae5d3873932a7b1c)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_53103e0cb2d055b59b5ad5b7f5c2cd40)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f0433568e60f5b12bfbc79d7282782b2)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_708adf8e89f359b88dc67b9a941b0155)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4751157322c15ccc98b2024adfb8f7f4)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_79db67697a795ca2b9142dbafbb15fa8)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_3884c82d536c512d9c7145f407d4f659)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_68abf1ed62165636b9f256996be0eedf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_cea4863f9ef0549b8803df5dd5d376f4, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_9d47e1044b805d4ebf4422e4b2484c35, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_fbd49278bfa7587790ab5ca37209b0c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_ee33ad12cdec505aa817e47c6d1c2f44, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_19ef9f32d90d56c1afeb80549e5790b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_58e205372e315af09b9ac31368fcf91a, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_a8abf153c05454abbbf1c0cd17cd3816, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_a7aabbe27336587fbca336a7ce08909e, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_f3432fa177a85cdab94b085094760aaa, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_2023581921c850ffb8cc2556f0c3048a, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_237dceb4d360547aa108f6c410e9e706, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_fb9453273670583cb397d7832d214b0e, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_a5318f737304500e8757ced79d1615c2, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_ea9702ad2fbe599893bfe15082f7fa17, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_476bb7dc34fe5b8eae5d3873932a7b1c, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_53103e0cb2d055b59b5ad5b7f5c2cd40, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_f0433568e60f5b12bfbc79d7282782b2, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_708adf8e89f359b88dc67b9a941b0155, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_4751157322c15ccc98b2024adfb8f7f4, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_79db67697a795ca2b9142dbafbb15fa8, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_3884c82d536c512d9c7145f407d4f659, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}