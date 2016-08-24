#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_7a8dbb57ea425a4ca4c5329f099a1ce8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ParmVarDecl  * (*method_pointer_25c48256a9b85b79af328c7cee85c986)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ParmVarDecl::CreateDeserialized;
    bool  (*method_pointer_860aca9287f252dab0496153d6195135)(class ::clang::Decl  const *) = ::clang::ParmVarDecl::classof;
    bool  (*method_pointer_220a7d5755c35001b9a3a362bb144d1e)(enum ::clang::Decl::Kind ) = ::clang::ParmVarDecl::classofKind;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_83028a8da039507b83e6ea8f3e858d6b)() const = &::clang::ParmVarDecl::getFunctionScopeDepth;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_6d0e108c36d5561e94769ef41f0a422b)() const = &::clang::ParmVarDecl::getFunctionScopeIndex;
    class ::clang::QualType  (::clang::ParmVarDecl::*method_pointer_d72cf17dd7415bc8aebac6d1b83c7482)() const = &::clang::ParmVarDecl::getOriginalType;
    bool  (::clang::ParmVarDecl::*method_pointer_019aed36f9825693a9caaa3785aa48dc)() const = &::clang::ParmVarDecl::hasDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_5ff3ee08090d5f9baa6bfff0f895ecb1)() const = &::clang::ParmVarDecl::hasInheritedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_4dad1bdb22fe50af8cfe66bf18fc9567)() const = &::clang::ParmVarDecl::hasUninstantiatedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_f67909c6b8875bc6b0f02b77ff8e6d73)() const = &::clang::ParmVarDecl::hasUnparsedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_4b8eea187fc45b16a5438e4f05cb63c2)() const = &::clang::ParmVarDecl::isKNRPromoted;
    bool  (::clang::ParmVarDecl::*method_pointer_09f3e0341a8c59ab8f11e82879098346)() const = &::clang::ParmVarDecl::isObjCMethodParameter;
    bool  (::clang::ParmVarDecl::*method_pointer_1079590ac9fe5e6eb1ee5082dea600f9)() const = &::clang::ParmVarDecl::isParameterPack;
    void  (::clang::ParmVarDecl::*method_pointer_e6cdef9abeb451298c8f73684e9a2b86)(bool ) = &::clang::ParmVarDecl::setHasInheritedDefaultArg;
    void  (::clang::ParmVarDecl::*method_pointer_2f2c388d6ff15b80997a193d843ed652)(bool ) = &::clang::ParmVarDecl::setKNRPromoted;
    void  (::clang::ParmVarDecl::*method_pointer_116bacc96e335d3ba2d08161d942ad35)(unsigned int ) = &::clang::ParmVarDecl::setObjCMethodScopeInfo;
    void  (::clang::ParmVarDecl::*method_pointer_a0cc394fecb55d6fba215e5440ffd23c)(class ::clang::DeclContext  *) = &::clang::ParmVarDecl::setOwningFunction;
    void  (::clang::ParmVarDecl::*method_pointer_1755db560a13594f9fece1132d5e64d5)(unsigned int , unsigned int ) = &::clang::ParmVarDecl::setScopeInfo;
    void  (::clang::ParmVarDecl::*method_pointer_e4b5fc2751e252cf897adeaf4f7a4bea)() = &::clang::ParmVarDecl::setUnparsedDefaultArg;
    boost::python::class_< class ::clang::ParmVarDecl, autowig::HeldType< class ::clang::ParmVarDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_7a8dbb57ea425a4ca4c5329f099a1ce8("ParmVarDecl", "", boost::python::no_init);
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("create_deserialized", method_pointer_25c48256a9b85b79af328c7cee85c986, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof", method_pointer_860aca9287f252dab0496153d6195135, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof_kind", method_pointer_220a7d5755c35001b9a3a362bb144d1e, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_depth", method_pointer_83028a8da039507b83e6ea8f3e858d6b, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_index", method_pointer_6d0e108c36d5561e94769ef41f0a422b, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_original_type", method_pointer_d72cf17dd7415bc8aebac6d1b83c7482, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_default_arg", method_pointer_019aed36f9825693a9caaa3785aa48dc, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_inherited_default_arg", method_pointer_5ff3ee08090d5f9baa6bfff0f895ecb1, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_uninstantiated_default_arg", method_pointer_4dad1bdb22fe50af8cfe66bf18fc9567, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_unparsed_default_arg", method_pointer_f67909c6b8875bc6b0f02b77ff8e6d73, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_knr_promoted", method_pointer_4b8eea187fc45b16a5438e4f05cb63c2, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_obj_c_method_parameter", method_pointer_09f3e0341a8c59ab8f11e82879098346, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_parameter_pack", method_pointer_1079590ac9fe5e6eb1ee5082dea600f9, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_has_inherited_default_arg", method_pointer_e6cdef9abeb451298c8f73684e9a2b86, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_knr_promoted", method_pointer_2f2c388d6ff15b80997a193d843ed652, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_obj_c_method_scope_info", method_pointer_116bacc96e335d3ba2d08161d942ad35, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_owning_function", method_pointer_a0cc394fecb55d6fba215e5440ffd23c, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_scope_info", method_pointer_1755db560a13594f9fece1132d5e64d5, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_unparsed_default_arg", method_pointer_e4b5fc2751e252cf897adeaf4f7a4bea, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof_kind");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("create_deserialized");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ParmVarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ParmVarDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}