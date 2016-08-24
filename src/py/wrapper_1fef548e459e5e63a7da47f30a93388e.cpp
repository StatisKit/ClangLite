#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_1fef548e459e5e63a7da47f30a93388e()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::LabelDecl  * (*method_pointer_f7138dbf88645f068de0af8dfdf06fad)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LabelDecl::CreateDeserialized;
    bool  (*method_pointer_d7bf1350842e52f4b1070b61d5e2c49d)(class ::clang::Decl  const *) = ::clang::LabelDecl::classof;
    bool  (*method_pointer_ed241bfaeb86530eb9e803a0a7e0077b)(enum ::clang::Decl::Kind ) = ::clang::LabelDecl::classofKind;
    class ::llvm::StringRef  (::clang::LabelDecl::*method_pointer_842268fdd0625583a06f2e122b59145c)() const = &::clang::LabelDecl::getMSAsmLabel;
    bool  (::clang::LabelDecl::*method_pointer_67a815d2c34554abb2263b4402bb8d37)() const = &::clang::LabelDecl::isGnuLocal;
    bool  (::clang::LabelDecl::*method_pointer_e98294cd9ac05c30a04b564247cf914b)() const = &::clang::LabelDecl::isMSAsmLabel;
    bool  (::clang::LabelDecl::*method_pointer_75aded5436b055608700e873e902fc69)() const = &::clang::LabelDecl::isResolvedMSAsmLabel;
    void  (::clang::LabelDecl::*method_pointer_b0645820f16e54018828a1e38383aa5b)(class ::clang::SourceLocation ) = &::clang::LabelDecl::setLocStart;
    void  (::clang::LabelDecl::*method_pointer_bf1e80afaa795a22a9b4960cb52131b5)(class ::llvm::StringRef ) = &::clang::LabelDecl::setMSAsmLabel;
    void  (::clang::LabelDecl::*method_pointer_481bc2b0a8d155f7ba32932cdd1d80df)() = &::clang::LabelDecl::setMSAsmLabelResolved;
    boost::python::class_< class ::clang::LabelDecl, autowig::HeldType< class ::clang::LabelDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_1fef548e459e5e63a7da47f30a93388e("LabelDecl", "", boost::python::no_init);
    class_1fef548e459e5e63a7da47f30a93388e.def("create_deserialized", method_pointer_f7138dbf88645f068de0af8dfdf06fad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof", method_pointer_d7bf1350842e52f4b1070b61d5e2c49d, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof_kind", method_pointer_ed241bfaeb86530eb9e803a0a7e0077b, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("get_ms_asm_label", method_pointer_842268fdd0625583a06f2e122b59145c, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_gnu_local", method_pointer_67a815d2c34554abb2263b4402bb8d37, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_ms_asm_label", method_pointer_e98294cd9ac05c30a04b564247cf914b, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_resolved_ms_asm_label", method_pointer_75aded5436b055608700e873e902fc69, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_loc_start", method_pointer_b0645820f16e54018828a1e38383aa5b, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label", method_pointer_bf1e80afaa795a22a9b4960cb52131b5, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label_resolved", method_pointer_481bc2b0a8d155f7ba32932cdd1d80df, "");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof_kind");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("create_deserialized");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::LabelDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LabelDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}