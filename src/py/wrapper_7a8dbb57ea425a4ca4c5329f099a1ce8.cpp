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
    class ::clang::ParmVarDecl  * (*method_pointer_5d3867ed26f05353a849d2f6059f7dab)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ParmVarDecl::CreateDeserialized;
    bool  (*method_pointer_c268794f132d57c5a5f7e86d8728f995)(class ::clang::Decl  const *) = ::clang::ParmVarDecl::classof;
    bool  (*method_pointer_84e70f7344175048baa59ad4f93164dc)(enum ::clang::Decl::Kind ) = ::clang::ParmVarDecl::classofKind;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_f6676ddc79e055c6a05f4399678bb9df)() const = &::clang::ParmVarDecl::getFunctionScopeDepth;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_fdbcf33eca2b5566b2fd578c08128564)() const = &::clang::ParmVarDecl::getFunctionScopeIndex;
    class ::clang::QualType  (::clang::ParmVarDecl::*method_pointer_7938681861ce5e5b90c2bc2cb91778fb)() const = &::clang::ParmVarDecl::getOriginalType;
    bool  (::clang::ParmVarDecl::*method_pointer_453d45e1fa7357e597b09b044f12d894)() const = &::clang::ParmVarDecl::hasDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_3a4a4f4ef0cc52898bf8be2d5b6eb751)() const = &::clang::ParmVarDecl::hasInheritedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_cec1fe9890c7548eae000b0f98731524)() const = &::clang::ParmVarDecl::hasUninstantiatedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_34de03923d8c58609be98e0e5191eaad)() const = &::clang::ParmVarDecl::hasUnparsedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_4abd19fffcf0575ba6697abbf5411581)() const = &::clang::ParmVarDecl::isKNRPromoted;
    bool  (::clang::ParmVarDecl::*method_pointer_ec6d6b73a5da5218bd382f880cce0312)() const = &::clang::ParmVarDecl::isObjCMethodParameter;
    bool  (::clang::ParmVarDecl::*method_pointer_f99a2f2099da5fbab7c04d3d9e3cb515)() const = &::clang::ParmVarDecl::isParameterPack;
    void  (::clang::ParmVarDecl::*method_pointer_aafafb52d4a25dd4a6dcdc3af5bf05ea)(bool ) = &::clang::ParmVarDecl::setHasInheritedDefaultArg;
    void  (::clang::ParmVarDecl::*method_pointer_2b7cfc9f14015196ac04a3a98e02460a)(bool ) = &::clang::ParmVarDecl::setKNRPromoted;
    void  (::clang::ParmVarDecl::*method_pointer_24f78e35e2b25db6bbb6949934e82987)(unsigned int ) = &::clang::ParmVarDecl::setObjCMethodScopeInfo;
    void  (::clang::ParmVarDecl::*method_pointer_df86d848adff5fc5899f0a1be6eec88a)(class ::clang::DeclContext  *) = &::clang::ParmVarDecl::setOwningFunction;
    void  (::clang::ParmVarDecl::*method_pointer_e903c27154855c53bbd91663dc2cf4bc)(unsigned int , unsigned int ) = &::clang::ParmVarDecl::setScopeInfo;
    void  (::clang::ParmVarDecl::*method_pointer_01be372414495c02a4f4aec89682d130)() = &::clang::ParmVarDecl::setUnparsedDefaultArg;
    boost::python::class_< class ::clang::ParmVarDecl, autowig::HeldType< class ::clang::ParmVarDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_7a8dbb57ea425a4ca4c5329f099a1ce8("ParmVarDecl", "", boost::python::no_init);
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("create_deserialized", method_pointer_5d3867ed26f05353a849d2f6059f7dab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof", method_pointer_c268794f132d57c5a5f7e86d8728f995, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof_kind", method_pointer_84e70f7344175048baa59ad4f93164dc, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_depth", method_pointer_f6676ddc79e055c6a05f4399678bb9df, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_index", method_pointer_fdbcf33eca2b5566b2fd578c08128564, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_original_type", method_pointer_7938681861ce5e5b90c2bc2cb91778fb, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_default_arg", method_pointer_453d45e1fa7357e597b09b044f12d894, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_inherited_default_arg", method_pointer_3a4a4f4ef0cc52898bf8be2d5b6eb751, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_uninstantiated_default_arg", method_pointer_cec1fe9890c7548eae000b0f98731524, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_unparsed_default_arg", method_pointer_34de03923d8c58609be98e0e5191eaad, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_knr_promoted", method_pointer_4abd19fffcf0575ba6697abbf5411581, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_obj_c_method_parameter", method_pointer_ec6d6b73a5da5218bd382f880cce0312, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_parameter_pack", method_pointer_f99a2f2099da5fbab7c04d3d9e3cb515, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_has_inherited_default_arg", method_pointer_aafafb52d4a25dd4a6dcdc3af5bf05ea, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_knr_promoted", method_pointer_2b7cfc9f14015196ac04a3a98e02460a, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_obj_c_method_scope_info", method_pointer_24f78e35e2b25db6bbb6949934e82987, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_owning_function", method_pointer_df86d848adff5fc5899f0a1be6eec88a, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_scope_info", method_pointer_e903c27154855c53bbd91663dc2cf4bc, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_unparsed_default_arg", method_pointer_01be372414495c02a4f4aec89682d130, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof_kind");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("create_deserialized");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ParmVarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ParmVarDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}