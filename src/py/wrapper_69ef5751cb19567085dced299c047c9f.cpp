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
    class ::clang::CXXConstructorDecl  * (*method_pointer_09d1103a18b85c72a4e313f14c16026e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_530f0d00f2d95928b25b7b6f2116a512)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_c5966050aca352c48602db0c288079ef)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_8879ccfdc3d95c7589ce5112fd08c2de)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_a0ba97b19c7e5d9fa4e41df413496b17)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_a9a4999df8855961bee1aa6fd807e6c9)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_d58767e03911593f857104a69f5b9da6)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_a61ecd323256520193c97a4cf71e2335)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_d0cdc67bf5bf535a9dda482080f37718)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_5a5513530bfa5e93b3e4d7d994bf45f4)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_622efb7ebf2850d49c8e11dec6a580cd)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_7c3524d85add5a2e900839f349feec0d)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_152721efcce75dd487cf31fe1a853bd0)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_7b1ce14bc3825b0caea99fac2c4987f8)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b375ec2151e45b86a52359c34031adfd)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_bb68c2eb75a2599cb3906d61d04e6154)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_32a1800826da5f7f8abc24317b78cd8b)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_0c7fc4107f2759d3b23c8c2b154a4751)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_0c579b7792615917b709a2b12a908bbf)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_451a10d9fde859baa77be8cb86fbc919)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_33a0aab3d8ff5b63ac9355fe2ffc09cf)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_e4529c14d114537b807fcf087b6e5e71)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_09d1103a18b85c72a4e313f14c16026e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_530f0d00f2d95928b25b7b6f2116a512, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_c5966050aca352c48602db0c288079ef, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_8879ccfdc3d95c7589ce5112fd08c2de, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_a0ba97b19c7e5d9fa4e41df413496b17, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_a9a4999df8855961bee1aa6fd807e6c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_d58767e03911593f857104a69f5b9da6, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_a61ecd323256520193c97a4cf71e2335, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_d0cdc67bf5bf535a9dda482080f37718, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_5a5513530bfa5e93b3e4d7d994bf45f4, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_622efb7ebf2850d49c8e11dec6a580cd, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_7c3524d85add5a2e900839f349feec0d, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_152721efcce75dd487cf31fe1a853bd0, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_7b1ce14bc3825b0caea99fac2c4987f8, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_b375ec2151e45b86a52359c34031adfd, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_bb68c2eb75a2599cb3906d61d04e6154, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_32a1800826da5f7f8abc24317b78cd8b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_0c7fc4107f2759d3b23c8c2b154a4751, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_0c579b7792615917b709a2b12a908bbf, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_451a10d9fde859baa77be8cb86fbc919, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_33a0aab3d8ff5b63ac9355fe2ffc09cf, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_e4529c14d114537b807fcf087b6e5e71, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}