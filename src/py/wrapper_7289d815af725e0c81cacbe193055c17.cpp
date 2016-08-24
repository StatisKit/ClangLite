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
    class ::clang::ObjCCategoryImplDecl  * (*method_pointer_bf19c33faf625946a855be8b75892fba)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCategoryImplDecl::CreateDeserialized;
    bool  (*method_pointer_feaf0fd387b554c3aece6427e966d22c)(class ::clang::Decl  const *) = ::clang::ObjCCategoryImplDecl::classof;
    bool  (*method_pointer_b6a5da12af685d3abebc67a673d1d0fe)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryImplDecl::classofKind;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryImplDecl::*method_pointer_d55606fda5b5593d80ab40d687c4bf19)() const = &::clang::ObjCCategoryImplDecl::getCategoryDecl;
    class ::clang::SourceLocation  (::clang::ObjCCategoryImplDecl::*method_pointer_a11f033e4dff5b87910e666866e9152a)() const = &::clang::ObjCCategoryImplDecl::getCategoryNameLoc;
    class ::llvm::StringRef  (::clang::ObjCCategoryImplDecl::*method_pointer_8d46ea7b3f015a4aa3af693e490ae703)() const = &::clang::ObjCCategoryImplDecl::getName;
    boost::python::class_< class ::clang::ObjCCategoryImplDecl, autowig::HeldType< class ::clang::ObjCCategoryImplDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_7289d815af725e0c81cacbe193055c17("ObjCCategoryImplDecl", "", boost::python::no_init);
    class_7289d815af725e0c81cacbe193055c17.def("create_deserialized", method_pointer_bf19c33faf625946a855be8b75892fba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7289d815af725e0c81cacbe193055c17.def("classof", method_pointer_feaf0fd387b554c3aece6427e966d22c, "");
    class_7289d815af725e0c81cacbe193055c17.def("classof_kind", method_pointer_b6a5da12af685d3abebc67a673d1d0fe, "");
    class_7289d815af725e0c81cacbe193055c17.def("get_category_decl", method_pointer_d55606fda5b5593d80ab40d687c4bf19, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7289d815af725e0c81cacbe193055c17.def("get_category_name_loc", method_pointer_a11f033e4dff5b87910e666866e9152a, "");
    class_7289d815af725e0c81cacbe193055c17.def("get_name", method_pointer_8d46ea7b3f015a4aa3af693e490ae703, "");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("classof_kind");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("create_deserialized");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCategoryImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCategoryImplDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}