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
    bool  (::clang::CXXConstructorDecl::*method_pointer_7419dd89b3925a0f89242f74389d395b)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    bool  (::clang::CXXConstructorDecl::*method_pointer_7cb354d40406596a97eeaf3ae2a50ded)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_f0b935938e695bfcba276f28959fd4cf)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_7e44622e8c075874be4c5e82f1e35011)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4fe85a56224f5213b1ea0310dfb7932e)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_403ea8b4c1db51b7babccd4e17fc9482)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_61578012a93058f3b21d19596a2d1701)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    bool  (::clang::CXXConstructorDecl::*method_pointer_ee37a0d08acb50cea10cf12bf75bb5a9)() const = &::clang::CXXConstructorDecl::isExplicit;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_0fff9f54b3b650e89bd3ade77abc9714)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    bool  (::clang::CXXConstructorDecl::*method_pointer_d7b8dfd2ca5853f8b17b28e61ca9b161)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    class ::clang::CXXConstructorDecl  * (*method_pointer_ed31ee74662d592d90ea4bb9e90e24fe)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_d9018f3aa76c54bbb73f17b36c3a0aee)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_507556210e435b49b72edb32d9df55f9)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b36b21a29a995adbafa1dc1990922abd)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b80db8f47b6358a3a6f288fcd83dcdf1)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (*method_pointer_14d67faa60c25c4f9d924557a3c28397)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (::clang::CXXConstructorDecl::*method_pointer_c18b25fb8dfc5c9fa617fd2ed44ff9e7)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_fa8881b7b53d5dc584fd37bdbe271509)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_872db334a01f523687f034b22ab66047)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (*method_pointer_4707808b229a5f1d8a57c32d011b6239)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    bool  (::clang::CXXConstructorDecl::*method_pointer_d69d12ae97bb593d9b743ca130e7049b)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_1f01ffbedff957e8b6d72b35b384a46b)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_7419dd89b3925a0f89242f74389d395b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_7cb354d40406596a97eeaf3ae2a50ded, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_f0b935938e695bfcba276f28959fd4cf, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_7e44622e8c075874be4c5e82f1e35011, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_4fe85a56224f5213b1ea0310dfb7932e, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_403ea8b4c1db51b7babccd4e17fc9482, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_61578012a93058f3b21d19596a2d1701, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_ee37a0d08acb50cea10cf12bf75bb5a9, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_0fff9f54b3b650e89bd3ade77abc9714, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_d7b8dfd2ca5853f8b17b28e61ca9b161, "");
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_ed31ee74662d592d90ea4bb9e90e24fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_d9018f3aa76c54bbb73f17b36c3a0aee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_507556210e435b49b72edb32d9df55f9, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_b36b21a29a995adbafa1dc1990922abd, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_b80db8f47b6358a3a6f288fcd83dcdf1, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_14d67faa60c25c4f9d924557a3c28397, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_c18b25fb8dfc5c9fa617fd2ed44ff9e7, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_fa8881b7b53d5dc584fd37bdbe271509, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_872db334a01f523687f034b22ab66047, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_4707808b229a5f1d8a57c32d011b6239, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_d69d12ae97bb593d9b743ca130e7049b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_1f01ffbedff957e8b6d72b35b384a46b, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}