#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_7289d815af725e0c81cacbe193055c17()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCCategoryImplDecl  * (*method_pointer_ca141d0847435ddeae6d99563667957b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCategoryImplDecl::CreateDeserialized;
    bool  (*method_pointer_49aef86099c052fb8d20b42addca893e)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryImplDecl::classofKind;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryImplDecl::*method_pointer_bea933c8af0c5c6880ea0082203f65ee)() const = &::clang::ObjCCategoryImplDecl::getCategoryDecl;
    bool  (*method_pointer_421bd8e657f151a3a253842f9bd83da1)(class ::clang::Decl  const *) = ::clang::ObjCCategoryImplDecl::classof;
    boost::python::class_< class ::clang::ObjCCategoryImplDecl, autowig::HeldType< class ::clang::ObjCCategoryImplDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_7289d815af725e0c81cacbe193055c17("ObjCCategoryImplDecl", "", boost::python::no_init);
    class_7289d815af725e0c81cacbe193055c17.def("create_deserialized", method_pointer_ca141d0847435ddeae6d99563667957b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7289d815af725e0c81cacbe193055c17.def("classof_kind", method_pointer_49aef86099c052fb8d20b42addca893e, "");
    class_7289d815af725e0c81cacbe193055c17.def("get_category_decl", method_pointer_bea933c8af0c5c6880ea0082203f65ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7289d815af725e0c81cacbe193055c17.def("classof", method_pointer_421bd8e657f151a3a253842f9bd83da1, "");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("classof_kind");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("create_deserialized");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCategoryImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCategoryImplDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}