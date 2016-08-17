#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_1fef548e459e5e63a7da47f30a93388e()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::LabelDecl::*method_pointer_17f66aabe26959e28256eec7024b842f)() const = &::clang::LabelDecl::isMSAsmLabel;
    bool  (*method_pointer_5985128c7492564b9492e19a196107dc)(class ::clang::Decl  const *) = ::clang::LabelDecl::classof;
    void  (::clang::LabelDecl::*method_pointer_0f44c6d61edb50b9a67a99d8432427f0)() = &::clang::LabelDecl::setMSAsmLabelResolved;
    bool  (::clang::LabelDecl::*method_pointer_797af7c0677f56cd9bfa70e3fd168aaf)() const = &::clang::LabelDecl::isResolvedMSAsmLabel;
    bool  (::clang::LabelDecl::*method_pointer_08b2f136a6505aa8a0a4de3c8ee2dbd7)() const = &::clang::LabelDecl::isGnuLocal;
    class ::clang::LabelDecl  * (*method_pointer_ecdf74a457645ffa85731d55b9cf5ea7)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LabelDecl::CreateDeserialized;
    bool  (*method_pointer_bbf9150bb4a85d10a566b215a01eea1b)(enum ::clang::Decl::Kind ) = ::clang::LabelDecl::classofKind;
    boost::python::class_< class ::clang::LabelDecl, autowig::HeldType< class ::clang::LabelDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_1fef548e459e5e63a7da47f30a93388e("LabelDecl", "", boost::python::no_init);
    class_1fef548e459e5e63a7da47f30a93388e.def("is_ms_asm_label", method_pointer_17f66aabe26959e28256eec7024b842f, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof", method_pointer_5985128c7492564b9492e19a196107dc, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label_resolved", method_pointer_0f44c6d61edb50b9a67a99d8432427f0, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_resolved_ms_asm_label", method_pointer_797af7c0677f56cd9bfa70e3fd168aaf, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_gnu_local", method_pointer_08b2f136a6505aa8a0a4de3c8ee2dbd7, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("create_deserialized", method_pointer_ecdf74a457645ffa85731d55b9cf5ea7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof_kind", method_pointer_bbf9150bb4a85d10a566b215a01eea1b, "");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof_kind");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("create_deserialized");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::LabelDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LabelDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}