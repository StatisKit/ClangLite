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
    class ::clang::CXXConstructorDecl  * (*method_pointer_13fdc9f86a62589e8bdc99c8b6b4f317)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_01b2d12c3db8517dbc98a729dc9abc40)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_a4c861a0bdf2576fa3ef2b278beb7631)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_ff3f53548d6457a18f0ce2d71613e33d)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_b8df80f2e5d753f992aea27859c3ce5c)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_3f2096c37c935cd3a94b3d99b0144660)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_d8b1669abed853059775ba1199af5465)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_f8642e2be4345c52984aca351aa7d737)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_545c01835aa656e6a436060a7b97e813)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_bae9ae3086c45e27a912ff017353c3bf)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_9b1c33d4b5f5559294f156b5c29619b2)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_463d5d0f14e352fcbd6d858399495467)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_46f2ac20e53257adb29d6b6683753b24)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_829f711355e3532db3c331cb525632d3)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_fc4cf13ba35b5f28a6cca059d1f391e6)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_10db9bd5481b5d3483c0da56e7a61f62)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_0486437570ba507193961bdac7827c42)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_1262882523645366823a32b80d4aa5ef)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_84412ed7fc955b8ab8747e5aa28fd075)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_33c244a831835d53a37cdfa15635f93b)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_4c4ef2b7934c52bebbd6082ee80af018)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_87a931c22bdc5eb8a3ae97260922e975)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_13fdc9f86a62589e8bdc99c8b6b4f317, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_01b2d12c3db8517dbc98a729dc9abc40, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_a4c861a0bdf2576fa3ef2b278beb7631, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_ff3f53548d6457a18f0ce2d71613e33d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_b8df80f2e5d753f992aea27859c3ce5c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_3f2096c37c935cd3a94b3d99b0144660, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_d8b1669abed853059775ba1199af5465, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_f8642e2be4345c52984aca351aa7d737, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_545c01835aa656e6a436060a7b97e813, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_bae9ae3086c45e27a912ff017353c3bf, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_9b1c33d4b5f5559294f156b5c29619b2, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_463d5d0f14e352fcbd6d858399495467, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_46f2ac20e53257adb29d6b6683753b24, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_829f711355e3532db3c331cb525632d3, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_fc4cf13ba35b5f28a6cca059d1f391e6, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_10db9bd5481b5d3483c0da56e7a61f62, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_0486437570ba507193961bdac7827c42, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_1262882523645366823a32b80d4aa5ef, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_84412ed7fc955b8ab8747e5aa28fd075, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_33c244a831835d53a37cdfa15635f93b, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_4c4ef2b7934c52bebbd6082ee80af018, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_87a931c22bdc5eb8a3ae97260922e975, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}