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
    class ::clang::CXXConstructorDecl  * (*method_pointer_20f353cafce5551992a3bbb34f2ac142)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_5eb9990054f95dcba917179872951fe1)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_00efb3649bb75c31b8378c4ed5883895)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_df6e5a7c87db54488fcdb093a7541b38)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_8664cdaaff575b699a8e84248b9ffe00)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_07c9985fdb2d564e957dc67b1161baff)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_51160a83eb9956fbb940a5457e968935)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_2266e7ca376f53a19e1bf3b8f4c1bfd9)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4bc34b4a12915b0f855b5b4468db84cb)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_ced8beaee87d541fae43a469f158015d)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_61fabe58cd365009aecac7042d8af5a7)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_72d16d86b34052acac9f7757fe357a6d)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_388fe9019dfd50e2bae8c30de1b63c2a)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_123a5fdb4bac5989a90392b24a5b0321)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_9c49a98c88b253a8b23deda20186607c)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_7dd8a6e3e14c5518b173e89cf2e3a592)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_1a162234c8365b7b83a6e9f7cb835b59)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_3e56666048ca5b37881dc6f7889cca9d)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_d652ac7e98db5645bdca368e0b5a58e5)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e0b46b041b6b5543ae6dda80e62d6d8e)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_450a27fdf7705409a9a9de6255577e80)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_714d2774e82c5d02b066584b262e1624)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_20f353cafce5551992a3bbb34f2ac142, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_5eb9990054f95dcba917179872951fe1, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_00efb3649bb75c31b8378c4ed5883895, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_df6e5a7c87db54488fcdb093a7541b38, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_8664cdaaff575b699a8e84248b9ffe00, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_07c9985fdb2d564e957dc67b1161baff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_51160a83eb9956fbb940a5457e968935, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_2266e7ca376f53a19e1bf3b8f4c1bfd9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_4bc34b4a12915b0f855b5b4468db84cb, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_ced8beaee87d541fae43a469f158015d, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_61fabe58cd365009aecac7042d8af5a7, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_72d16d86b34052acac9f7757fe357a6d, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_388fe9019dfd50e2bae8c30de1b63c2a, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_123a5fdb4bac5989a90392b24a5b0321, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_9c49a98c88b253a8b23deda20186607c, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_7dd8a6e3e14c5518b173e89cf2e3a592, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_1a162234c8365b7b83a6e9f7cb835b59, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_3e56666048ca5b37881dc6f7889cca9d, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_d652ac7e98db5645bdca368e0b5a58e5, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_e0b46b041b6b5543ae6dda80e62d6d8e, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_450a27fdf7705409a9a9de6255577e80, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_714d2774e82c5d02b066584b262e1624, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}