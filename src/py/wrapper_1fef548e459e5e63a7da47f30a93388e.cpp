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
    class ::clang::LabelDecl  * (*method_pointer_b6dc5824fc6c555391516d41a5e6772b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LabelDecl::CreateDeserialized;
    bool  (*method_pointer_f802db9220fd595fb3ac26e71817e72e)(class ::clang::Decl  const *) = ::clang::LabelDecl::classof;
    bool  (*method_pointer_3b79ebbadd2e53ccb916ffc7a2c567a7)(enum ::clang::Decl::Kind ) = ::clang::LabelDecl::classofKind;
    class ::llvm::StringRef  (::clang::LabelDecl::*method_pointer_d0ede0cbc3e35e3ca1793449aea87e56)() const = &::clang::LabelDecl::getMSAsmLabel;
    bool  (::clang::LabelDecl::*method_pointer_4e602f8a45f8510c9ec65ec3634ee546)() const = &::clang::LabelDecl::isGnuLocal;
    bool  (::clang::LabelDecl::*method_pointer_14f372b9ce425084b64f0031360e6771)() const = &::clang::LabelDecl::isMSAsmLabel;
    bool  (::clang::LabelDecl::*method_pointer_f2ad8e9f62915fae86cf48c5c045e84e)() const = &::clang::LabelDecl::isResolvedMSAsmLabel;
    void  (::clang::LabelDecl::*method_pointer_593248fe1cbe5beead50b1f544b3ff02)(class ::clang::SourceLocation ) = &::clang::LabelDecl::setLocStart;
    void  (::clang::LabelDecl::*method_pointer_953336eae3f65038b562732b4a105f4b)(class ::llvm::StringRef ) = &::clang::LabelDecl::setMSAsmLabel;
    void  (::clang::LabelDecl::*method_pointer_34e43ce513245cc5867d5b5a6f43de3f)() = &::clang::LabelDecl::setMSAsmLabelResolved;
    boost::python::class_< class ::clang::LabelDecl, autowig::HeldType< class ::clang::LabelDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_1fef548e459e5e63a7da47f30a93388e("LabelDecl", "", boost::python::no_init);
    class_1fef548e459e5e63a7da47f30a93388e.def("create_deserialized", method_pointer_b6dc5824fc6c555391516d41a5e6772b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof", method_pointer_f802db9220fd595fb3ac26e71817e72e, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof_kind", method_pointer_3b79ebbadd2e53ccb916ffc7a2c567a7, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("get_ms_asm_label", method_pointer_d0ede0cbc3e35e3ca1793449aea87e56, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_gnu_local", method_pointer_4e602f8a45f8510c9ec65ec3634ee546, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_ms_asm_label", method_pointer_14f372b9ce425084b64f0031360e6771, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_resolved_ms_asm_label", method_pointer_f2ad8e9f62915fae86cf48c5c045e84e, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_loc_start", method_pointer_593248fe1cbe5beead50b1f544b3ff02, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label", method_pointer_953336eae3f65038b562732b4a105f4b, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label_resolved", method_pointer_34e43ce513245cc5867d5b5a6f43de3f, "");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof_kind");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("create_deserialized");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::LabelDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LabelDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}