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
    class ::clang::LabelDecl  * (*method_pointer_5d5833fc09075b4e9efd09a22a5a55dd)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LabelDecl::CreateDeserialized;
    bool  (*method_pointer_961dca7d30b0525a83e8fdde59ca0e41)(class ::clang::Decl  const *) = ::clang::LabelDecl::classof;
    bool  (*method_pointer_a9a2731e79065a8c8e3b20bc95e22f69)(enum ::clang::Decl::Kind ) = ::clang::LabelDecl::classofKind;
    class ::llvm::StringRef  (::clang::LabelDecl::*method_pointer_d890ab9fd270573199d4efaf74ee3470)() const = &::clang::LabelDecl::getMSAsmLabel;
    bool  (::clang::LabelDecl::*method_pointer_b9dd7516ad6d5fea9eb4c5952dce98a2)() const = &::clang::LabelDecl::isGnuLocal;
    bool  (::clang::LabelDecl::*method_pointer_7f84873c035b555895a12e4e9e8885da)() const = &::clang::LabelDecl::isMSAsmLabel;
    bool  (::clang::LabelDecl::*method_pointer_094fb0f890035598b25fbb6de160100a)() const = &::clang::LabelDecl::isResolvedMSAsmLabel;
    void  (::clang::LabelDecl::*method_pointer_12db198facde599199bb3c68bfc11deb)(class ::clang::SourceLocation ) = &::clang::LabelDecl::setLocStart;
    void  (::clang::LabelDecl::*method_pointer_0129e024e30855f8978a90593304497d)(class ::llvm::StringRef ) = &::clang::LabelDecl::setMSAsmLabel;
    void  (::clang::LabelDecl::*method_pointer_5925ccfc67de516686c8309240b1195c)() = &::clang::LabelDecl::setMSAsmLabelResolved;
    boost::python::class_< class ::clang::LabelDecl, autowig::HeldType< class ::clang::LabelDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_1fef548e459e5e63a7da47f30a93388e("LabelDecl", "", boost::python::no_init);
    class_1fef548e459e5e63a7da47f30a93388e.def("create_deserialized", method_pointer_5d5833fc09075b4e9efd09a22a5a55dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof", method_pointer_961dca7d30b0525a83e8fdde59ca0e41, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof_kind", method_pointer_a9a2731e79065a8c8e3b20bc95e22f69, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("get_ms_asm_label", method_pointer_d890ab9fd270573199d4efaf74ee3470, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_gnu_local", method_pointer_b9dd7516ad6d5fea9eb4c5952dce98a2, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_ms_asm_label", method_pointer_7f84873c035b555895a12e4e9e8885da, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_resolved_ms_asm_label", method_pointer_094fb0f890035598b25fbb6de160100a, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_loc_start", method_pointer_12db198facde599199bb3c68bfc11deb, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label", method_pointer_0129e024e30855f8978a90593304497d, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label_resolved", method_pointer_5925ccfc67de516686c8309240b1195c, "");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof_kind");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("create_deserialized");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::LabelDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LabelDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}