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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_371377bb897d5bbbaaacdf98d825b7b9)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_d03e008455d25df999ad93b0dcaaff24)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_26fc35e930b15d899dfd78e1c25cf9e6)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_25e6938c817e519b81b7da97d36c6eb1)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_200a1c52505b59c1bc7aaa4586a16763)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_012f647b77a053e49448732d2bf895fe)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_bb826ac1d1dd53cbb21c34edad296692)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_b5098671c3ef53ed87536ec393f57cc8)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_267a4c06d4e7584da5b714fa0ca3a97c)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_63b70c861954524db7312ab61fb508e7)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_b92d1509eba05b88a8f5e74e30ed4642)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_8adabc3e5769558e955c5a8f8d765bcf)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_2e7d14aa3ee35cf8bb4ea937fbdfa2bf)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_62f5af65ec265ffa90b734a883a47dd1)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_cfb01f6a745d5b0f9224c5d931fe924d)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_be10040442b75b2ab7e0204461174b55)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_1be956982a2652d7bfc903225d3c8405)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_3a57cb95e22551cf911fefbcb064fdd8)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_fa0a222c0a5a5194831a44a087a03f37)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_1988a4179ccc5e17adbcc35c62218c76)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_3c5655e87ce45a629f89004a43f94da6)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_2c699ad4d5815356bc4264b0e2e38e5e)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_371377bb897d5bbbaaacdf98d825b7b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_d03e008455d25df999ad93b0dcaaff24, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_26fc35e930b15d899dfd78e1c25cf9e6, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_25e6938c817e519b81b7da97d36c6eb1, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_200a1c52505b59c1bc7aaa4586a16763, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_012f647b77a053e49448732d2bf895fe, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_bb826ac1d1dd53cbb21c34edad296692, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_b5098671c3ef53ed87536ec393f57cc8, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_267a4c06d4e7584da5b714fa0ca3a97c, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_63b70c861954524db7312ab61fb508e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_b92d1509eba05b88a8f5e74e30ed4642, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_8adabc3e5769558e955c5a8f8d765bcf, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_2e7d14aa3ee35cf8bb4ea937fbdfa2bf, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_62f5af65ec265ffa90b734a883a47dd1, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_cfb01f6a745d5b0f9224c5d931fe924d, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_be10040442b75b2ab7e0204461174b55, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_1be956982a2652d7bfc903225d3c8405, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_3a57cb95e22551cf911fefbcb064fdd8, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_fa0a222c0a5a5194831a44a087a03f37, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_1988a4179ccc5e17adbcc35c62218c76, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_3c5655e87ce45a629f89004a43f94da6, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_2c699ad4d5815356bc4264b0e2e38e5e, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}