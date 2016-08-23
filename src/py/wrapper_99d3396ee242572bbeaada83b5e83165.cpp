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
    class ::clang::VarDecl  * (*method_pointer_631acf14c4225a8583ad33eb1cecd002)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_1d6127199c0f561e9b8675f99e0b179e)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_ff4d932666905f62bf8a5fc1b9d6a4f2)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_7fdac9f216b65119a0141f3f4040eafe)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_94a4df3682955a679b7638b437696429)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_b4ecab06435f5344afc11119d34e2415)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_13bd34f51f97561ebd708be798d490c2)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_39ec9e07c04c55b6821d8facda873235)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_48ad0d96ca4f5de7a6ca1adceeb28f4f)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_da196d1d362651b3835ed2f4a73d1848)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_633ab015a3475acaa278adb845b5a7a6)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_c6b8fde1f6de51d5aa05c2f188a86394)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_7239ff3d05155c1084db48c67a2afea2)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_bfa9ea7c4a81511e9315eb12528cb246)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_b5fa6e571c005b4abdf9b4bca85018fb)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_59e539c118e251db9efbf54742999f2d)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_4b1d3bd05fe453ebae63aac00f244ca0)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_1a4f13598e4c5450b623601d4fbc0003)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_e617f9e0589959eca7918e22c42e0570)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_2dd3e8a26f2159eeb692710759ac7b9b)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_a73401b0c2865daab0bd7bb33345c519)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_f22d38a5e9445220a0ab489ddbee10f1)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_6c881a50d993586ca052fb9a48beed6f)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_b7a0b3cae0b05d028c8e33759893bd46)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_225a1d750f79540d8177695d398f386f)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_75c2ccbe7e56589db774ce5a8c6cc762)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_015640206be250fe928348aaea6d6e3c)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_182a0808828e58d7980b131ba1e8f392)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_50045552495f58e9a6436d45324915a4)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_100c9d42c86e584c844c94a872636ae0)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_ac8c089c1ac85441b05664d244bb3196)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_c7cbc47d10875e2fa1be6f9d497ce1f9)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_74f89da0feea55efa40392896fabe238)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_d11d9208d2c756318344ea02050a71fe)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_b580c307a8f6531b8a7b3a74c08daf23)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_7b3a8462dccb57b0a195a15c994d9b64)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_c4f9a8bf389c511fad3b36be82c5c199)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_164e22695c6850cda879919fa3ab58c0)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_4ee0470b56be5ec0a35876823f7fcd96)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_a64da3bf6dc85e2e838570010c662a15)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_a4eb4c266ee9530ba5158a881eed928b)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_e7fafe3fb35056aa9577dd3dd22cebce)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_ce1236b7bf9a5d73aaeb15122accf808)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_3cd9e33d4e8059f4a22b2e05d92f14ea)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_0447df265ce151a4ae6aa99c34a2f7c8)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_ee47aa6a518b5af8818a11f46a9f3e23)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_366cf1907e905f75a9c95bba7a47c21a)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_44cba684399259bba258950b606c097e)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_754a238e66df51ab9c6e20c973f47a65)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_7be1ff7655ea590482c487e1e4ee8aaf)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_631acf14c4225a8583ad33eb1cecd002, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_1d6127199c0f561e9b8675f99e0b179e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_ff4d932666905f62bf8a5fc1b9d6a4f2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_7fdac9f216b65119a0141f3f4040eafe, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_94a4df3682955a679b7638b437696429, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_b4ecab06435f5344afc11119d34e2415, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_13bd34f51f97561ebd708be798d490c2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_39ec9e07c04c55b6821d8facda873235, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_48ad0d96ca4f5de7a6ca1adceeb28f4f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_da196d1d362651b3835ed2f4a73d1848, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_633ab015a3475acaa278adb845b5a7a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_c6b8fde1f6de51d5aa05c2f188a86394, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_7239ff3d05155c1084db48c67a2afea2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_bfa9ea7c4a81511e9315eb12528cb246, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_b5fa6e571c005b4abdf9b4bca85018fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_59e539c118e251db9efbf54742999f2d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_4b1d3bd05fe453ebae63aac00f244ca0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_1a4f13598e4c5450b623601d4fbc0003, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_e617f9e0589959eca7918e22c42e0570, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_2dd3e8a26f2159eeb692710759ac7b9b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_a73401b0c2865daab0bd7bb33345c519, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_f22d38a5e9445220a0ab489ddbee10f1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_6c881a50d993586ca052fb9a48beed6f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_b7a0b3cae0b05d028c8e33759893bd46, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_225a1d750f79540d8177695d398f386f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_75c2ccbe7e56589db774ce5a8c6cc762, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_015640206be250fe928348aaea6d6e3c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_182a0808828e58d7980b131ba1e8f392, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_50045552495f58e9a6436d45324915a4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_100c9d42c86e584c844c94a872636ae0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_ac8c089c1ac85441b05664d244bb3196, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_c7cbc47d10875e2fa1be6f9d497ce1f9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_74f89da0feea55efa40392896fabe238, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_d11d9208d2c756318344ea02050a71fe, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_b580c307a8f6531b8a7b3a74c08daf23, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_7b3a8462dccb57b0a195a15c994d9b64, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_c4f9a8bf389c511fad3b36be82c5c199, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_164e22695c6850cda879919fa3ab58c0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_4ee0470b56be5ec0a35876823f7fcd96, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_a64da3bf6dc85e2e838570010c662a15, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_a4eb4c266ee9530ba5158a881eed928b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_e7fafe3fb35056aa9577dd3dd22cebce, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_ce1236b7bf9a5d73aaeb15122accf808, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_3cd9e33d4e8059f4a22b2e05d92f14ea, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_0447df265ce151a4ae6aa99c34a2f7c8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_ee47aa6a518b5af8818a11f46a9f3e23, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_366cf1907e905f75a9c95bba7a47c21a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_44cba684399259bba258950b606c097e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_754a238e66df51ab9c6e20c973f47a65, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_7be1ff7655ea590482c487e1e4ee8aaf, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}