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
    void  (::clang::CXXConstructorDecl::*method_pointer_37f31b0018735e72a119763865b0677a)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_1a265ca94f87506184fea2d0791b2e95)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_6d9573c81b83515fba1149d273bf7d34)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    bool  (::clang::CXXConstructorDecl::*method_pointer_016c92ff0b095ee2b5fbd79409ce7aec)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    bool  (::clang::CXXConstructorDecl::*method_pointer_b08e9331992a5479a1017f0e0327ce55)() const = &::clang::CXXConstructorDecl::isExplicit;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_2a81dc1fe9cf595cb49cb37df3b75d83)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_207bc0974e025638b75ddebd2748baf0)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_80c5fdc6365154bb9c0047f6955fe789)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_46917c996ccf51f2a222dce3002d853d)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_c6c2ac93ae1d5386997939ce0b4feaba)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    bool  (*method_pointer_87e91b4345785d9cb97805cfd0f3711e)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (::clang::CXXConstructorDecl::*method_pointer_0c667f17f31e5670b7e0769e51e2c05f)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    class ::clang::CXXConstructorDecl  * (*method_pointer_80fe96c8dd7b577383b3d51632d3dfd3)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4599b6b5d3345ea7ba328b3cab01df64)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_ec7f389fcc185c87b39be83de4f335f4)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_555e25d2920456aba34ed81cd16d8406)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_1a89091a311e5f93873b29b6a50c4942)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    bool  (::clang::CXXConstructorDecl::*method_pointer_8240764566ce5fb8baf89f9496fd683b)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_7c9546976cff5d54bc730f1c8629d519)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f2be7986cc2b5a27b923cf66ef3ad8bb)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (*method_pointer_5ee5b2e86dfd543aa34c34d960545b61)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    bool  (::clang::CXXConstructorDecl::*method_pointer_76623bde60ad5c269c5d71e87fa3a904)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_37f31b0018735e72a119763865b0677a, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_1a265ca94f87506184fea2d0791b2e95, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_6d9573c81b83515fba1149d273bf7d34, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_016c92ff0b095ee2b5fbd79409ce7aec, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_b08e9331992a5479a1017f0e0327ce55, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_2a81dc1fe9cf595cb49cb37df3b75d83, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_207bc0974e025638b75ddebd2748baf0, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_80c5fdc6365154bb9c0047f6955fe789, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_46917c996ccf51f2a222dce3002d853d, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_c6c2ac93ae1d5386997939ce0b4feaba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_87e91b4345785d9cb97805cfd0f3711e, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_0c667f17f31e5670b7e0769e51e2c05f, "");
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_80fe96c8dd7b577383b3d51632d3dfd3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_4599b6b5d3345ea7ba328b3cab01df64, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_ec7f389fcc185c87b39be83de4f335f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_555e25d2920456aba34ed81cd16d8406, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_1a89091a311e5f93873b29b6a50c4942, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_8240764566ce5fb8baf89f9496fd683b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_7c9546976cff5d54bc730f1c8629d519, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_f2be7986cc2b5a27b923cf66ef3ad8bb, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_5ee5b2e86dfd543aa34c34d960545b61, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_76623bde60ad5c269c5d71e87fa3a904, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}