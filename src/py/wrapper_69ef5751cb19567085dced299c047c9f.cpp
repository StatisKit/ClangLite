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
    class ::clang::CXXConstructorDecl  * (*method_pointer_13ba16e9bc095b548d1434d0f672c20d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_afdf7c84e54c5618b30e9dae53d1f205)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_dc0aedc17d4e590285721fd41b4c5db5)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_8a1bcb634ea15a5cb5f105eed1a8bcf8)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_7546bca920795a20a8b4ee84229379ad)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_ee0f717955da5c44951487b0af0b888b)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_24b4470cf661502a998589997e0baeb3)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_72e7eb2d1aa5538b86e02bee052fae5d)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_1631d8d6f81c52d5a127a38a1d05aab3)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_27e114b61d8d5eedaf4167a089ce9fb2)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e4a18157280556d984a788a41e660603)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_1399d706ad705bcd9796a2d131894b39)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_56578a0bb4dd55b9bbc8c719e88e4780)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_a20b54fad20351f5b10ecbab8c77376d)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_3ccd9a7adbc958abba15e2da3c9be599)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e4e6b0345731553c85606d94f06e3a8f)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b55a492fff1d57c49c29e52b5c609685)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_700996b10e77585b9b66a4b6cba08ce9)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_ed28e039fd395f39b74b70b79b474b19)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_c62032adbbf657a5a544c820189a01e9)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_865e2ae057395c188619e300e767fff0)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_7a928468ca66532fbeaf8312cf44991c)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_13ba16e9bc095b548d1434d0f672c20d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_afdf7c84e54c5618b30e9dae53d1f205, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_dc0aedc17d4e590285721fd41b4c5db5, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_8a1bcb634ea15a5cb5f105eed1a8bcf8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_7546bca920795a20a8b4ee84229379ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_ee0f717955da5c44951487b0af0b888b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_24b4470cf661502a998589997e0baeb3, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_72e7eb2d1aa5538b86e02bee052fae5d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_1631d8d6f81c52d5a127a38a1d05aab3, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_27e114b61d8d5eedaf4167a089ce9fb2, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_e4a18157280556d984a788a41e660603, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_1399d706ad705bcd9796a2d131894b39, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_56578a0bb4dd55b9bbc8c719e88e4780, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_a20b54fad20351f5b10ecbab8c77376d, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_3ccd9a7adbc958abba15e2da3c9be599, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_e4e6b0345731553c85606d94f06e3a8f, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_b55a492fff1d57c49c29e52b5c609685, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_700996b10e77585b9b66a4b6cba08ce9, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_ed28e039fd395f39b74b70b79b474b19, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_c62032adbbf657a5a544c820189a01e9, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_865e2ae057395c188619e300e767fff0, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_7a928468ca66532fbeaf8312cf44991c, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}