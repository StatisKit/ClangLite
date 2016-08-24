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
    class ::clang::CXXConstructorDecl  * (*method_pointer_a3ae7c6d6d1650108df9586ff8bc54ec)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_fe7087d3ab925d029a98307d444d2db0)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_d99327254f9153ab9bae108e5bb870f4)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_6f117a1b0b05583eae738c4895e1cd9a)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_2fa9172fa77d512e8362f2e38d032281)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_8e7e86a344eb5d7db2d223d1360b8a76)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_77855eb7f97f598996210b367ca002a5)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_74d8c59b5ec0576eab99c50d9600adcf)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_1f11dfb4984a59028058a51fa5ecfb9c)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b9312433c4365986a140a98a418f021a)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e24902dc6e385e69814e242abf742c83)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4a836df159ed581586040f45274bf552)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_50affb75f42757e790f2e7849b595b2a)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_803bbf8c130d5a8482c56c6ebef9ec2f)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_14d0f5de57515f099562d7951e9d8b63)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_914ae4416e7d5d4bba37cfa554b1db1c)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_8c0dd128f70b58e4b126d96af5eaf44d)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_da0fec07111b538f8e9cdf7a92786286)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_39eef3b44b765ae2aecea6182a6b1b77)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_df94307424625eb48189d08257807aeb)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_f26af4f312d45f1bbaa5464a95dc1f08)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_ab2563ca31c65d94a93ee8a82a82a72c)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_a3ae7c6d6d1650108df9586ff8bc54ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_fe7087d3ab925d029a98307d444d2db0, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_d99327254f9153ab9bae108e5bb870f4, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_6f117a1b0b05583eae738c4895e1cd9a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_2fa9172fa77d512e8362f2e38d032281, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_8e7e86a344eb5d7db2d223d1360b8a76, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_77855eb7f97f598996210b367ca002a5, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_74d8c59b5ec0576eab99c50d9600adcf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_1f11dfb4984a59028058a51fa5ecfb9c, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_b9312433c4365986a140a98a418f021a, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_e24902dc6e385e69814e242abf742c83, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_4a836df159ed581586040f45274bf552, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_50affb75f42757e790f2e7849b595b2a, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_803bbf8c130d5a8482c56c6ebef9ec2f, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_14d0f5de57515f099562d7951e9d8b63, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_914ae4416e7d5d4bba37cfa554b1db1c, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_8c0dd128f70b58e4b126d96af5eaf44d, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_da0fec07111b538f8e9cdf7a92786286, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_39eef3b44b765ae2aecea6182a6b1b77, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_df94307424625eb48189d08257807aeb, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_f26af4f312d45f1bbaa5464a95dc1f08, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_ab2563ca31c65d94a93ee8a82a82a72c, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}