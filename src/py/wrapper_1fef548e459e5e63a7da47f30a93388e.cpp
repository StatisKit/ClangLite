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
    class ::clang::LabelDecl  * (*method_pointer_a62378fcdb815cfd8f9bbb9e83b15d11)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LabelDecl::CreateDeserialized;
    bool  (*method_pointer_59753aa663fd5ccdb6b0420d6ca7b8fe)(class ::clang::Decl  const *) = ::clang::LabelDecl::classof;
    bool  (*method_pointer_d0e0f52d593459f2ab65fdf35926850c)(enum ::clang::Decl::Kind ) = ::clang::LabelDecl::classofKind;
    class ::llvm::StringRef  (::clang::LabelDecl::*method_pointer_cf95247ca2c750bd80ab4625dbe27242)() const = &::clang::LabelDecl::getMSAsmLabel;
    bool  (::clang::LabelDecl::*method_pointer_c590d2d9988c5bbfab238760c5fc559b)() const = &::clang::LabelDecl::isGnuLocal;
    bool  (::clang::LabelDecl::*method_pointer_bf771eee7db4530897926b6ae7b0bbbd)() const = &::clang::LabelDecl::isMSAsmLabel;
    bool  (::clang::LabelDecl::*method_pointer_a03b4b9518a557a38cda0352535c7b37)() const = &::clang::LabelDecl::isResolvedMSAsmLabel;
    void  (::clang::LabelDecl::*method_pointer_55ed1b90520e5e5ea59a90a29cda8ccb)(class ::clang::SourceLocation ) = &::clang::LabelDecl::setLocStart;
    void  (::clang::LabelDecl::*method_pointer_cbd9d664e71e5aa9bff720354e7b5a70)(class ::llvm::StringRef ) = &::clang::LabelDecl::setMSAsmLabel;
    void  (::clang::LabelDecl::*method_pointer_27c374ed2842549b8a1232312a3358ec)() = &::clang::LabelDecl::setMSAsmLabelResolved;
    boost::python::class_< class ::clang::LabelDecl, autowig::HeldType< class ::clang::LabelDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_1fef548e459e5e63a7da47f30a93388e("LabelDecl", "", boost::python::no_init);
    class_1fef548e459e5e63a7da47f30a93388e.def("create_deserialized", method_pointer_a62378fcdb815cfd8f9bbb9e83b15d11, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof", method_pointer_59753aa663fd5ccdb6b0420d6ca7b8fe, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof_kind", method_pointer_d0e0f52d593459f2ab65fdf35926850c, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("get_ms_asm_label", method_pointer_cf95247ca2c750bd80ab4625dbe27242, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_gnu_local", method_pointer_c590d2d9988c5bbfab238760c5fc559b, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_ms_asm_label", method_pointer_bf771eee7db4530897926b6ae7b0bbbd, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_resolved_ms_asm_label", method_pointer_a03b4b9518a557a38cda0352535c7b37, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_loc_start", method_pointer_55ed1b90520e5e5ea59a90a29cda8ccb, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label", method_pointer_cbd9d664e71e5aa9bff720354e7b5a70, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label_resolved", method_pointer_27c374ed2842549b8a1232312a3358ec, "");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof_kind");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("create_deserialized");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::LabelDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LabelDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}