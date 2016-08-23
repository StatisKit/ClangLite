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
    class ::clang::CXXConstructorDecl  * (*method_pointer_57ef59c9884b5f02942dd96291e0eed4)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_5931ae66332954f09348ed208cf5f7e3)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_1706de5fa7a958808cc67e2f7b660124)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_86ab5c6246005e949bc48d332aa90027)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_7d0513b04b59588bb9f0497a9857d830)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_b2853922bb5452c7b6b692f662d039c0)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_0cccd064290056478803bced9dab50ad)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_09ceac860f4b5365bec2a462fb7fb887)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_9a6390cb406f56e8ac6943748fa7f6a6)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_d1f11013129e56489f3411ec2786de83)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_0de42cee7deb57799a134202f685ee33)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_1da9fe284f1e571983293b7105cded82)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_17e86e27b6e15e20a5adf9c2532cf194)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_c98b11c75c5d586f988e7f5d5dc269e9)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_37b78d6d26975ba28f54af88c264714a)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_0492bf63cf5952d5b70e4db357f3c815)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_388d6513fb88551c8fec57a5925b755c)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_67ab5f8700ec5c8da62f90c7df19aeb4)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4e513c38feae5489bc66a6247fbc475e)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e646a9c8c51353ad9b0ed07f937cffee)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_21a3ac6a612a503db97b7b69888efd08)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_be42332c100d53529a6c659f109902e7)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_57ef59c9884b5f02942dd96291e0eed4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_5931ae66332954f09348ed208cf5f7e3, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_1706de5fa7a958808cc67e2f7b660124, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_86ab5c6246005e949bc48d332aa90027, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_7d0513b04b59588bb9f0497a9857d830, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_b2853922bb5452c7b6b692f662d039c0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_0cccd064290056478803bced9dab50ad, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_09ceac860f4b5365bec2a462fb7fb887, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_9a6390cb406f56e8ac6943748fa7f6a6, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_d1f11013129e56489f3411ec2786de83, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_0de42cee7deb57799a134202f685ee33, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_1da9fe284f1e571983293b7105cded82, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_17e86e27b6e15e20a5adf9c2532cf194, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_c98b11c75c5d586f988e7f5d5dc269e9, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_37b78d6d26975ba28f54af88c264714a, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_0492bf63cf5952d5b70e4db357f3c815, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_388d6513fb88551c8fec57a5925b755c, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_67ab5f8700ec5c8da62f90c7df19aeb4, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_4e513c38feae5489bc66a6247fbc475e, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_e646a9c8c51353ad9b0ed07f937cffee, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_21a3ac6a612a503db97b7b69888efd08, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_be42332c100d53529a6c659f109902e7, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}