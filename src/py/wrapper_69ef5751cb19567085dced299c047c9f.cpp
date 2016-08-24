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
    class ::clang::CXXConstructorDecl  * (*method_pointer_03a159b9ae6951679dc8d90ed3d6ff27)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_99d7a6e3934d555e82ea92f41b92ae7b)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_beb04e23b55b50efa59e494d98b9aa25)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_c3f7f375989b5a9994ce194f0d127097)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_83b1445793e95fdb88ad229460967ae5)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_d7ae3c237e3d5748ad8552ffe23ec7c6)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_0ac94cf497a05ebfb7091cf3a542f97a)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_4ad6972a051055f4b8f00bdf3cb26430)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_6e3e67cb3d2d50b9be4a1ff204e63855)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_8a5f93cf15145d3c92e2bed8671eee30)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e3672601150f5dd699ec1551eca0fb90)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_5929ec385ac8538c9b94772c341160f8)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_08f25522143952c6a8b85ca46450dbd0)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_9816a3cbf4c15624a11d1568770eca66)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_7fa37a10c18c59069e6db25f79d14652)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_a0641430119b51c29d40ebc62d6d4a5e)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_fa647cb5822a5aff90bdf5a7e07034b1)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_1998b4c754fd5c6da703f3f19ff677ae)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_9c50f5524aa25804bab11a83009b2b9c)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_c10e692077dc57fcab1f9107e88bc776)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_c5e76f2d2b575ab8b45a5a2e82ea6711)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_602b69e3b77a579b9d1a93bf3411af85)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_03a159b9ae6951679dc8d90ed3d6ff27, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_99d7a6e3934d555e82ea92f41b92ae7b, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_beb04e23b55b50efa59e494d98b9aa25, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_c3f7f375989b5a9994ce194f0d127097, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_83b1445793e95fdb88ad229460967ae5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_d7ae3c237e3d5748ad8552ffe23ec7c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_0ac94cf497a05ebfb7091cf3a542f97a, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_4ad6972a051055f4b8f00bdf3cb26430, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_6e3e67cb3d2d50b9be4a1ff204e63855, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_8a5f93cf15145d3c92e2bed8671eee30, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_e3672601150f5dd699ec1551eca0fb90, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_5929ec385ac8538c9b94772c341160f8, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_08f25522143952c6a8b85ca46450dbd0, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_9816a3cbf4c15624a11d1568770eca66, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_7fa37a10c18c59069e6db25f79d14652, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_a0641430119b51c29d40ebc62d6d4a5e, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_fa647cb5822a5aff90bdf5a7e07034b1, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_1998b4c754fd5c6da703f3f19ff677ae, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_9c50f5524aa25804bab11a83009b2b9c, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_c10e692077dc57fcab1f9107e88bc776, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_c5e76f2d2b575ab8b45a5a2e82ea6711, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_602b69e3b77a579b9d1a93bf3411af85, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}