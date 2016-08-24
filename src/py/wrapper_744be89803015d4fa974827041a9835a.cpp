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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_7488640057f45919af1fe95cc91340cf)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_5e2485266c55575bbacaa35fdde80e7f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_66c4ec5e7eed5db59a17c192d41005fd)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_62acb102fec552e7ba8e35d110fe0ab4)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_859e085755ee573ab86bfb424498fb99)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_5ef8e6691d1a5be491ee4924bccd26c0)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_8805988657c1548c8561e12113766bf5)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_e5b84e41d875585bb8204c28079c61ca)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_a14b27e52d825371b0bacd07327e2a73)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_4b3ded4e65755345af8f713448749dff)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_fde31076984153caa4e3d632201b4019)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_6cfcafce15b156208c2affed677115bc)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_629767e3b9de58a5ac3d5e9da4eec699)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_624ff639981a5d1599b283a401efc67e)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_9f04243319a6525e89aa4a74885f9a1a)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_2260cd45022b51ef80c41f133a5c2136)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_ea14bf95ea3c555d98cbfb2a1bd76ab9)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_4867687a028c5ffebda12e02fb70c342)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_bc99b719143e5c198f480d6fc236e459)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_ab9e2cc929ed5b3ba95c259fa2c82f81)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_c94f1289d5e35b3fa87f5a05d8fa80c3)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_876fd4e1d50d5770b75ecec2a606cc25)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_7488640057f45919af1fe95cc91340cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_5e2485266c55575bbacaa35fdde80e7f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_66c4ec5e7eed5db59a17c192d41005fd, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_62acb102fec552e7ba8e35d110fe0ab4, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_859e085755ee573ab86bfb424498fb99, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_5ef8e6691d1a5be491ee4924bccd26c0, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_8805988657c1548c8561e12113766bf5, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_e5b84e41d875585bb8204c28079c61ca, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_a14b27e52d825371b0bacd07327e2a73, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_4b3ded4e65755345af8f713448749dff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_fde31076984153caa4e3d632201b4019, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_6cfcafce15b156208c2affed677115bc, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_629767e3b9de58a5ac3d5e9da4eec699, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_624ff639981a5d1599b283a401efc67e, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_9f04243319a6525e89aa4a74885f9a1a, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_2260cd45022b51ef80c41f133a5c2136, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_ea14bf95ea3c555d98cbfb2a1bd76ab9, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_4867687a028c5ffebda12e02fb70c342, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_bc99b719143e5c198f480d6fc236e459, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_ab9e2cc929ed5b3ba95c259fa2c82f81, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_c94f1289d5e35b3fa87f5a05d8fa80c3, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_876fd4e1d50d5770b75ecec2a606cc25, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}