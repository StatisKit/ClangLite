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
    void  (::clang::ParmVarDecl::*method_pointer_f3b234a7b95c52678ecfb7f4d8a72aa5)(class ::clang::DeclContext  *) = &::clang::ParmVarDecl::setOwningFunction;
    bool  (::clang::ParmVarDecl::*method_pointer_9fed08f4d3f859dc9823712b5d839aa6)() const = &::clang::ParmVarDecl::isKNRPromoted;
    void  (::clang::ParmVarDecl::*method_pointer_c87deb2eae3a504db517934a3f0b25aa)(bool ) = &::clang::ParmVarDecl::setKNRPromoted;
    void  (::clang::ParmVarDecl::*method_pointer_229c7c09782c59b2945baf5c27bcd5d8)(bool ) = &::clang::ParmVarDecl::setHasInheritedDefaultArg;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_e7bed60c0c24558db24ff684ddd17772)() const = &::clang::ParmVarDecl::getFunctionScopeDepth;
    void  (::clang::ParmVarDecl::*method_pointer_62cbdb143b3f57268ad2c184540a088a)(unsigned int ) = &::clang::ParmVarDecl::setObjCMethodScopeInfo;
    bool  (::clang::ParmVarDecl::*method_pointer_5a7ec987f80151fd9e2ea463825d8a4d)() const = &::clang::ParmVarDecl::isObjCMethodParameter;
    class ::clang::ParmVarDecl  * (*method_pointer_32d470784db05f899006010524a78def)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ParmVarDecl::CreateDeserialized;
    bool  (*method_pointer_a51942a103e45b5fb4c3601bcee32375)(enum ::clang::Decl::Kind ) = ::clang::ParmVarDecl::classofKind;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_7d760e2ef733528ab714270ce21de73f)() const = &::clang::ParmVarDecl::getFunctionScopeIndex;
    void  (::clang::ParmVarDecl::*method_pointer_ccab49e987bc534ebadb16c8b3f51d10)(unsigned int , unsigned int ) = &::clang::ParmVarDecl::setScopeInfo;
    bool  (::clang::ParmVarDecl::*method_pointer_737d1b43913152619a29ba8c7328e617)() const = &::clang::ParmVarDecl::hasUninstantiatedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_4cbaffe1f6d651d2a83b15c6f1dfa96c)() const = &::clang::ParmVarDecl::hasUnparsedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_40cc7e4286be59e5b73e9c6900251188)() const = &::clang::ParmVarDecl::hasInheritedDefaultArg;
    void  (::clang::ParmVarDecl::*method_pointer_e97e32e7203d596b96bb198f7a3bfdac)() = &::clang::ParmVarDecl::setUnparsedDefaultArg;
    bool  (*method_pointer_cc8c744f63bc5b10b975efc85fc3c2e2)(class ::clang::Decl  const *) = ::clang::ParmVarDecl::classof;
    bool  (::clang::ParmVarDecl::*method_pointer_5ae96036f16a5525ab0b587997ed6863)() const = &::clang::ParmVarDecl::isParameterPack;
    bool  (::clang::ParmVarDecl::*method_pointer_8e7615a162745a3484faf386c98847a4)() const = &::clang::ParmVarDecl::hasDefaultArg;
    boost::python::class_< class ::clang::ParmVarDecl, autowig::HeldType< class ::clang::ParmVarDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_7a8dbb57ea425a4ca4c5329f099a1ce8("ParmVarDecl", "", boost::python::no_init);
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_owning_function", method_pointer_f3b234a7b95c52678ecfb7f4d8a72aa5, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_knr_promoted", method_pointer_9fed08f4d3f859dc9823712b5d839aa6, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_knr_promoted", method_pointer_c87deb2eae3a504db517934a3f0b25aa, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_has_inherited_default_arg", method_pointer_229c7c09782c59b2945baf5c27bcd5d8, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_depth", method_pointer_e7bed60c0c24558db24ff684ddd17772, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_obj_c_method_scope_info", method_pointer_62cbdb143b3f57268ad2c184540a088a, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_obj_c_method_parameter", method_pointer_5a7ec987f80151fd9e2ea463825d8a4d, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("create_deserialized", method_pointer_32d470784db05f899006010524a78def, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof_kind", method_pointer_a51942a103e45b5fb4c3601bcee32375, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_index", method_pointer_7d760e2ef733528ab714270ce21de73f, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_scope_info", method_pointer_ccab49e987bc534ebadb16c8b3f51d10, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_uninstantiated_default_arg", method_pointer_737d1b43913152619a29ba8c7328e617, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_unparsed_default_arg", method_pointer_4cbaffe1f6d651d2a83b15c6f1dfa96c, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_inherited_default_arg", method_pointer_40cc7e4286be59e5b73e9c6900251188, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_unparsed_default_arg", method_pointer_e97e32e7203d596b96bb198f7a3bfdac, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof", method_pointer_cc8c744f63bc5b10b975efc85fc3c2e2, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_parameter_pack", method_pointer_5ae96036f16a5525ab0b587997ed6863, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_default_arg", method_pointer_8e7615a162745a3484faf386c98847a4, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof_kind");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("create_deserialized");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ParmVarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ParmVarDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}