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
    class ::clang::CXXConstructorDecl  * (*method_pointer_cf03140124f85aefbbd078eba8558625)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_6237119b58f250c78418b64e95c46596)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_592a1b7d7c4857428dfa01583a12324d)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_d126ecbe50f9543c81d3c118b9433901)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_2ee2447273c756369a91bc700d217b03)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_8e29aaac0a405dc5ad3900e9aef4b42a)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_e00123f060f05d7bb0643fb4fba20e5a)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_ccbef7451e9c5ab1bcb054c635dde5b7)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_5c84cbd6dcf35c618a33c6fd06ea7e7b)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_d1041fb66ce45024b857c4a7b9cf6e76)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_a82dccad73c1599c861d9493e1a77eeb)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_49f8abb1b09453c499e4d8430dcf6dd9)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_cd7b5dfcb7f2500caf0a383cef551f3e)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_c71b0c16a31b58e1b6a671b61af7bcdf)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_dc241805934050f0837adf4a43b0c591)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_ef48037c7e2c5485b095770c89adc4dd)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e62e1370af8b572fa3effbf0a7e4267d)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_99c07777228553d5a8ce283de1b6621e)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_c1005076f85a5338aa00e144ac4e7b92)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_83714d8bf2dd57dda6b7ff95dedd0dc4)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_64d3e6cf33155b31a9705b66eee9a2f9)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_44cbfb5a05d45649aba2faa276a014b9)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_cf03140124f85aefbbd078eba8558625, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_6237119b58f250c78418b64e95c46596, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_592a1b7d7c4857428dfa01583a12324d, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_d126ecbe50f9543c81d3c118b9433901, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_2ee2447273c756369a91bc700d217b03, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_8e29aaac0a405dc5ad3900e9aef4b42a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_e00123f060f05d7bb0643fb4fba20e5a, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_ccbef7451e9c5ab1bcb054c635dde5b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_5c84cbd6dcf35c618a33c6fd06ea7e7b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_d1041fb66ce45024b857c4a7b9cf6e76, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_a82dccad73c1599c861d9493e1a77eeb, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_49f8abb1b09453c499e4d8430dcf6dd9, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_cd7b5dfcb7f2500caf0a383cef551f3e, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_c71b0c16a31b58e1b6a671b61af7bcdf, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_dc241805934050f0837adf4a43b0c591, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_ef48037c7e2c5485b095770c89adc4dd, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_e62e1370af8b572fa3effbf0a7e4267d, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_99c07777228553d5a8ce283de1b6621e, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_c1005076f85a5338aa00e144ac4e7b92, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_83714d8bf2dd57dda6b7ff95dedd0dc4, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_64d3e6cf33155b31a9705b66eee9a2f9, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_44cbfb5a05d45649aba2faa276a014b9, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}