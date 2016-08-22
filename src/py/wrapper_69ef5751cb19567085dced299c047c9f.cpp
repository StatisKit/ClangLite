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
    class ::clang::CXXConstructorDecl  * (*method_pointer_0907f3750b2f5878b01f10f5daeee6d9)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_20a49a24997355f491247a2b7259f688)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_4edf97e9670f53938fcf94a751932148)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_ed66c1a036aa5e73a8d1eb51ae61493e)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_43879a87c6715240bc188b76ae244094)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_ffef18d895dc5de185fbebdf485f39d2)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_4b5afb2e9f875c8793722a2064260416)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_b2eb286a2adf54c491809ae6ffe9c737)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_9e19db9253225405927a645292f6096b)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e773c14dfc5b5d0484b04773bc7f5715)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_5839343e3d4d512e86accc8c424e2573)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_d6cfaf771ef853f488d5693c42658f97)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_8053ab6548515974aa2feb8d82c100e2)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_93ddf70e24835a1090c838aa621a0c7b)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f33c7f35fa8d5ca48be3f5b55b5af990)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_8438ba54cd2359c398b7cb3ea05268b0)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b1b43515c91d5e2b90963b7a9b38d4e2)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_daa2f38ae2775cb4b66f6f21ea91c10c)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_294bea65b9d45597a8cddb182143ed5c)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_cdbfdf84e39253a3a647ba2276ff6723)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_9a7301b160a451a3b63680070f9c6761)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_af142655d04e5d2987c300b66c70c627)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_0907f3750b2f5878b01f10f5daeee6d9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_20a49a24997355f491247a2b7259f688, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_4edf97e9670f53938fcf94a751932148, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_ed66c1a036aa5e73a8d1eb51ae61493e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_43879a87c6715240bc188b76ae244094, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_ffef18d895dc5de185fbebdf485f39d2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_4b5afb2e9f875c8793722a2064260416, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_b2eb286a2adf54c491809ae6ffe9c737, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_9e19db9253225405927a645292f6096b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_e773c14dfc5b5d0484b04773bc7f5715, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_5839343e3d4d512e86accc8c424e2573, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_d6cfaf771ef853f488d5693c42658f97, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_8053ab6548515974aa2feb8d82c100e2, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_93ddf70e24835a1090c838aa621a0c7b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_f33c7f35fa8d5ca48be3f5b55b5af990, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_8438ba54cd2359c398b7cb3ea05268b0, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_b1b43515c91d5e2b90963b7a9b38d4e2, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_daa2f38ae2775cb4b66f6f21ea91c10c, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_294bea65b9d45597a8cddb182143ed5c, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_cdbfdf84e39253a3a647ba2276ff6723, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_9a7301b160a451a3b63680070f9c6761, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_af142655d04e5d2987c300b66c70c627, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}