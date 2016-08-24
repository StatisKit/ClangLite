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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_c059fb2d5b9b5a338416adbdb9f7babd)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_49aa4e193d185f8eae400a5ca72e4470)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_cf74ad32e8315bdf9164f47014ee39e7)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_8499b4d4a466506f89258bc06598cf17)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_07671f41e73b549391ae9ef3bef7498e)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_a354f4a066dd5a5bb7e718d1e7f49929)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_5beb9e8a2cf255f8ae999f5f6f20a98f)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_08a9e7045b695ccfbd643289955d6cf2)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_e7d913ddb5bd5fbf851f6f8503e8f13d)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_60046cebc8f75cfc8aeb8c08b6d06e2d)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_1e29da10ae2e5502976618bfdab498a3)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_ef22b4ea93a2534693a0244d0fb5b0e7)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_6e970b4689705e26a1514ef9b0584d1e)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_22645a8e99a15bac8a54706367473d97)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_69b978d8b6ae54d688ecd58c3810db69)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_a5d6eb597f5f508d8966635126f5a5a8)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_8ba18491011859fcb0e44bd70885423f)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_f61982f409b75e9083ad7d762e06c9b6)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_5a4df23d21ba5016a0933e8275f3d32f)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_9dcb35143a8a523197f1da99a1ea2f5b)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_91c326b4cf425e66ad876e6336276af4)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_cd7fa09a63f457b29fdf0285dbfe42c7)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_c059fb2d5b9b5a338416adbdb9f7babd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_49aa4e193d185f8eae400a5ca72e4470, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_cf74ad32e8315bdf9164f47014ee39e7, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_8499b4d4a466506f89258bc06598cf17, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_07671f41e73b549391ae9ef3bef7498e, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_a354f4a066dd5a5bb7e718d1e7f49929, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_5beb9e8a2cf255f8ae999f5f6f20a98f, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_08a9e7045b695ccfbd643289955d6cf2, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_e7d913ddb5bd5fbf851f6f8503e8f13d, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_60046cebc8f75cfc8aeb8c08b6d06e2d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_1e29da10ae2e5502976618bfdab498a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_ef22b4ea93a2534693a0244d0fb5b0e7, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_6e970b4689705e26a1514ef9b0584d1e, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_22645a8e99a15bac8a54706367473d97, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_69b978d8b6ae54d688ecd58c3810db69, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_a5d6eb597f5f508d8966635126f5a5a8, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_8ba18491011859fcb0e44bd70885423f, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_f61982f409b75e9083ad7d762e06c9b6, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_5a4df23d21ba5016a0933e8275f3d32f, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_9dcb35143a8a523197f1da99a1ea2f5b, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_91c326b4cf425e66ad876e6336276af4, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_cd7fa09a63f457b29fdf0285dbfe42c7, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}