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
    class ::clang::ParmVarDecl  * (*method_pointer_4284cfa0054a52b9be30857ce923c6df)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ParmVarDecl::CreateDeserialized;
    bool  (*method_pointer_2b4258672a6d5c1a9158308245ebb9c6)(class ::clang::Decl  const *) = ::clang::ParmVarDecl::classof;
    bool  (*method_pointer_b67847bcb5e959bab575bdbc169a9ed0)(enum ::clang::Decl::Kind ) = ::clang::ParmVarDecl::classofKind;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_2ed5b2011a535ec58f99b4acd6c8d9e8)() const = &::clang::ParmVarDecl::getFunctionScopeDepth;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_ab3ec0a8823e51489ad4238db625a042)() const = &::clang::ParmVarDecl::getFunctionScopeIndex;
    class ::clang::QualType  (::clang::ParmVarDecl::*method_pointer_fe802f6df599576c9c248898ac84ec12)() const = &::clang::ParmVarDecl::getOriginalType;
    bool  (::clang::ParmVarDecl::*method_pointer_810107bab69b5beba280e762f253f8e2)() const = &::clang::ParmVarDecl::hasDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_54c28fa1660959199a7312c864c0bbcd)() const = &::clang::ParmVarDecl::hasInheritedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_42035e8745d457c0881582990e5e9457)() const = &::clang::ParmVarDecl::hasUninstantiatedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_e18e35fe69235b79924164a14cfb1fd5)() const = &::clang::ParmVarDecl::hasUnparsedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_8040adb4e9f25a59b5746fe4fbccef8c)() const = &::clang::ParmVarDecl::isKNRPromoted;
    bool  (::clang::ParmVarDecl::*method_pointer_6de541d56e82528fac54386339349fcd)() const = &::clang::ParmVarDecl::isObjCMethodParameter;
    bool  (::clang::ParmVarDecl::*method_pointer_0c166f40953b52e6a07444eba4b645aa)() const = &::clang::ParmVarDecl::isParameterPack;
    void  (::clang::ParmVarDecl::*method_pointer_a7dd62d60451507897bca2467a6c2c68)(bool ) = &::clang::ParmVarDecl::setHasInheritedDefaultArg;
    void  (::clang::ParmVarDecl::*method_pointer_21394f8201c25a4eac0e9b888dbc1333)(bool ) = &::clang::ParmVarDecl::setKNRPromoted;
    void  (::clang::ParmVarDecl::*method_pointer_e42f71dbb08b59219990ecbe64870acb)(unsigned int ) = &::clang::ParmVarDecl::setObjCMethodScopeInfo;
    void  (::clang::ParmVarDecl::*method_pointer_420aa8f173ba5fda8374f4644f140ae4)(class ::clang::DeclContext  *) = &::clang::ParmVarDecl::setOwningFunction;
    void  (::clang::ParmVarDecl::*method_pointer_59860e11c20c5f9d87f7addcfdc9d56b)(unsigned int , unsigned int ) = &::clang::ParmVarDecl::setScopeInfo;
    void  (::clang::ParmVarDecl::*method_pointer_4048d03d0f1a53e18c5507c9196ceb90)() = &::clang::ParmVarDecl::setUnparsedDefaultArg;
    boost::python::class_< class ::clang::ParmVarDecl, autowig::HeldType< class ::clang::ParmVarDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_7a8dbb57ea425a4ca4c5329f099a1ce8("ParmVarDecl", "", boost::python::no_init);
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("create_deserialized", method_pointer_4284cfa0054a52b9be30857ce923c6df, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof", method_pointer_2b4258672a6d5c1a9158308245ebb9c6, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof_kind", method_pointer_b67847bcb5e959bab575bdbc169a9ed0, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_depth", method_pointer_2ed5b2011a535ec58f99b4acd6c8d9e8, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_index", method_pointer_ab3ec0a8823e51489ad4238db625a042, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_original_type", method_pointer_fe802f6df599576c9c248898ac84ec12, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_default_arg", method_pointer_810107bab69b5beba280e762f253f8e2, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_inherited_default_arg", method_pointer_54c28fa1660959199a7312c864c0bbcd, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_uninstantiated_default_arg", method_pointer_42035e8745d457c0881582990e5e9457, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_unparsed_default_arg", method_pointer_e18e35fe69235b79924164a14cfb1fd5, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_knr_promoted", method_pointer_8040adb4e9f25a59b5746fe4fbccef8c, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_obj_c_method_parameter", method_pointer_6de541d56e82528fac54386339349fcd, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_parameter_pack", method_pointer_0c166f40953b52e6a07444eba4b645aa, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_has_inherited_default_arg", method_pointer_a7dd62d60451507897bca2467a6c2c68, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_knr_promoted", method_pointer_21394f8201c25a4eac0e9b888dbc1333, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_obj_c_method_scope_info", method_pointer_e42f71dbb08b59219990ecbe64870acb, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_owning_function", method_pointer_420aa8f173ba5fda8374f4644f140ae4, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_scope_info", method_pointer_59860e11c20c5f9d87f7addcfdc9d56b, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_unparsed_default_arg", method_pointer_4048d03d0f1a53e18c5507c9196ceb90, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof_kind");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("create_deserialized");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ParmVarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ParmVarDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}