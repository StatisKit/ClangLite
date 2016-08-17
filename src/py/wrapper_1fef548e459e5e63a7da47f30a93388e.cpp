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
    class ::clang::LabelDecl  * (*method_pointer_a85d5b36a9ff5da5a41d58447a3fa574)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LabelDecl::CreateDeserialized;
    bool  (*method_pointer_5f37a8172a9b5f16a8688fbd4a20b827)(enum ::clang::Decl::Kind ) = ::clang::LabelDecl::classofKind;
    bool  (::clang::LabelDecl::*method_pointer_56e1c6897f7f559aa07b9ca60e80866e)() const = &::clang::LabelDecl::isMSAsmLabel;
    void  (::clang::LabelDecl::*method_pointer_262c450d37a25abb8a130401427c19bb)() = &::clang::LabelDecl::setMSAsmLabelResolved;
    bool  (::clang::LabelDecl::*method_pointer_4b7f8057eb035bc98cb5befab0eba972)() const = &::clang::LabelDecl::isGnuLocal;
    bool  (*method_pointer_652ad794cb935184b77cbdb49b12c350)(class ::clang::Decl  const *) = ::clang::LabelDecl::classof;
    bool  (::clang::LabelDecl::*method_pointer_6cc7b0896846553d956b295824b0a4fb)() const = &::clang::LabelDecl::isResolvedMSAsmLabel;
    boost::python::class_< class ::clang::LabelDecl, autowig::HeldType< class ::clang::LabelDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_1fef548e459e5e63a7da47f30a93388e("LabelDecl", "", boost::python::no_init);
    class_1fef548e459e5e63a7da47f30a93388e.def("create_deserialized", method_pointer_a85d5b36a9ff5da5a41d58447a3fa574, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof_kind", method_pointer_5f37a8172a9b5f16a8688fbd4a20b827, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_ms_asm_label", method_pointer_56e1c6897f7f559aa07b9ca60e80866e, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label_resolved", method_pointer_262c450d37a25abb8a130401427c19bb, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_gnu_local", method_pointer_4b7f8057eb035bc98cb5befab0eba972, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof", method_pointer_652ad794cb935184b77cbdb49b12c350, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_resolved_ms_asm_label", method_pointer_6cc7b0896846553d956b295824b0a4fb, "");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof_kind");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("create_deserialized");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::LabelDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LabelDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}