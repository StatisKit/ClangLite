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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_976b70cbe616549fa3772f66e42fd4b3)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_edefbb69ad1b5837a791c015cbca94c2)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_bdb10dabf66d5c23ada3f196c2340484)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_1d6aadb48e645be88ebfc1a772e0b5f4)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_d4a1a64a4173560bae2c0a4d082cbceb)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_045a86b8f2d45a92b56c677e8d5c5814)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_07352c9d3c6f5400acf113f8a74b33b3)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_e817242c33bb577385f9673bf4aa3462)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_6b9f90973cb15556a3c21937de8c9d97)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_a8addb1ba5ef530ca1f68798d5348ef1)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_735b3ac9ad2c58a49ab2a7adc84d8d4a)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_86664c1d4c1c56f7b12d4eb588db53d5)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_281edfd486055de2bb54813482295056)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_3a02119b9a5952f58e9b6e8c6943257b)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_df5bd435efbd512188512ac656b92162)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_7619d693d6d15b31af67cf2f338411e5)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_780ffed25d615f8597774d3ece53fde9)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_5ddf0891e1fb511186db58118e2007aa)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_33a62946bf615527bbaee2dab74db412)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_b1b1398f7d015a3ebc73825eebcfff53)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_2f3b18245d995981af4a0fc574d41f7a)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_b318fb7ce3885ce9adb5b89007633605)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_976b70cbe616549fa3772f66e42fd4b3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_edefbb69ad1b5837a791c015cbca94c2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_bdb10dabf66d5c23ada3f196c2340484, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_1d6aadb48e645be88ebfc1a772e0b5f4, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_d4a1a64a4173560bae2c0a4d082cbceb, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_045a86b8f2d45a92b56c677e8d5c5814, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_07352c9d3c6f5400acf113f8a74b33b3, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_e817242c33bb577385f9673bf4aa3462, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_6b9f90973cb15556a3c21937de8c9d97, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_a8addb1ba5ef530ca1f68798d5348ef1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_735b3ac9ad2c58a49ab2a7adc84d8d4a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_86664c1d4c1c56f7b12d4eb588db53d5, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_281edfd486055de2bb54813482295056, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_3a02119b9a5952f58e9b6e8c6943257b, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_df5bd435efbd512188512ac656b92162, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_7619d693d6d15b31af67cf2f338411e5, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_780ffed25d615f8597774d3ece53fde9, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_5ddf0891e1fb511186db58118e2007aa, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_33a62946bf615527bbaee2dab74db412, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_b1b1398f7d015a3ebc73825eebcfff53, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_2f3b18245d995981af4a0fc574d41f7a, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_b318fb7ce3885ce9adb5b89007633605, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}