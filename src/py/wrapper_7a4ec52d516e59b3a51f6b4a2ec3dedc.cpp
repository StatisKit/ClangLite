#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::OMPDeclareReductionDecl const volatile * get_pointer<class ::clang::OMPDeclareReductionDecl const volatile >(class ::clang::OMPDeclareReductionDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7a4ec52d516e59b3a51f6b4a2ec3dedc()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::OMPDeclareReductionDecl * (*method_pointer_306aa87c0260521e8b2093a2ad5302e8)(class ::clang::ASTContext &, unsigned int ) = ::clang::OMPDeclareReductionDecl::CreateDeserialized;
    class ::clang::OMPDeclareReductionDecl * (::clang::OMPDeclareReductionDecl::*method_pointer_6ac92a226c545aa1806dd78214db0714)() = &::clang::OMPDeclareReductionDecl::getPrevDeclInScope;
    class ::clang::OMPDeclareReductionDecl const * (::clang::OMPDeclareReductionDecl::*method_pointer_5f16c48ac9525b46bf18a1d7b7d49d5c)() const = &::clang::OMPDeclareReductionDecl::getPrevDeclInScope;
    bool  (*method_pointer_c939b353d7b359e9ac02d17e5567d8e2)(class ::clang::Decl const *) = ::clang::OMPDeclareReductionDecl::classof;
    bool  (*method_pointer_669c1dea49e6536e9e11ec37484979ac)(enum ::clang::Decl::Kind ) = ::clang::OMPDeclareReductionDecl::classofKind;
    class ::clang::DeclContext * (*method_pointer_3af69c3efb7c57cdacb0e8e509b0d186)(class ::clang::OMPDeclareReductionDecl const *) = ::clang::OMPDeclareReductionDecl::castToDeclContext;
    class ::clang::OMPDeclareReductionDecl * (*method_pointer_eee1d3d0c952508ab94e14a1ef2dc0a8)(class ::clang::DeclContext const *) = ::clang::OMPDeclareReductionDecl::castFromDeclContext;
    boost::python::class_< class ::clang::OMPDeclareReductionDecl, autowig::Held< class ::clang::OMPDeclareReductionDecl >::Type, boost::python::bases< class ::clang::ValueDecl, class ::clang::DeclContext >, boost::noncopyable > class_7a4ec52d516e59b3a51f6b4a2ec3dedc("OMPDeclareReductionDecl", "This represents '#pragma omp declare reduction ...' directive. For\nexample, in the following, declared reduction 'foo' for types 'int' and\n'float':\n\n", boost::python::no_init);
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.def("create_deserialized", method_pointer_306aa87c0260521e8b2093a2ad5302e8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Create deserialized declare reduction node.\n\n:Parameters:\n  - `C` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n  - `ID` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.OMPDeclareReductionDecl`\n\n");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.def("get_prev_decl_in_scope", method_pointer_6ac92a226c545aa1806dd78214db0714, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Get reference to previous declare reduction construct in the same scope\nwith the same name.\n\n:Return Type:\n    :py:class:`clanglite.clang.OMPDeclareReductionDecl`\n\n");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.def("get_prev_decl_in_scope", method_pointer_5f16c48ac9525b46bf18a1d7b7d49d5c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.def("classof", method_pointer_c939b353d7b359e9ac02d17e5567d8e2, "");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.def("classof_kind", method_pointer_669c1dea49e6536e9e11ec37484979ac, "");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.def("cast_to_decl_context", method_pointer_3af69c3efb7c57cdacb0e8e509b0d186, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.def("cast_from_decl_context", method_pointer_eee1d3d0c952508ab94e14a1ef2dc0a8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.staticmethod("classof_kind");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.staticmethod("create_deserialized");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.staticmethod("classof");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.staticmethod("cast_from_decl_context");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.staticmethod("cast_to_decl_context");

    if(autowig::Held< class ::clang::OMPDeclareReductionDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::OMPDeclareReductionDecl >::Type, autowig::Held< class ::clang::ValueDecl >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::clang::OMPDeclareReductionDecl >::Type, autowig::Held< class ::clang::DeclContext >::Type >();
    }

}