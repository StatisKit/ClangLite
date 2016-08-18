#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_69ef5751cb19567085dced299c047c9f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXConstructorDecl  * (*method_pointer_d861e196f8c654bab839e4b1fa573e14)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_d5d104cb7ef8540bb177095df0c36ff5)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_e9d101c7142d53ee82a11c64410a9eae)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_da7e5bf482065299a07703695c83754a)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_958744fb1d865ee5ae1cd7e53310cc79)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_bfcb7194ca4459a59debb871a7621a64)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_b1dcc608f8ea51e2a2d6e8bed204aa6a)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_11f47367d84d5d03bdeb9d07cb8a1156)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_26142416543e5dddbbe8ff79ae2ffa5c)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_98f1e7b94fe45fc68fe85458f20e7119)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_956f067513e45fb9bbcb65042e355223)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_0af8b7fdd1f8511396122ae00b48794c)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_bc8ec387fdf652b8b9d72d43e532bdb6)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_239ca67f16c25820ad264cec0ae2101f)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_55249f9d05de565db4f91c17dc67d25b)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_baeae361a40b501ea185a65e762a2021)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e18fe8627d955027a61c13ac97b65828)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_8bd8ec16d7875cc9b113e93da49325c7)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_2f6ebb59c1c65899bed725d74e968728)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_46ed9ad2a158514aa4d12e57b0a37ade)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_54f2592eee49522eb0bf47daaf486c7b)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_9e6776a08ef55b5fba1a35255626da4e)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_d861e196f8c654bab839e4b1fa573e14, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_d5d104cb7ef8540bb177095df0c36ff5, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_e9d101c7142d53ee82a11c64410a9eae, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_da7e5bf482065299a07703695c83754a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_958744fb1d865ee5ae1cd7e53310cc79, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_bfcb7194ca4459a59debb871a7621a64, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_b1dcc608f8ea51e2a2d6e8bed204aa6a, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_11f47367d84d5d03bdeb9d07cb8a1156, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_26142416543e5dddbbe8ff79ae2ffa5c, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_98f1e7b94fe45fc68fe85458f20e7119, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_956f067513e45fb9bbcb65042e355223, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_0af8b7fdd1f8511396122ae00b48794c, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_bc8ec387fdf652b8b9d72d43e532bdb6, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_239ca67f16c25820ad264cec0ae2101f, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_55249f9d05de565db4f91c17dc67d25b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_baeae361a40b501ea185a65e762a2021, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_e18fe8627d955027a61c13ac97b65828, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_8bd8ec16d7875cc9b113e93da49325c7, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_2f6ebb59c1c65899bed725d74e968728, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_46ed9ad2a158514aa4d12e57b0a37ade, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_54f2592eee49522eb0bf47daaf486c7b, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_9e6776a08ef55b5fba1a35255626da4e, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}