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
    bool  (::clang::LabelDecl::*method_pointer_35cc3148c33e5b149b54da9c28d5c6a2)() const = &::clang::LabelDecl::isMSAsmLabel;
    bool  (::clang::LabelDecl::*method_pointer_db99b312a7725b6a9689c28ae985f2f2)() const = &::clang::LabelDecl::isResolvedMSAsmLabel;
    bool  (::clang::LabelDecl::*method_pointer_012d34f907445695b47e4503549c9581)() const = &::clang::LabelDecl::isGnuLocal;
    bool  (*method_pointer_690ba2a25d975a6ca09c4c1684fde80a)(enum ::clang::Decl::Kind ) = ::clang::LabelDecl::classofKind;
    bool  (*method_pointer_06735dc860da5913a8d7a46742b2c753)(class ::clang::Decl  const *) = ::clang::LabelDecl::classof;
    class ::clang::LabelDecl  * (*method_pointer_ccf3258558855b1796922eb0a0dbd58a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LabelDecl::CreateDeserialized;
    void  (::clang::LabelDecl::*method_pointer_582af7800e1359d0b3104eaf7645d13e)() = &::clang::LabelDecl::setMSAsmLabelResolved;
    boost::python::class_< class ::clang::LabelDecl, autowig::HeldType< class ::clang::LabelDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_1fef548e459e5e63a7da47f30a93388e("LabelDecl", "", boost::python::no_init);
    class_1fef548e459e5e63a7da47f30a93388e.def("is_ms_asm_label", method_pointer_35cc3148c33e5b149b54da9c28d5c6a2, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_resolved_ms_asm_label", method_pointer_db99b312a7725b6a9689c28ae985f2f2, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_gnu_local", method_pointer_012d34f907445695b47e4503549c9581, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof_kind", method_pointer_690ba2a25d975a6ca09c4c1684fde80a, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof", method_pointer_06735dc860da5913a8d7a46742b2c753, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("create_deserialized", method_pointer_ccf3258558855b1796922eb0a0dbd58a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label_resolved", method_pointer_582af7800e1359d0b3104eaf7645d13e, "");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof_kind");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("create_deserialized");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::LabelDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LabelDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}