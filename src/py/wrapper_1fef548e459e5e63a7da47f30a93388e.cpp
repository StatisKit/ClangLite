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
    class ::clang::LabelDecl  * (*method_pointer_438251d7f9845f00a838c6a9aa42b2be)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LabelDecl::CreateDeserialized;
    bool  (*method_pointer_91a25d6826a953b9bb156da96ac637bf)(class ::clang::Decl  const *) = ::clang::LabelDecl::classof;
    bool  (*method_pointer_e7ed95a425235e9d864d4347890d5e9e)(enum ::clang::Decl::Kind ) = ::clang::LabelDecl::classofKind;
    class ::llvm::StringRef  (::clang::LabelDecl::*method_pointer_00879623bb3e555a8fcb86fcc3494908)() const = &::clang::LabelDecl::getMSAsmLabel;
    bool  (::clang::LabelDecl::*method_pointer_8843084eecef5027b717624b76307032)() const = &::clang::LabelDecl::isGnuLocal;
    bool  (::clang::LabelDecl::*method_pointer_03e16639da935c899a9ece7b0af6a91a)() const = &::clang::LabelDecl::isMSAsmLabel;
    bool  (::clang::LabelDecl::*method_pointer_0baaf0c882d757a39205287f76a275a8)() const = &::clang::LabelDecl::isResolvedMSAsmLabel;
    void  (::clang::LabelDecl::*method_pointer_27cbf72d79a95c1c9975dd74995a7cae)(class ::clang::SourceLocation ) = &::clang::LabelDecl::setLocStart;
    void  (::clang::LabelDecl::*method_pointer_3ca4cd3562b95b6593fa9439b34902e3)(class ::llvm::StringRef ) = &::clang::LabelDecl::setMSAsmLabel;
    void  (::clang::LabelDecl::*method_pointer_f12210741b44510a8ac8d2b211eacd44)() = &::clang::LabelDecl::setMSAsmLabelResolved;
    boost::python::class_< class ::clang::LabelDecl, autowig::HeldType< class ::clang::LabelDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_1fef548e459e5e63a7da47f30a93388e("LabelDecl", "", boost::python::no_init);
    class_1fef548e459e5e63a7da47f30a93388e.def("create_deserialized", method_pointer_438251d7f9845f00a838c6a9aa42b2be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof", method_pointer_91a25d6826a953b9bb156da96ac637bf, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof_kind", method_pointer_e7ed95a425235e9d864d4347890d5e9e, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("get_ms_asm_label", method_pointer_00879623bb3e555a8fcb86fcc3494908, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_gnu_local", method_pointer_8843084eecef5027b717624b76307032, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_ms_asm_label", method_pointer_03e16639da935c899a9ece7b0af6a91a, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_resolved_ms_asm_label", method_pointer_0baaf0c882d757a39205287f76a275a8, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_loc_start", method_pointer_27cbf72d79a95c1c9975dd74995a7cae, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label", method_pointer_3ca4cd3562b95b6593fa9439b34902e3, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label_resolved", method_pointer_f12210741b44510a8ac8d2b211eacd44, "");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof_kind");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("create_deserialized");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::LabelDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LabelDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}