#include "_clanglite.h"

class ::clang::OMPDeclareReductionDecl * (*method_pointer_306aa87c0260521e8b2093a2ad5302e8)(class ::clang::ASTContext &, unsigned int )= ::clang::OMPDeclareReductionDecl::CreateDeserialized;
class ::clang::OMPDeclareReductionDecl * (::clang::OMPDeclareReductionDecl::*method_pointer_6ac92a226c545aa1806dd78214db0714)()= &::clang::OMPDeclareReductionDecl::getPrevDeclInScope;
class ::clang::OMPDeclareReductionDecl const * (::clang::OMPDeclareReductionDecl::*method_pointer_5f16c48ac9525b46bf18a1d7b7d49d5c)()const= &::clang::OMPDeclareReductionDecl::getPrevDeclInScope;
bool  (*method_pointer_c939b353d7b359e9ac02d17e5567d8e2)(class ::clang::Decl const *)= ::clang::OMPDeclareReductionDecl::classof;
bool  (*method_pointer_669c1dea49e6536e9e11ec37484979ac)(enum ::clang::Decl::Kind )= ::clang::OMPDeclareReductionDecl::classofKind;
class ::clang::DeclContext * (*method_pointer_3af69c3efb7c57cdacb0e8e509b0d186)(class ::clang::OMPDeclareReductionDecl const *)= ::clang::OMPDeclareReductionDecl::castToDeclContext;
class ::clang::OMPDeclareReductionDecl * (*method_pointer_eee1d3d0c952508ab94e14a1ef2dc0a8)(class ::clang::DeclContext const *)= ::clang::OMPDeclareReductionDecl::castFromDeclContext;


void wrapper_7a4ec52d516e59b3a51f6b4a2ec3dedc(pybind11::module& module)
{

    pybind11::class_<class ::clang::OMPDeclareReductionDecl, autowig::HolderType< class ::clang::OMPDeclareReductionDecl >::Type, class ::clang::ValueDecl, class ::clang::DeclContext > class_7a4ec52d516e59b3a51f6b4a2ec3dedc(module, "OMPDeclareReductionDecl", "This represents ‘#pragma omp declare reduction …’ directive. For\nexample, in the following, declared reduction ‘foo’ for types ‘int’ and\n‘float’:\n\n");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.def_static("create_deserialized", method_pointer_306aa87c0260521e8b2093a2ad5302e8, pybind11::return_value_policy::reference_internal, "Create deserialized declare reduction node.\n\n:Parameters:\n  - `C` (:cpp:class:`::clang::ASTContext`) - Undocumented\n  - `ID` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::OMPDeclareReductionDecl`\n\n");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.def("get_prev_decl_in_scope", method_pointer_6ac92a226c545aa1806dd78214db0714, pybind11::return_value_policy::reference_internal, "Get reference to previous declare reduction construct in the same scope\nwith the same name.\n\n:Return Type:\n    :cpp:class:`::clang::OMPDeclareReductionDecl`\n\n");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.def("get_prev_decl_in_scope", method_pointer_5f16c48ac9525b46bf18a1d7b7d49d5c, pybind11::return_value_policy::reference_internal, "");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.def_static("classof", method_pointer_c939b353d7b359e9ac02d17e5567d8e2, "");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.def_static("classof_kind", method_pointer_669c1dea49e6536e9e11ec37484979ac, "");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.def_static("cast_to_decl_context", method_pointer_3af69c3efb7c57cdacb0e8e509b0d186, pybind11::return_value_policy::reference_internal, "");
    class_7a4ec52d516e59b3a51f6b4a2ec3dedc.def_static("cast_from_decl_context", method_pointer_eee1d3d0c952508ab94e14a1ef2dc0a8, pybind11::return_value_policy::reference_internal, "");

}