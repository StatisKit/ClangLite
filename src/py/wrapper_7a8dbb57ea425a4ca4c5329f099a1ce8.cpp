#include "_clanglite.h"


namespace autowig
{
}


void wrapper_7a8dbb57ea425a4ca4c5329f099a1ce8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ParmVarDecl  * (*method_pointer_55af58bfc5b55482bdc980260156d444)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ParmVarDecl::CreateDeserialized;
    bool  (*method_pointer_bee7c06140d15dafa8e7aad388e93a43)(class ::clang::Decl  const *) = ::clang::ParmVarDecl::classof;
    bool  (*method_pointer_8dcfd59d0406517b81ef5da8eddcfb69)(enum ::clang::Decl::Kind ) = ::clang::ParmVarDecl::classofKind;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_ebc262a2e20d5fa49e99fbd328ffef3f)() const = &::clang::ParmVarDecl::getFunctionScopeDepth;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_7269742287705a84a4699b3540033c75)() const = &::clang::ParmVarDecl::getFunctionScopeIndex;
    class ::clang::QualType  (::clang::ParmVarDecl::*method_pointer_88c78f9ec03e579fb5e0090032f8d91d)() const = &::clang::ParmVarDecl::getOriginalType;
    bool  (::clang::ParmVarDecl::*method_pointer_01e8258cd9ba548891ccc5c97bb76014)() const = &::clang::ParmVarDecl::hasDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_05350542fa2a50e5bff7547847568050)() const = &::clang::ParmVarDecl::hasInheritedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_c486f801ec3758e6a0c498f9a6573ea5)() const = &::clang::ParmVarDecl::hasUninstantiatedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_21771dd9cfbd5a69a2a4e749a895be74)() const = &::clang::ParmVarDecl::hasUnparsedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_f38e19aee917584a87989dee512d5358)() const = &::clang::ParmVarDecl::isKNRPromoted;
    bool  (::clang::ParmVarDecl::*method_pointer_60806bac072e5780be032a500269d003)() const = &::clang::ParmVarDecl::isObjCMethodParameter;
    bool  (::clang::ParmVarDecl::*method_pointer_3fb3b01d92625983a46137596821adc2)() const = &::clang::ParmVarDecl::isParameterPack;
    void  (::clang::ParmVarDecl::*method_pointer_eb4491fda33353f7a890bbe7447d9842)(bool ) = &::clang::ParmVarDecl::setHasInheritedDefaultArg;
    void  (::clang::ParmVarDecl::*method_pointer_76385f56bdf252cbacbbedbb1e8c5b6e)(bool ) = &::clang::ParmVarDecl::setKNRPromoted;
    void  (::clang::ParmVarDecl::*method_pointer_0bb2714e49e950b3af5cfcaf2dda3643)(unsigned int ) = &::clang::ParmVarDecl::setObjCMethodScopeInfo;
    void  (::clang::ParmVarDecl::*method_pointer_3f12993f62695ed0869f94ba1f929592)(class ::clang::DeclContext  *) = &::clang::ParmVarDecl::setOwningFunction;
    void  (::clang::ParmVarDecl::*method_pointer_f3b217ef40c15455ad42d8da5731bbf0)(unsigned int , unsigned int ) = &::clang::ParmVarDecl::setScopeInfo;
    void  (::clang::ParmVarDecl::*method_pointer_47d57ff6f90c5f6e9ac53f37935529da)() = &::clang::ParmVarDecl::setUnparsedDefaultArg;
    boost::python::class_< class ::clang::ParmVarDecl, autowig::HeldType< class ::clang::ParmVarDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_7a8dbb57ea425a4ca4c5329f099a1ce8("ParmVarDecl", "", boost::python::no_init);
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("create_deserialized", method_pointer_55af58bfc5b55482bdc980260156d444, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof", method_pointer_bee7c06140d15dafa8e7aad388e93a43, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof_kind", method_pointer_8dcfd59d0406517b81ef5da8eddcfb69, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_depth", method_pointer_ebc262a2e20d5fa49e99fbd328ffef3f, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_index", method_pointer_7269742287705a84a4699b3540033c75, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_original_type", method_pointer_88c78f9ec03e579fb5e0090032f8d91d, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_default_arg", method_pointer_01e8258cd9ba548891ccc5c97bb76014, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_inherited_default_arg", method_pointer_05350542fa2a50e5bff7547847568050, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_uninstantiated_default_arg", method_pointer_c486f801ec3758e6a0c498f9a6573ea5, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_unparsed_default_arg", method_pointer_21771dd9cfbd5a69a2a4e749a895be74, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_knr_promoted", method_pointer_f38e19aee917584a87989dee512d5358, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_obj_c_method_parameter", method_pointer_60806bac072e5780be032a500269d003, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_parameter_pack", method_pointer_3fb3b01d92625983a46137596821adc2, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_has_inherited_default_arg", method_pointer_eb4491fda33353f7a890bbe7447d9842, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_knr_promoted", method_pointer_76385f56bdf252cbacbbedbb1e8c5b6e, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_obj_c_method_scope_info", method_pointer_0bb2714e49e950b3af5cfcaf2dda3643, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_owning_function", method_pointer_3f12993f62695ed0869f94ba1f929592, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_scope_info", method_pointer_f3b217ef40c15455ad42d8da5731bbf0, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_unparsed_default_arg", method_pointer_47d57ff6f90c5f6e9ac53f37935529da, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof_kind");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("create_deserialized");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ParmVarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ParmVarDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}