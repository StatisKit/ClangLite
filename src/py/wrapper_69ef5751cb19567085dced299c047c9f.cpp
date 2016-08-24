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
    class ::clang::CXXConstructorDecl  * (*method_pointer_92be319e724f5b13a9affbbd76fb7a70)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_ea684cb6258c52a7beb965399a31193a)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_76f7d0e6500b5484a61dc3dcdd69246f)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_4330b92dc16f5220abc493244d86e37e)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_c45318ec787f51049c4c559f33672c26)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_405b2b5956955576a1203367cd3a40e6)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_96c17064ddd356938e94722bbd64781d)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_d6b2ac7f6eb0596c9d6033eae653f0c6)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_570fff98aefa599192cc45f58a096220)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_2b41d2e6f53e53bb96b5c55fa8ef8b3e)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_493b2818e52550a6af88c1434b51feec)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_d4a425093bc055ea993816ce907fb88d)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_202e7062e45551b5bb9f4bc7b88734ff)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_ea1bc27a7c395747a3a578f363123b05)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_5d83c0e127285482bd026bb2e7a63309)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b57d2b10e90955ee8bc134936e65cbc1)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_40809c301e2c5708a72b527d4534d7c0)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_bbd7bf57e2bc56a6a6bcc7a9106de449)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_dae551f223095296a97e39ce81ba1c4d)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_6e4194f583855af2a6d797091bbd1c40)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_98985ca08ba757d6bbc109587a56168a)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_035602eef74c5420aa9fb2a2b7e2b86c)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_92be319e724f5b13a9affbbd76fb7a70, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_ea684cb6258c52a7beb965399a31193a, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_76f7d0e6500b5484a61dc3dcdd69246f, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_4330b92dc16f5220abc493244d86e37e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_c45318ec787f51049c4c559f33672c26, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_405b2b5956955576a1203367cd3a40e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_96c17064ddd356938e94722bbd64781d, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_d6b2ac7f6eb0596c9d6033eae653f0c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_570fff98aefa599192cc45f58a096220, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_2b41d2e6f53e53bb96b5c55fa8ef8b3e, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_493b2818e52550a6af88c1434b51feec, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_d4a425093bc055ea993816ce907fb88d, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_202e7062e45551b5bb9f4bc7b88734ff, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_ea1bc27a7c395747a3a578f363123b05, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_5d83c0e127285482bd026bb2e7a63309, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_b57d2b10e90955ee8bc134936e65cbc1, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_40809c301e2c5708a72b527d4534d7c0, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_bbd7bf57e2bc56a6a6bcc7a9106de449, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_dae551f223095296a97e39ce81ba1c4d, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_6e4194f583855af2a6d797091bbd1c40, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_98985ca08ba757d6bbc109587a56168a, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_035602eef74c5420aa9fb2a2b7e2b86c, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}