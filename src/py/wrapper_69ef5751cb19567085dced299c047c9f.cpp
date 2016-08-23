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
    class ::clang::CXXConstructorDecl  * (*method_pointer_4311fbfc538150d6b769013d6f801e3b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_5750c1eb9e685e82aa21cb2f8414bb3e)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_ede2ae7642005c2d8699586b44b1f7da)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_226dac5028a756cdb3725de2a1c5e79f)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_710513461a8d59b49156d52db99781e4)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_93a095a38bbc5660b42260e4a0916ad0)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_5cc3c0ef984053949ea7d1c1adbf5b3c)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_eae6e46ad17c5d50b6a7cf628d53525d)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_cad1575bd68d5e32a58504356ab6960b)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_41fd19e4c8ea5f60b8d8532c4f083ffa)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_baed6c4a44a25c33bd39067f3b72def5)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4f00c2496b605646ba78f34844c69c16)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4bc3d24e06a058b589476a10610d7113)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_ba5d5160adcf5c859d0df21ac2102dda)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_9040286ed78f5bbeb5be51326aa34133)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_c781866cdbc156eda232c8f228fcce52)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_521ad4fad15c519785add582772912d1)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_9d8c2b7c789a57d1b798a156a052627e)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_491485d1a7035d1a9a19a142f2ac54b7)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4b4661e27e0a5359b9f157ed7bd4fa9e)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_f5fe1245b1bb569f9f3f235462b4d634)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_637f24fe07e9591298d2fccaa1500b6a)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_4311fbfc538150d6b769013d6f801e3b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_5750c1eb9e685e82aa21cb2f8414bb3e, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_ede2ae7642005c2d8699586b44b1f7da, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_226dac5028a756cdb3725de2a1c5e79f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_710513461a8d59b49156d52db99781e4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_93a095a38bbc5660b42260e4a0916ad0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_5cc3c0ef984053949ea7d1c1adbf5b3c, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_eae6e46ad17c5d50b6a7cf628d53525d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_cad1575bd68d5e32a58504356ab6960b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_41fd19e4c8ea5f60b8d8532c4f083ffa, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_baed6c4a44a25c33bd39067f3b72def5, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_4f00c2496b605646ba78f34844c69c16, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_4bc3d24e06a058b589476a10610d7113, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_ba5d5160adcf5c859d0df21ac2102dda, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_9040286ed78f5bbeb5be51326aa34133, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_c781866cdbc156eda232c8f228fcce52, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_521ad4fad15c519785add582772912d1, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_9d8c2b7c789a57d1b798a156a052627e, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_491485d1a7035d1a9a19a142f2ac54b7, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_4b4661e27e0a5359b9f157ed7bd4fa9e, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_f5fe1245b1bb569f9f3f235462b4d634, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_637f24fe07e9591298d2fccaa1500b6a, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}