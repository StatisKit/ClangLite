#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ConstructorUsingShadowDecl const volatile * get_pointer<class ::clang::ConstructorUsingShadowDecl const volatile >(class ::clang::ConstructorUsingShadowDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1826ae426a86563c999d176eb03c6750()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ConstructorUsingShadowDecl * (*method_pointer_c4b918ac39155b0a900dcfa85e003fbb)(class ::clang::ASTContext &, class ::clang::DeclContext *, class ::clang::SourceLocation , class ::clang::UsingDecl *, class ::clang::NamedDecl *, bool ) = ::clang::ConstructorUsingShadowDecl::Create;
    class ::clang::ConstructorUsingShadowDecl * (*method_pointer_945b3ec2717450468b643a3946c8a988)(class ::clang::ASTContext &, unsigned int ) = ::clang::ConstructorUsingShadowDecl::CreateDeserialized;
    class ::clang::CXXRecordDecl const * (::clang::ConstructorUsingShadowDecl::*method_pointer_7d8fe187704659bfbc68f3cb6eab2d86)() const = &::clang::ConstructorUsingShadowDecl::getParent;
    class ::clang::CXXRecordDecl * (::clang::ConstructorUsingShadowDecl::*method_pointer_bcd2883cdd7250bf8f30de7b6ced4b98)() = &::clang::ConstructorUsingShadowDecl::getParent;
    class ::clang::ConstructorUsingShadowDecl * (::clang::ConstructorUsingShadowDecl::*method_pointer_7478c6ce0ca65da18d9567c7013e9a06)() const = &::clang::ConstructorUsingShadowDecl::getNominatedBaseClassShadowDecl;
    class ::clang::ConstructorUsingShadowDecl * (::clang::ConstructorUsingShadowDecl::*method_pointer_4e1ee143b6335c02bd0367e52103afda)() const = &::clang::ConstructorUsingShadowDecl::getConstructedBaseClassShadowDecl;
    class ::clang::CXXRecordDecl * (::clang::ConstructorUsingShadowDecl::*method_pointer_8fef68184f2c588497447f16d34d765c)() const = &::clang::ConstructorUsingShadowDecl::getNominatedBaseClass;
    class ::clang::CXXRecordDecl * (::clang::ConstructorUsingShadowDecl::*method_pointer_f8b32b454cbd5e3baf27e2ddc1f9b1f1)() const = &::clang::ConstructorUsingShadowDecl::getConstructedBaseClass;
    bool  (::clang::ConstructorUsingShadowDecl::*method_pointer_09d6ab552a86507f97e3f12c80b9eec6)() const = &::clang::ConstructorUsingShadowDecl::constructsVirtualBase;
    bool  (*method_pointer_fe76d27284825a60ba2aa933194150a9)(class ::clang::Decl const *) = ::clang::ConstructorUsingShadowDecl::classof;
    bool  (*method_pointer_28c10fe860ff54d49cd2f9581f46232c)(enum ::clang::Decl::Kind ) = ::clang::ConstructorUsingShadowDecl::classofKind;
    boost::python::class_< class ::clang::ConstructorUsingShadowDecl, autowig::Held< class ::clang::ConstructorUsingShadowDecl >::Type, boost::python::bases< class ::clang::UsingShadowDecl >, boost::noncopyable > class_1826ae426a86563c999d176eb03c6750("ConstructorUsingShadowDecl", "Represents a shadow constructor declaration introduced into a class by a\nC++11 using-declaration that names a constructor.\n\nFor example:\n\n", boost::python::no_init);
    class_1826ae426a86563c999d176eb03c6750.def("create", method_pointer_c4b918ac39155b0a900dcfa85e003fbb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1826ae426a86563c999d176eb03c6750.def("create_deserialized", method_pointer_945b3ec2717450468b643a3946c8a988, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1826ae426a86563c999d176eb03c6750.def("get_parent", method_pointer_7d8fe187704659bfbc68f3cb6eab2d86, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1826ae426a86563c999d176eb03c6750.def("get_parent", method_pointer_bcd2883cdd7250bf8f30de7b6ced4b98, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1826ae426a86563c999d176eb03c6750.def("get_nominated_base_class_shadow_decl", method_pointer_7478c6ce0ca65da18d9567c7013e9a06, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Get the inheriting constructor declaration for the direct base class\nfrom which this using shadow declaration was inherited, if there is one.\nThis can be different for each redeclaration of the same shadow decl.\n\n:Return Type:\n    :py:class:`clanglite.clang.ConstructorUsingShadowDecl`\n\n");
    class_1826ae426a86563c999d176eb03c6750.def("get_constructed_base_class_shadow_decl", method_pointer_4e1ee143b6335c02bd0367e52103afda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Get the inheriting constructor declaration for the base class for which\nwe don't have an explicit initializer, if there is one.\n\n:Return Type:\n    :py:class:`clanglite.clang.ConstructorUsingShadowDecl`\n\n");
    class_1826ae426a86563c999d176eb03c6750.def("get_nominated_base_class", method_pointer_8fef68184f2c588497447f16d34d765c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Get the base class that was named in the using declaration. This can be\ndifferent for each redeclaration of this same shadow decl.\n\n:Return Type:\n    :py:class:`clanglite.clang.CXXRecordDecl`\n\n");
    class_1826ae426a86563c999d176eb03c6750.def("get_constructed_base_class", method_pointer_f8b32b454cbd5e3baf27e2ddc1f9b1f1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Get the base class whose constructor or constructor shadow declaration\nis passed the constructor arguments.\n\n:Return Type:\n    :py:class:`clanglite.clang.CXXRecordDecl`\n\n");
    class_1826ae426a86563c999d176eb03c6750.def("constructs_virtual_base", method_pointer_09d6ab552a86507f97e3f12c80b9eec6, "Returns :raw-latex:`\\c t`rue if the constructed base class is a virtual\nbase class subobject of this declaration's class.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_1826ae426a86563c999d176eb03c6750.def("classof", method_pointer_fe76d27284825a60ba2aa933194150a9, "");
    class_1826ae426a86563c999d176eb03c6750.def("classof_kind", method_pointer_28c10fe860ff54d49cd2f9581f46232c, "");
    class_1826ae426a86563c999d176eb03c6750.staticmethod("classof_kind");
    class_1826ae426a86563c999d176eb03c6750.staticmethod("create");
    class_1826ae426a86563c999d176eb03c6750.staticmethod("create_deserialized");
    class_1826ae426a86563c999d176eb03c6750.staticmethod("classof");

    if(autowig::Held< class ::clang::ConstructorUsingShadowDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ConstructorUsingShadowDecl >::Type, autowig::Held< class ::clang::UsingShadowDecl >::Type >();
    }

}