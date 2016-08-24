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
    class ::clang::CXXConstructorDecl  * (*method_pointer_4e07b220117656d29c7df47988303840)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_3788c7def22b53999ad41349e2268f68)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_aedcda368ef95926b0cf83bc9cd56d08)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_b02d138a892059329fa262b8d3cc923c)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_6127a9af07eb59d5b4e132348f26089f)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_bae5c0e057765265975d8e56bb4f3ed7)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_202b8701cca7527d9d5961f4f58ad59d)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_22e7d459a93051f38044df1035557469)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_da3d03ed59975348a8e6c0e7d79af772)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_0e29b2ffcf0b5087902783e8a229d32e)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f2dbf180d88b5d609fb03d44fdef2e33)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_aa89f8252d1b5b40bceb1468a8bc5ec8)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_d8f54a28028b5e03b0a6e37c4c0ca35b)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_daad98013f455995a81772db496ba7c4)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_be9c9ff4c4c956fb8b70e3a4f729f938)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_2b81f19a71f25580bf372b71717baeae)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_20b331821eb953d2b295fee3754fba53)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_5f89dc1f41b05453a7cd78bf92797993)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_6c3f4c4267b157bd89de4bed285bcf0c)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_81329b1239695cc6a576ee6ef8cdb461)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_64a0db09e13a5648bd6a1177d6035cb1)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_0118d8ed99a35f6892b98d1f22e9e456)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_4e07b220117656d29c7df47988303840, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_3788c7def22b53999ad41349e2268f68, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_aedcda368ef95926b0cf83bc9cd56d08, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_b02d138a892059329fa262b8d3cc923c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_6127a9af07eb59d5b4e132348f26089f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_bae5c0e057765265975d8e56bb4f3ed7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_202b8701cca7527d9d5961f4f58ad59d, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_22e7d459a93051f38044df1035557469, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_da3d03ed59975348a8e6c0e7d79af772, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_0e29b2ffcf0b5087902783e8a229d32e, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_f2dbf180d88b5d609fb03d44fdef2e33, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_aa89f8252d1b5b40bceb1468a8bc5ec8, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_d8f54a28028b5e03b0a6e37c4c0ca35b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_daad98013f455995a81772db496ba7c4, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_be9c9ff4c4c956fb8b70e3a4f729f938, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_2b81f19a71f25580bf372b71717baeae, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_20b331821eb953d2b295fee3754fba53, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_5f89dc1f41b05453a7cd78bf92797993, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_6c3f4c4267b157bd89de4bed285bcf0c, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_81329b1239695cc6a576ee6ef8cdb461, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_64a0db09e13a5648bd6a1177d6035cb1, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_0118d8ed99a35f6892b98d1f22e9e456, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}