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
    class ::clang::CXXConstructorDecl  * (*method_pointer_c220c64840505bf38f4dd7f2e4635588)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_e49d076978455fb1b98e58cf7b45cc08)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_d203c09fb3115465ba83cabc3d08c4b0)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_d305bd2e1e1a5bda89d98931d5efe25e)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_754947ca2de457fba7177a1ade3a39d1)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_134004959d015cc9af3f2e811ceefc3f)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_00834d7d55415fe48470c5139391ec0b)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_50db83e35c185ec2a9146a68de5e3633)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_c1a3e613625651088057669730327a46)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_99952350993551a2b4adec84d3156329)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_5c75f343f6f451d8a8b89b0a6176e926)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_909aa04b5d3c56fbb9df4fae6f687392)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_7bd47c559f9d5e1c9ccd132d7afadf7b)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_8cab196fe5f159838b6d9c424c85fd47)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_60983cc0b2bb5ad181dd406cfb3144bb)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_12fde17e33ad5be88511ac332a0c70b7)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_5d980eec29ee540abc07cf43c4f8cbb6)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_85762f86cb965976bc1e3ea8dd9c23b2)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_9c437e68aff059dd981ea288d6fd000c)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e3104a27022c5dd3b2684320b7d7b1fe)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_42802c0c1d295f4c8accfcedcd16c96a)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_8f4ec5e160c65d159ebe1260235722b0)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_c220c64840505bf38f4dd7f2e4635588, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_e49d076978455fb1b98e58cf7b45cc08, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_d203c09fb3115465ba83cabc3d08c4b0, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_d305bd2e1e1a5bda89d98931d5efe25e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_754947ca2de457fba7177a1ade3a39d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_134004959d015cc9af3f2e811ceefc3f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_00834d7d55415fe48470c5139391ec0b, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_50db83e35c185ec2a9146a68de5e3633, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_c1a3e613625651088057669730327a46, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_99952350993551a2b4adec84d3156329, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_5c75f343f6f451d8a8b89b0a6176e926, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_909aa04b5d3c56fbb9df4fae6f687392, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_7bd47c559f9d5e1c9ccd132d7afadf7b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_8cab196fe5f159838b6d9c424c85fd47, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_60983cc0b2bb5ad181dd406cfb3144bb, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_12fde17e33ad5be88511ac332a0c70b7, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_5d980eec29ee540abc07cf43c4f8cbb6, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_85762f86cb965976bc1e3ea8dd9c23b2, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_9c437e68aff059dd981ea288d6fd000c, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_e3104a27022c5dd3b2684320b7d7b1fe, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_42802c0c1d295f4c8accfcedcd16c96a, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_8f4ec5e160c65d159ebe1260235722b0, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}