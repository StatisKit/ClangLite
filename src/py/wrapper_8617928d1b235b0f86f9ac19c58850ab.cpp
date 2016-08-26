#include "_clanglite.h"


namespace autowig
{
}


void wrapper_8617928d1b235b0f86f9ac19c58850ab()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TypeAliasDecl  * (*method_pointer_197dce6d6e6659528c00ee10bbf6541e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TypeAliasDecl::CreateDeserialized;
    bool  (*method_pointer_d990fa79a8d053a1ba3d2ccdb3fce5f1)(class ::clang::Decl  const *) = ::clang::TypeAliasDecl::classof;
    bool  (*method_pointer_12cad0e260b75b6f9b629c49f45d35db)(enum ::clang::Decl::Kind ) = ::clang::TypeAliasDecl::classofKind;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasDecl::*method_pointer_f2199bdad0dc5b8ea05e1902b6c43d98)() const = &::clang::TypeAliasDecl::getDescribedAliasTemplate;
    void  (::clang::TypeAliasDecl::*method_pointer_ee7f2302434a5db0a2fa55f6b689cdfc)(class ::clang::TypeAliasTemplateDecl  *) = &::clang::TypeAliasDecl::setDescribedAliasTemplate;
    boost::python::class_< class ::clang::TypeAliasDecl, autowig::HeldType< class ::clang::TypeAliasDecl >, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_8617928d1b235b0f86f9ac19c58850ab("TypeAliasDecl", "", boost::python::no_init);
    class_8617928d1b235b0f86f9ac19c58850ab.def("create_deserialized", method_pointer_197dce6d6e6659528c00ee10bbf6541e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("classof", method_pointer_d990fa79a8d053a1ba3d2ccdb3fce5f1, "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("classof_kind", method_pointer_12cad0e260b75b6f9b629c49f45d35db, "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("get_described_alias_template", method_pointer_f2199bdad0dc5b8ea05e1902b6c43d98, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("set_described_alias_template", method_pointer_ee7f2302434a5db0a2fa55f6b689cdfc, "");
    class_8617928d1b235b0f86f9ac19c58850ab.staticmethod("classof_kind");
    class_8617928d1b235b0f86f9ac19c58850ab.staticmethod("create_deserialized");
    class_8617928d1b235b0f86f9ac19c58850ab.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeAliasDecl >, autowig::HeldType< class ::clang::TypedefNameDecl > >();
    }

}