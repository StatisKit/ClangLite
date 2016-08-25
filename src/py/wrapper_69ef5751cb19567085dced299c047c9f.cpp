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
    class ::clang::CXXConstructorDecl  * (*method_pointer_2380edb1561055dba13262fd9298a21d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_d2ddee2943cd5f1a825d5bf2c590fee9)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_5aa08e12f4a35e6193dd39d170dfb85c)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_02d7666e37b55f25a027f8af3bda688b)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_3953bf45e4995eb7a9896fb7182b72cc)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_b1aef4fe405159c39660f183fde194a7)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_80c042bea17b5ac88e906bdec3b52fdf)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_2d212847c4bb5f6881d0dea682a47b58)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b312238ad0bf58419b184bfc7f6dae95)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_763f8a28476c5fdbacbae3f4c1432071)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_5a78fafe26205e8abf4aa543ac1f8d46)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_036443a2401058f0815263eca09cd91a)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_cf36d14ce30550deb94b071216d8a545)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b198a1bc5b0e54d19839497f91953aad)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_e1e736c1daa951c5a209f600f5eb3077)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_7dc03101f1e756e2bef8ff893113a166)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_1f40449c905056b2b5f319882fe88502)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_69a313b40c6d5af5a3dee494b548c983)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_09edf89e046c5186b90c51ae4d218c9e)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_1810407354b451068a7850465e66ef3d)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_35e509cabbfe5d62b8923aa3c6fc2f51)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_65e24c3ecfc4551688d09d53aad87706)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_2380edb1561055dba13262fd9298a21d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_d2ddee2943cd5f1a825d5bf2c590fee9, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_5aa08e12f4a35e6193dd39d170dfb85c, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_02d7666e37b55f25a027f8af3bda688b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_3953bf45e4995eb7a9896fb7182b72cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_b1aef4fe405159c39660f183fde194a7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_80c042bea17b5ac88e906bdec3b52fdf, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_2d212847c4bb5f6881d0dea682a47b58, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_b312238ad0bf58419b184bfc7f6dae95, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_763f8a28476c5fdbacbae3f4c1432071, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_5a78fafe26205e8abf4aa543ac1f8d46, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_036443a2401058f0815263eca09cd91a, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_cf36d14ce30550deb94b071216d8a545, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_b198a1bc5b0e54d19839497f91953aad, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_e1e736c1daa951c5a209f600f5eb3077, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_7dc03101f1e756e2bef8ff893113a166, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_1f40449c905056b2b5f319882fe88502, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_69a313b40c6d5af5a3dee494b548c983, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_09edf89e046c5186b90c51ae4d218c9e, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_1810407354b451068a7850465e66ef3d, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_35e509cabbfe5d62b8923aa3c6fc2f51, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_65e24c3ecfc4551688d09d53aad87706, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}