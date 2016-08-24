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
    class ::clang::CXXConstructorDecl  * (*method_pointer_e846b79b7b7d57ec8473630e0ab27383)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_1afae37950f45c0086d31515618cd4b5)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_173a549df204585d97549d97c34339b9)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_0c1a927f742953d389362fe2e74ee204)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_cf175667fc38598d9c1d5d0c6eab765d)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_d309010f5f515596af0eeff1dffa41d3)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_a9a4a96d29c95a848e6d9c6229b93bfe)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_9c9ead3a674b58e5bab14fd20a06a7db)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4b4bfa7aafc757ddb2ffefea43a0e2b6)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_1330071a73955fc388fd753d22f8faa7)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_52d3478790bd53c0ade8f8279c981e41)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e9c6c97bfce75e0a85f7eec0c90a37be)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_25ba67837bcc55938f4884b80b79c4d8)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b068afc550405bd280a31083ebd78571)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_c3ff212d887753fba2968bd1e5655c27)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_5c77b075e0325d1a92cf372dbd2166f2)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_7c58cc992c1856ad8a9a3c9e4c5a646f)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_490571d8835a56a9a7dfe404d76313e4)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_943c046459be56de9277efe12d0900f6)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_a6bdd3bf6172502f9c73c3ca38b468b3)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_38246b3579fc571dbd9c74c12d23c67a)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_1143e28d087658a38d1898ba37404961)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_e846b79b7b7d57ec8473630e0ab27383, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_1afae37950f45c0086d31515618cd4b5, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_173a549df204585d97549d97c34339b9, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_0c1a927f742953d389362fe2e74ee204, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_cf175667fc38598d9c1d5d0c6eab765d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_d309010f5f515596af0eeff1dffa41d3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_a9a4a96d29c95a848e6d9c6229b93bfe, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_9c9ead3a674b58e5bab14fd20a06a7db, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_4b4bfa7aafc757ddb2ffefea43a0e2b6, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_1330071a73955fc388fd753d22f8faa7, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_52d3478790bd53c0ade8f8279c981e41, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_e9c6c97bfce75e0a85f7eec0c90a37be, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_25ba67837bcc55938f4884b80b79c4d8, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_b068afc550405bd280a31083ebd78571, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_c3ff212d887753fba2968bd1e5655c27, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_5c77b075e0325d1a92cf372dbd2166f2, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_7c58cc992c1856ad8a9a3c9e4c5a646f, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_490571d8835a56a9a7dfe404d76313e4, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_943c046459be56de9277efe12d0900f6, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_a6bdd3bf6172502f9c73c3ca38b468b3, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_38246b3579fc571dbd9c74c12d23c67a, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_1143e28d087658a38d1898ba37404961, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}