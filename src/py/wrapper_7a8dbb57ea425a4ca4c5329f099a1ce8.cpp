#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_7a8dbb57ea425a4ca4c5329f099a1ce8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ParmVarDecl::*method_pointer_56e1e2a64cb0570b93c135850e22e5b3)(bool ) = &::clang::ParmVarDecl::setHasInheritedDefaultArg;
    void  (::clang::ParmVarDecl::*method_pointer_c545735a454355c4be9a3adf1b90a128)(bool ) = &::clang::ParmVarDecl::setKNRPromoted;
    void  (::clang::ParmVarDecl::*method_pointer_e3de4801801d526ca1221dc5b8ad0ddc)() = &::clang::ParmVarDecl::setUnparsedDefaultArg;
    void  (::clang::ParmVarDecl::*method_pointer_dea0db98006a527d88ac852f8e3f7bae)(unsigned int ) = &::clang::ParmVarDecl::setObjCMethodScopeInfo;
    void  (::clang::ParmVarDecl::*method_pointer_34419f9ddb3752f9ba2dd60ea2de2979)(class ::clang::DeclContext  *) = &::clang::ParmVarDecl::setOwningFunction;
    bool  (::clang::ParmVarDecl::*method_pointer_0acfe2ec75905b67abead1d164eb2030)() const = &::clang::ParmVarDecl::hasUnparsedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_7010212ec00859659fead1b90598eb7f)() const = &::clang::ParmVarDecl::isKNRPromoted;
    bool  (::clang::ParmVarDecl::*method_pointer_beefe2396dc75567b3f6621685c24026)() const = &::clang::ParmVarDecl::hasInheritedDefaultArg;
    bool  (*method_pointer_c3d2e873d80856f4946938a7a5172fd7)(class ::clang::Decl  const *) = ::clang::ParmVarDecl::classof;
    void  (::clang::ParmVarDecl::*method_pointer_421fce9c6f335b668e560b551a6df578)(unsigned int , unsigned int ) = &::clang::ParmVarDecl::setScopeInfo;
    bool  (::clang::ParmVarDecl::*method_pointer_b9c824d71555530aa087c72610207c71)() const = &::clang::ParmVarDecl::hasUninstantiatedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_1fe65fa5e1bf52dd999bcb71cc77fc33)() const = &::clang::ParmVarDecl::isParameterPack;
    class ::clang::ParmVarDecl  * (*method_pointer_8ba67793395453b09a28288472c5c429)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ParmVarDecl::CreateDeserialized;
    bool  (::clang::ParmVarDecl::*method_pointer_cc1550617c955c6a9dfc9c2bffb85f23)() const = &::clang::ParmVarDecl::hasDefaultArg;
    bool  (*method_pointer_013683663b145573bb6b16a759faa2d9)(enum ::clang::Decl::Kind ) = ::clang::ParmVarDecl::classofKind;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_eefe9bf1e7105aaeb6db8ceeee519ca3)() const = &::clang::ParmVarDecl::getFunctionScopeIndex;
    bool  (::clang::ParmVarDecl::*method_pointer_28cdb81ff10a51ceb8a2966c0990c9c3)() const = &::clang::ParmVarDecl::isObjCMethodParameter;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_65da1ca723465d5d911b6d14a83ce058)() const = &::clang::ParmVarDecl::getFunctionScopeDepth;
    boost::python::class_< class ::clang::ParmVarDecl, autowig::HeldType< class ::clang::ParmVarDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_7a8dbb57ea425a4ca4c5329f099a1ce8("ParmVarDecl", "", boost::python::no_init);
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_has_inherited_default_arg", method_pointer_56e1e2a64cb0570b93c135850e22e5b3, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_knr_promoted", method_pointer_c545735a454355c4be9a3adf1b90a128, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_unparsed_default_arg", method_pointer_e3de4801801d526ca1221dc5b8ad0ddc, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_obj_c_method_scope_info", method_pointer_dea0db98006a527d88ac852f8e3f7bae, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_owning_function", method_pointer_34419f9ddb3752f9ba2dd60ea2de2979, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_unparsed_default_arg", method_pointer_0acfe2ec75905b67abead1d164eb2030, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_knr_promoted", method_pointer_7010212ec00859659fead1b90598eb7f, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_inherited_default_arg", method_pointer_beefe2396dc75567b3f6621685c24026, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof", method_pointer_c3d2e873d80856f4946938a7a5172fd7, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_scope_info", method_pointer_421fce9c6f335b668e560b551a6df578, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_uninstantiated_default_arg", method_pointer_b9c824d71555530aa087c72610207c71, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_parameter_pack", method_pointer_1fe65fa5e1bf52dd999bcb71cc77fc33, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("create_deserialized", method_pointer_8ba67793395453b09a28288472c5c429, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_default_arg", method_pointer_cc1550617c955c6a9dfc9c2bffb85f23, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof_kind", method_pointer_013683663b145573bb6b16a759faa2d9, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_index", method_pointer_eefe9bf1e7105aaeb6db8ceeee519ca3, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_obj_c_method_parameter", method_pointer_28cdb81ff10a51ceb8a2966c0990c9c3, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_depth", method_pointer_65da1ca723465d5d911b6d14a83ce058, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof_kind");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("create_deserialized");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ParmVarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ParmVarDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}