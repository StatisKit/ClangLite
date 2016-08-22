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
    class ::clang::CXXConstructorDecl  * (*method_pointer_9b11972a2708597aa1310d2cddabaf71)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_cd98a80733585ee28fac3725d33d7051)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_93b2c0763c8c50199a6f2d851e0d866c)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_2a580f4b1f9252b5a25403cfdb519c96)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_d10cee07c09157e79143d63beeaa22e7)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_2f411bc8fe0654dca9ada20592461568)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_ea709e96c698504bb31f51a3dab7db16)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_ba9e0de5bf6750d9986ea5747bbd4e7c)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_37df9f51d93e5c83bf37744ba36bf643)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_566844d1b45b5acfa96963ca449977cb)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_aac73ea956565058a8d38ef9c6780cec)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_bad4732605ce5701b4f7390c7e0712fa)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_fd1b93a2edb054b992fff65f2fa57597)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_61ad5f9bdb785eaa9ab74b82deafb8f0)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_10b2de3a254d5006a473e1dd496a7fd1)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_8f0e77ca2f3853ecb7f43143a12d2a15)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f4492fe301555595a1c1e2b6016e7458)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e794ac08c3345aa09982f91793de6a09)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_2432bf9754f5545a864c973f2384247d)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_6cb1af730d3658d1b07662141ba7427a)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_a8b3949c990b5d0a95a0b47a5911dc9a)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_76070856130656fb9ed73e189719e231)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_9b11972a2708597aa1310d2cddabaf71, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_cd98a80733585ee28fac3725d33d7051, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_93b2c0763c8c50199a6f2d851e0d866c, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_2a580f4b1f9252b5a25403cfdb519c96, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_d10cee07c09157e79143d63beeaa22e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_2f411bc8fe0654dca9ada20592461568, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_ea709e96c698504bb31f51a3dab7db16, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_ba9e0de5bf6750d9986ea5747bbd4e7c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_37df9f51d93e5c83bf37744ba36bf643, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_566844d1b45b5acfa96963ca449977cb, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_aac73ea956565058a8d38ef9c6780cec, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_bad4732605ce5701b4f7390c7e0712fa, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_fd1b93a2edb054b992fff65f2fa57597, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_61ad5f9bdb785eaa9ab74b82deafb8f0, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_10b2de3a254d5006a473e1dd496a7fd1, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_8f0e77ca2f3853ecb7f43143a12d2a15, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_f4492fe301555595a1c1e2b6016e7458, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_e794ac08c3345aa09982f91793de6a09, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_2432bf9754f5545a864c973f2384247d, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_6cb1af730d3658d1b07662141ba7427a, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_a8b3949c990b5d0a95a0b47a5911dc9a, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_76070856130656fb9ed73e189719e231, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}