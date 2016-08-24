#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_7289d815af725e0c81cacbe193055c17()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCCategoryImplDecl  * (*method_pointer_a73763eac85f51e48d930d91b14588dc)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCategoryImplDecl::CreateDeserialized;
    bool  (*method_pointer_9659cd58f7695e5dbc9ee5894817fbf4)(class ::clang::Decl  const *) = ::clang::ObjCCategoryImplDecl::classof;
    bool  (*method_pointer_403353db3dad5b7aa90a1259d17cb69f)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryImplDecl::classofKind;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryImplDecl::*method_pointer_8b7aad422e9b513aa1fee8829ae3080a)() const = &::clang::ObjCCategoryImplDecl::getCategoryDecl;
    class ::clang::SourceLocation  (::clang::ObjCCategoryImplDecl::*method_pointer_88b6f6283d025a17bf65c6e2aa292661)() const = &::clang::ObjCCategoryImplDecl::getCategoryNameLoc;
    class ::llvm::StringRef  (::clang::ObjCCategoryImplDecl::*method_pointer_bc621d6749ab54fd8d5295cd29b0c46d)() const = &::clang::ObjCCategoryImplDecl::getName;
    boost::python::class_< class ::clang::ObjCCategoryImplDecl, autowig::HeldType< class ::clang::ObjCCategoryImplDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_7289d815af725e0c81cacbe193055c17("ObjCCategoryImplDecl", "", boost::python::no_init);
    class_7289d815af725e0c81cacbe193055c17.def("create_deserialized", method_pointer_a73763eac85f51e48d930d91b14588dc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7289d815af725e0c81cacbe193055c17.def("classof", method_pointer_9659cd58f7695e5dbc9ee5894817fbf4, "");
    class_7289d815af725e0c81cacbe193055c17.def("classof_kind", method_pointer_403353db3dad5b7aa90a1259d17cb69f, "");
    class_7289d815af725e0c81cacbe193055c17.def("get_category_decl", method_pointer_8b7aad422e9b513aa1fee8829ae3080a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7289d815af725e0c81cacbe193055c17.def("get_category_name_loc", method_pointer_88b6f6283d025a17bf65c6e2aa292661, "");
    class_7289d815af725e0c81cacbe193055c17.def("get_name", method_pointer_bc621d6749ab54fd8d5295cd29b0c46d, "");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("classof_kind");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("create_deserialized");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCategoryImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCategoryImplDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}