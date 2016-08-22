#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_744be89803015d4fa974827041a9835a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_71a69827207054ac9f7da0f398d7212b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_e6836ffd1cc75979bd1e04220e74487b)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_58827c9f443b52a291a067a2aa446241)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_5fed866ea3cd57ae9692f7e563915146)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_47a2056a49675cd183bb2c653f2844df)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_d3501f11d38a54c683ceff9842211130)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_d51855bf86035654afc6a8235d5cf8ff)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_0432ad5344d8524ebccb41b4c3b1b401)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_f870bbb60cf55bc4b7c3f060aa7d5f5d)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_ada3dc1d929c5cefbc205cae5fcd854f)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_d7bd5beb7ef159a3a7b763d5209ac465)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_fc62205163675fcaa0d777fc5c29c17e)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_a0099384480157fead11b8262bb0a3d7)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_897f220725c553bbaa2902ff17d4cb0a)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_71a69827207054ac9f7da0f398d7212b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_e6836ffd1cc75979bd1e04220e74487b, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_58827c9f443b52a291a067a2aa446241, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_5fed866ea3cd57ae9692f7e563915146, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_47a2056a49675cd183bb2c653f2844df, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_d3501f11d38a54c683ceff9842211130, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_d51855bf86035654afc6a8235d5cf8ff, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_0432ad5344d8524ebccb41b4c3b1b401, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_f870bbb60cf55bc4b7c3f060aa7d5f5d, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_ada3dc1d929c5cefbc205cae5fcd854f, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_d7bd5beb7ef159a3a7b763d5209ac465, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_fc62205163675fcaa0d777fc5c29c17e, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_a0099384480157fead11b8262bb0a3d7, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_897f220725c553bbaa2902ff17d4cb0a, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}