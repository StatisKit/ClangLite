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
    class ::clang::CXXConstructorDecl  * (*method_pointer_003d713b783559ea9fe4510577de39b5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_0be23730d10953ff960a095bbbb8a832)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_b7ce61b60d435b15b7c96c1056687edd)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_231480ba777a591da9a4e6a455331856)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_ddf4d168a8975265bef922b245e01652)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_275b06792748570580b886b2697b6480)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_f26f4eb852e75407a649cd0f3e98f47f)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_9ef2387d1e1c529d9e94a8b1f37d2239)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e0b0dfb9947e5b7c9e4d111dc4e9d70d)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_c3eca3ca79a65588940683d8bb586c5c)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_fe68aa3364705c00b7f11af7709f0091)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_cb5ac38dba425871bd4ca44791a10809)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_89123ad44e07537484a30362fede85a0)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_0acb9a89b86554f49d84d6d604d9d065)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_6b5200fd17cc5faa922fc72b21c07114)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_965cbe6ff79758ec91c2ba26a6c6b9e0)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_8f406b22193155139fb1ecc3059de5d6)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_ee14e0068e565e82a0642f9a66df7b85)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_734cda844c7b57d3a69b501338acba67)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_d90fa14c078255db8d629e533c57af15)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_75e89ccab4ff5c4bbbe988c7290437fd)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_9a58f3592c3b53069052d5fe258486e2)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_003d713b783559ea9fe4510577de39b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_0be23730d10953ff960a095bbbb8a832, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_b7ce61b60d435b15b7c96c1056687edd, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_231480ba777a591da9a4e6a455331856, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_ddf4d168a8975265bef922b245e01652, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_275b06792748570580b886b2697b6480, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_f26f4eb852e75407a649cd0f3e98f47f, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_9ef2387d1e1c529d9e94a8b1f37d2239, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_e0b0dfb9947e5b7c9e4d111dc4e9d70d, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_c3eca3ca79a65588940683d8bb586c5c, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_fe68aa3364705c00b7f11af7709f0091, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_cb5ac38dba425871bd4ca44791a10809, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_89123ad44e07537484a30362fede85a0, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_0acb9a89b86554f49d84d6d604d9d065, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_6b5200fd17cc5faa922fc72b21c07114, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_965cbe6ff79758ec91c2ba26a6c6b9e0, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_8f406b22193155139fb1ecc3059de5d6, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_ee14e0068e565e82a0642f9a66df7b85, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_734cda844c7b57d3a69b501338acba67, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_d90fa14c078255db8d629e533c57af15, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_75e89ccab4ff5c4bbbe988c7290437fd, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_9a58f3592c3b53069052d5fe258486e2, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}