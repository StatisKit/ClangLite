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
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_bd6c65c831ee507e82ca9e9ecceb7681)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    bool  (::clang::CXXConstructorDecl::*method_pointer_047b25b4aba658d590c29ca76270e119)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_5479e719f7bb50cabf1b90b4ee2b5dc0)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_5a8b11cba75759578f2ed5438d446c63)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_97cbb3d7e9d35b01b5824187b4421b49)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    bool  (::clang::CXXConstructorDecl::*method_pointer_6bd2a1ffc8dd525da5ba0bbe15750497)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_f8c68ac8c3515dde997b57f39226365e)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_68c45ba478e65b1b89e49fede9702960)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    class ::clang::CXXConstructorDecl  * (*method_pointer_19e7959288ef5fbcbfefc5478b4f961d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (::clang::CXXConstructorDecl::*method_pointer_3ed165a6bc7f5317bd5d54f44d27931b)() const = &::clang::CXXConstructorDecl::isExplicit;
    void  (::clang::CXXConstructorDecl::*method_pointer_808cb6cbca9f5a6aa43c7480fcf0bd56)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_fced10e65e85546892cdf53a395c5bdc)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4fd14869dcc4569a9dfe453318cb011a)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_c961d96cd1b95349b1bbea34795c0366)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    bool  (::clang::CXXConstructorDecl::*method_pointer_a825ee811ba156599efd44c9aca33f82)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (*method_pointer_13b92b1be7c45a9aa3809398cb1606d3)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_2ee2880d923a5314923600e31e7195d3)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    void  (::clang::CXXConstructorDecl::*method_pointer_9a26102175205547897076f73a5517b3)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_1b047b533b525e328da0a5b6efac1afc)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_125f5ac3161f5b7db7e47b30f1f753f5)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_5beab706cf585d6b966837d9806c00a0)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_6c37a4e8ad825da6843076148441a303)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_bd6c65c831ee507e82ca9e9ecceb7681, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_047b25b4aba658d590c29ca76270e119, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_5479e719f7bb50cabf1b90b4ee2b5dc0, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_5a8b11cba75759578f2ed5438d446c63, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_97cbb3d7e9d35b01b5824187b4421b49, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_6bd2a1ffc8dd525da5ba0bbe15750497, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_f8c68ac8c3515dde997b57f39226365e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_68c45ba478e65b1b89e49fede9702960, "");
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_19e7959288ef5fbcbfefc5478b4f961d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_3ed165a6bc7f5317bd5d54f44d27931b, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_808cb6cbca9f5a6aa43c7480fcf0bd56, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_fced10e65e85546892cdf53a395c5bdc, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_4fd14869dcc4569a9dfe453318cb011a, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_c961d96cd1b95349b1bbea34795c0366, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_a825ee811ba156599efd44c9aca33f82, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_13b92b1be7c45a9aa3809398cb1606d3, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_2ee2880d923a5314923600e31e7195d3, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_9a26102175205547897076f73a5517b3, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_1b047b533b525e328da0a5b6efac1afc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_125f5ac3161f5b7db7e47b30f1f753f5, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_5beab706cf585d6b966837d9806c00a0, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_6c37a4e8ad825da6843076148441a303, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}