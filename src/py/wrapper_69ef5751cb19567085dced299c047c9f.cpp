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
    class ::clang::CXXConstructorDecl  * (*method_pointer_9dea42d508cd54498ac39e4d989a78ef)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_318d456028e453af8d2ec29977020598)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_fa7f1d47a72750a5b9cdfa88a1718259)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_29f6f66ff2d45b7d850cd85a7e3bdb76)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_f655c2a168025cc4b38b3cf6d403dead)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_c21af9ff8b3a58478680942a5a7509cb)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_09362d8723905ad881cd76f7c3c9c96d)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_5b708fa7bdaa5268a60055f143eef388)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_66d095611d9e59a8bc8317823f3f8694)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f063b88b348c5b41b0e3fbd9de66e544)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_19a9c01c62b0554e8aac3b954965a256)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_bfb54bdfa1ea54258767dd0410dcfec1)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_78919cae4fa357a7b148cb9b1b4947ef)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_a7ec5037488450d883172d90b748b6dd)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_9929d74e2a85511abf6dbc614743b969)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_709e532af1dd51d08b82aae11cf2de66)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4a61e40d930d50cba5e5eff9d86a0821)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_d6271b75c05c5bd1b9ae8edd5da2e6f0)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_3cfc4b7dc3d2531dba63e1468c2cd786)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_7d0729926fab5d53ae85a323e928656a)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_99ad4971ae5958a9b9ff442c041866cc)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_dd634a5d4b66571989335a0e246109c5)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_9dea42d508cd54498ac39e4d989a78ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_318d456028e453af8d2ec29977020598, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_fa7f1d47a72750a5b9cdfa88a1718259, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_29f6f66ff2d45b7d850cd85a7e3bdb76, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_f655c2a168025cc4b38b3cf6d403dead, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_c21af9ff8b3a58478680942a5a7509cb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_09362d8723905ad881cd76f7c3c9c96d, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_5b708fa7bdaa5268a60055f143eef388, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_66d095611d9e59a8bc8317823f3f8694, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_f063b88b348c5b41b0e3fbd9de66e544, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_19a9c01c62b0554e8aac3b954965a256, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_bfb54bdfa1ea54258767dd0410dcfec1, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_78919cae4fa357a7b148cb9b1b4947ef, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_a7ec5037488450d883172d90b748b6dd, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_9929d74e2a85511abf6dbc614743b969, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_709e532af1dd51d08b82aae11cf2de66, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_4a61e40d930d50cba5e5eff9d86a0821, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_d6271b75c05c5bd1b9ae8edd5da2e6f0, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_3cfc4b7dc3d2531dba63e1468c2cd786, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_7d0729926fab5d53ae85a323e928656a, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_99ad4971ae5958a9b9ff442c041866cc, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_dd634a5d4b66571989335a0e246109c5, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}