#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_99d3396ee242572bbeaada83b5e83165()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarDecl  * (*method_pointer_6436b1cf09305db9b562859373332009)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_7fad62f2640a5ee88f35698f2e7001c8)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_fb07cb0769a05ef086475bbce6c1e2b5)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_c815d1fdb1005883a3c1c4b50c51fd61)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_8123198af90b5226b6de5471640a0ffe)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_151a208a1ab254a2af4c136175bd5776)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_1f43137e5a315f35a14187fff79854a6)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_4b30c61677bc55e785012e749be7c142)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_efa0f3d014775e67a5b26de51962069b)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_e6099e9df1365a56b06b75016bd1486c)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_47c4e1d27d8b50e9bebff58e5d620afc)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_eab067e2296b501c88283f7585d814c4)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_15e97a057bda5a2394c080fef15407ff)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_791f76b2f54c5dc49678e518b7519eb6)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_6a58e58cfabe58e3945eeb49c01ecc53)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_0b3938f0628c5d849bfa5b63bdb14473)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_cc040aede14751f29a4aaf9a35025129)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_94a1dbc5cda35c4bb80e77fd4c8fb4da)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_7c66d351b0fa59d2b5db4fde7fe6eacf)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_55abc745a5de5f9d86b985788389e3d1)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_697298feac465c87b69b8b71e6a45f95)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_fb58cf71831c5741a1405448e3160080)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_61cb23eae93c5c20b276d6dfc2ba74d5)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_d50f66c0185d5644a789369961e67210)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_fd410f00eca056f18ab2faa1082b24f5)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_379ddabb761858189475abdc33aadfec)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_8f2b26a6e5b6586499ad0907ae3dc782)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_666d244c7a83504ba6616c05e768a886)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_f35d585a5cf053879d89d59a5ed8fb99)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_285ae7ec2434530399a495a967e26c15)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_18f45287960f56ea944bfa7e7a23c9d9)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_96b373c993835e839151a79d7482190a)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_12780413e7db56a3a86bc2c4c183577e)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_5d8fe20654835b0c858cc78e72876df3)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_6b30044486e85095aed3684bb6940872)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_51704a43489b5123b08bb7f720674d62)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_31bb70f8967f5bc0866354bc62c58b2e)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_c8d67a38d70959a1bd18275cba9f591a)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_34a5a408057257589c209ea607daccbb)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_21131aa4e1125ee59e47cfa01bd37803)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_6aee70595be8579eaeb7bf55bd68b070)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_16babd4c271459779789968ed003ea4b)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_aa7e8ac2aaae561db6d6ec6e87dfeaeb)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_2daedca86fb752c8bc9f36ee659cb323)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_1b9f5c125b9458bf85c2a2ad78f9f49b)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_3e3cba251cad5c6797b17fb2b67c2ad3)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_cabbaa8b66c95ba987c255f5d06f875b)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_38fc5b2a2f0752d0b7b3b418e898451d)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_eab3d569ecde5eb3b54f7b2ab370094e)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_82bac317753f5aa68f4c542eff8cccad)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_7aca403aa49859c7ae4617c4795a5dbe)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_6436b1cf09305db9b562859373332009, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_7fad62f2640a5ee88f35698f2e7001c8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_fb07cb0769a05ef086475bbce6c1e2b5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_c815d1fdb1005883a3c1c4b50c51fd61, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_8123198af90b5226b6de5471640a0ffe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_151a208a1ab254a2af4c136175bd5776, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_1f43137e5a315f35a14187fff79854a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_4b30c61677bc55e785012e749be7c142, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_efa0f3d014775e67a5b26de51962069b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_e6099e9df1365a56b06b75016bd1486c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_47c4e1d27d8b50e9bebff58e5d620afc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_eab067e2296b501c88283f7585d814c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_15e97a057bda5a2394c080fef15407ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_791f76b2f54c5dc49678e518b7519eb6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_6a58e58cfabe58e3945eeb49c01ecc53, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_0b3938f0628c5d849bfa5b63bdb14473, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_cc040aede14751f29a4aaf9a35025129, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_94a1dbc5cda35c4bb80e77fd4c8fb4da, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_7c66d351b0fa59d2b5db4fde7fe6eacf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_55abc745a5de5f9d86b985788389e3d1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_697298feac465c87b69b8b71e6a45f95, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_fb58cf71831c5741a1405448e3160080, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_61cb23eae93c5c20b276d6dfc2ba74d5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_d50f66c0185d5644a789369961e67210, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_fd410f00eca056f18ab2faa1082b24f5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_379ddabb761858189475abdc33aadfec, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_8f2b26a6e5b6586499ad0907ae3dc782, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_666d244c7a83504ba6616c05e768a886, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_f35d585a5cf053879d89d59a5ed8fb99, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_285ae7ec2434530399a495a967e26c15, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_18f45287960f56ea944bfa7e7a23c9d9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_96b373c993835e839151a79d7482190a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_12780413e7db56a3a86bc2c4c183577e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_5d8fe20654835b0c858cc78e72876df3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_6b30044486e85095aed3684bb6940872, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_51704a43489b5123b08bb7f720674d62, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_31bb70f8967f5bc0866354bc62c58b2e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_c8d67a38d70959a1bd18275cba9f591a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_34a5a408057257589c209ea607daccbb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_21131aa4e1125ee59e47cfa01bd37803, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_6aee70595be8579eaeb7bf55bd68b070, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_16babd4c271459779789968ed003ea4b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_aa7e8ac2aaae561db6d6ec6e87dfeaeb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_2daedca86fb752c8bc9f36ee659cb323, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_1b9f5c125b9458bf85c2a2ad78f9f49b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_3e3cba251cad5c6797b17fb2b67c2ad3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_cabbaa8b66c95ba987c255f5d06f875b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_38fc5b2a2f0752d0b7b3b418e898451d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_eab3d569ecde5eb3b54f7b2ab370094e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_82bac317753f5aa68f4c542eff8cccad, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_7aca403aa49859c7ae4617c4795a5dbe, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}