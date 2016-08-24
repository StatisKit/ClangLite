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
    class ::clang::CXXConstructorDecl  * (*method_pointer_2c88ad6829655e8ea8b9239dac672655)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_4e0f657a5da75737a3d96a889b918de4)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_e5bd09d70ae55b43911de88ed42bb78e)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_1095d6a83c7b5b06ad2190222960eca8)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_d2063c9a512152baa33fb5b1a1fabf15)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_e1e54bda1dbf5d34aa377097fdcd58e9)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_5152f6e317ed545e826c2cdae63a6e12)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_865ea9ec44b15ea99b4e74abd1770be4)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_05828d90005059b1891484eccd402ee7)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_54c9bed59e36553aa15273743a8a5da3)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_78bb0b0a46b55552a45f3c6ee31bdd32)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_70133849e5f55020aeb453a535c97eeb)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b4584dd78621583aba21ce5daff50671)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_add31d96721b5818871d705ef8a11082)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_07abf87fc6eb52329bc023347aa6b124)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_0772b00db4a7523a868bb80d58735c58)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_a4e077f533345987bd898878c591f0e3)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_7abb6979a82852229588de24612e651a)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_a1b9ff9460125cecba903b7db073b2d0)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_adb816e804ae5e5185ba2c148aa73fdc)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_529bd844a13c57b5b6c50cb7d5762568)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_66490c22ee475666aefe3c0bcd951b45)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_2c88ad6829655e8ea8b9239dac672655, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_4e0f657a5da75737a3d96a889b918de4, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_e5bd09d70ae55b43911de88ed42bb78e, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_1095d6a83c7b5b06ad2190222960eca8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_d2063c9a512152baa33fb5b1a1fabf15, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_e1e54bda1dbf5d34aa377097fdcd58e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_5152f6e317ed545e826c2cdae63a6e12, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_865ea9ec44b15ea99b4e74abd1770be4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_05828d90005059b1891484eccd402ee7, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_54c9bed59e36553aa15273743a8a5da3, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_78bb0b0a46b55552a45f3c6ee31bdd32, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_70133849e5f55020aeb453a535c97eeb, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_b4584dd78621583aba21ce5daff50671, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_add31d96721b5818871d705ef8a11082, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_07abf87fc6eb52329bc023347aa6b124, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_0772b00db4a7523a868bb80d58735c58, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_a4e077f533345987bd898878c591f0e3, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_7abb6979a82852229588de24612e651a, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_a1b9ff9460125cecba903b7db073b2d0, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_adb816e804ae5e5185ba2c148aa73fdc, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_529bd844a13c57b5b6c50cb7d5762568, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_66490c22ee475666aefe3c0bcd951b45, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}