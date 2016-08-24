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
    class ::clang::CXXConstructorDecl  * (*method_pointer_de7973514c255fa4b66271392d247f95)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_cf36a93fe42053778bae2f0f3866ad12)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_ae5107d2db4652d19ea1d59a7e983d72)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_e9bf163fe18e5da5883fca59eeb2a559)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_0f44c140ec1753d8bd55af42af2542be)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_be3f338f14ae59638b626a1a093f51f9)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_118b3d4cd4015d1ab028b2fa1add6c79)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_575bf6d3df9456e4929b0d118ed76b3f)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f049a93479dd5cd5938bed10dcd3bbee)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_25eacbdcce1b550091d997e929587231)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_99795a8a350b52b6845f5ba2d8950e1a)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f74f59a0f34759fca5c1343fb17e7704)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_9530d3e3dd1e5d56b5d5c1dccdbd5440)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_1adeea9396705decab68fd529a4b1ec8)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_7d513c6a02285a27a51dc56bd37c8088)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f0ec505fe18e5db2a1c39356964e0a3f)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_71d8bad966dd52aaa7923fcd9204af33)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_352161702be654ffa00cc64ddf7a4d9b)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4e97bff8c6865acb8ef056f87dfe75d0)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_57e9c2658e60548c9b12ff471872bd46)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_26870407b000566b855af5106aabd8c6)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_6f45aa114fd65e54a88c5f3b462fcf75)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_de7973514c255fa4b66271392d247f95, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_cf36a93fe42053778bae2f0f3866ad12, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_ae5107d2db4652d19ea1d59a7e983d72, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_e9bf163fe18e5da5883fca59eeb2a559, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_0f44c140ec1753d8bd55af42af2542be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_be3f338f14ae59638b626a1a093f51f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_118b3d4cd4015d1ab028b2fa1add6c79, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_575bf6d3df9456e4929b0d118ed76b3f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_f049a93479dd5cd5938bed10dcd3bbee, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_25eacbdcce1b550091d997e929587231, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_99795a8a350b52b6845f5ba2d8950e1a, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_f74f59a0f34759fca5c1343fb17e7704, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_9530d3e3dd1e5d56b5d5c1dccdbd5440, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_1adeea9396705decab68fd529a4b1ec8, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_7d513c6a02285a27a51dc56bd37c8088, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_f0ec505fe18e5db2a1c39356964e0a3f, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_71d8bad966dd52aaa7923fcd9204af33, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_352161702be654ffa00cc64ddf7a4d9b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_4e97bff8c6865acb8ef056f87dfe75d0, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_57e9c2658e60548c9b12ff471872bd46, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_26870407b000566b855af5106aabd8c6, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_6f45aa114fd65e54a88c5f3b462fcf75, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}