#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_744be89803015d4fa974827041a9835a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ObjCImplementationDecl::*method_pointer_84833ff6e0aa56899f1f3789e2aa7277)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_aa5f4b07519a56ce85e58c7761d61373)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_0069d0cf99d15f63a8bcd90c3e679c26)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    bool  (*method_pointer_b3d9b38a146651c3b5b9dda9b551bfc3)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_d115cda375795bacb4ffa9522f438a32)() = &::clang::ObjCImplementationDecl::getSuperClass;
    void  (::clang::ObjCImplementationDecl::*method_pointer_c72b8837fc865184b2689a90b0e616c8)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    void  (::clang::ObjCImplementationDecl::*method_pointer_bcf1a5b76d695e69939f588cb28050b6)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_5d361766f13d5dc197610c55155c4145)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_8ef1d6ba9d1e5057a1e804574638daec)() const = &::clang::ObjCImplementationDecl::ivar_size;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_2455ea27071d55bcb05dd60a22af4760)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    bool  (*method_pointer_c8eb0723daac5ba4852c717b9d56a00b)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_95489ab43a105d028eb14d523a30835b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_5fd77fe49dc0572b802890e49529d307)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_6bac8af2339753df9830e51b75f4c1eb)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_84833ff6e0aa56899f1f3789e2aa7277, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_aa5f4b07519a56ce85e58c7761d61373, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_0069d0cf99d15f63a8bcd90c3e679c26, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_b3d9b38a146651c3b5b9dda9b551bfc3, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_d115cda375795bacb4ffa9522f438a32, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_c72b8837fc865184b2689a90b0e616c8, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_bcf1a5b76d695e69939f588cb28050b6, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_5d361766f13d5dc197610c55155c4145, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_8ef1d6ba9d1e5057a1e804574638daec, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_2455ea27071d55bcb05dd60a22af4760, "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_c8eb0723daac5ba4852c717b9d56a00b, "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_95489ab43a105d028eb14d523a30835b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_5fd77fe49dc0572b802890e49529d307, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_6bac8af2339753df9830e51b75f4c1eb, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}