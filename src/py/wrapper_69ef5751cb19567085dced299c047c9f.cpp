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
    class ::clang::CXXConstructorDecl  * (*method_pointer_0aae305540ab5dd2b1317f83cb1c744b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_364d8f17e7b75e7bbebfe2956362eeab)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_ad24ad1104eb505da892f04d9c879f3e)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_2183170caa3258858cf8f137566b0626)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_889a39299a1b51b78950bfbd4036195e)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_13caf8b048d65d4f9b5ba38f06c044c3)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_8ae5610add5c511da871eb9dc082a73d)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_d895c5773f505a8885102d5484c1e5aa)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_bb66ed40ee3f5e949fd8f4c41cf3014e)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_19d5dd2e236750c7ad8229aa2ab99627)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_8f45ac4ac70959228cbc3c5be42583ea)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_a28df09946975f398359a2a9d5f8c973)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_c65b522d664c51c4864f17fbf63b9c80)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e9575bbf2c455b3d9ccb931ad353264f)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_6656c62e85c151c7adcc8a046de0ff9b)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_2485e9a25e8456be970cfd4a3fc30dbe)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_5812fe2ab6245b5a9cb7117a9eaedc4c)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4d20a2e7ab565f54aec9ee137a911152)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_01b4bf1527a95b96b5a0bd88aeab1df6)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_941f9bfdafc95075b592c0c196bff3b9)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_ba3e67fd0f6658338b6c68fc8d9fd653)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_0715b615a011559b895756d9297bff81)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_0aae305540ab5dd2b1317f83cb1c744b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_364d8f17e7b75e7bbebfe2956362eeab, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_ad24ad1104eb505da892f04d9c879f3e, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_2183170caa3258858cf8f137566b0626, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_889a39299a1b51b78950bfbd4036195e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_13caf8b048d65d4f9b5ba38f06c044c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_8ae5610add5c511da871eb9dc082a73d, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_d895c5773f505a8885102d5484c1e5aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_bb66ed40ee3f5e949fd8f4c41cf3014e, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_19d5dd2e236750c7ad8229aa2ab99627, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_8f45ac4ac70959228cbc3c5be42583ea, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_a28df09946975f398359a2a9d5f8c973, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_c65b522d664c51c4864f17fbf63b9c80, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_e9575bbf2c455b3d9ccb931ad353264f, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_6656c62e85c151c7adcc8a046de0ff9b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_2485e9a25e8456be970cfd4a3fc30dbe, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_5812fe2ab6245b5a9cb7117a9eaedc4c, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_4d20a2e7ab565f54aec9ee137a911152, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_01b4bf1527a95b96b5a0bd88aeab1df6, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_941f9bfdafc95075b592c0c196bff3b9, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_ba3e67fd0f6658338b6c68fc8d9fd653, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_0715b615a011559b895756d9297bff81, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}