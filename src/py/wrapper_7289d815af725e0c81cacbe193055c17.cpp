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
    class ::clang::ObjCCategoryImplDecl  * (*method_pointer_d4d564264e5f579cb9c65e4e2a3d31e5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCategoryImplDecl::CreateDeserialized;
    bool  (*method_pointer_65987fca81cc53e7a1cc5b3e61bb5247)(class ::clang::Decl  const *) = ::clang::ObjCCategoryImplDecl::classof;
    bool  (*method_pointer_9c842012ab0a5009bf77ed700afff966)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryImplDecl::classofKind;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryImplDecl::*method_pointer_866bcf984d395bd5b0f1b90058fc78fb)() const = &::clang::ObjCCategoryImplDecl::getCategoryDecl;
    class ::clang::SourceLocation  (::clang::ObjCCategoryImplDecl::*method_pointer_487518156b255463b6a0c21c0d956fca)() const = &::clang::ObjCCategoryImplDecl::getCategoryNameLoc;
    class ::llvm::StringRef  (::clang::ObjCCategoryImplDecl::*method_pointer_076024e672ba5d6f9d8b866d0ddfa0d5)() const = &::clang::ObjCCategoryImplDecl::getName;
    boost::python::class_< class ::clang::ObjCCategoryImplDecl, autowig::HeldType< class ::clang::ObjCCategoryImplDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_7289d815af725e0c81cacbe193055c17("ObjCCategoryImplDecl", "", boost::python::no_init);
    class_7289d815af725e0c81cacbe193055c17.def("create_deserialized", method_pointer_d4d564264e5f579cb9c65e4e2a3d31e5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7289d815af725e0c81cacbe193055c17.def("classof", method_pointer_65987fca81cc53e7a1cc5b3e61bb5247, "");
    class_7289d815af725e0c81cacbe193055c17.def("classof_kind", method_pointer_9c842012ab0a5009bf77ed700afff966, "");
    class_7289d815af725e0c81cacbe193055c17.def("get_category_decl", method_pointer_866bcf984d395bd5b0f1b90058fc78fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7289d815af725e0c81cacbe193055c17.def("get_category_name_loc", method_pointer_487518156b255463b6a0c21c0d956fca, "");
    class_7289d815af725e0c81cacbe193055c17.def("get_name", method_pointer_076024e672ba5d6f9d8b866d0ddfa0d5, "");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("classof_kind");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("create_deserialized");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCategoryImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCategoryImplDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}