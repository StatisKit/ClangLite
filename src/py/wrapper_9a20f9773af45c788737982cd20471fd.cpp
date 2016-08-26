#include "_clanglite.h"


namespace autowig
{
}


void wrapper_9a20f9773af45c788737982cd20471fd()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamespaceDecl  * (*method_pointer_05267f2f3b855f0cb28aa490e2fefdb6)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceDecl::CreateDeserialized;
    class ::clang::NamespaceDecl  * (*method_pointer_6c32d3066fd25dd2b92563bf596aae92)(class ::clang::DeclContext  const *) = ::clang::NamespaceDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_754e83310c385b02b8bf3539e490e48e)(class ::clang::NamespaceDecl  const *) = ::clang::NamespaceDecl::castToDeclContext;
    bool  (*method_pointer_e5e5e3e62c52517e8f9807ccfe4abd40)(class ::clang::Decl  const *) = ::clang::NamespaceDecl::classof;
    bool  (*method_pointer_6a81862e76c855439b6727a3b4eb3b42)(enum ::clang::Decl::Kind ) = ::clang::NamespaceDecl::classofKind;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_0d52e8d0a5f25dc8a712dccae92dafcf)() const = &::clang::NamespaceDecl::getAnonymousNamespace;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_1cf7f0e9ea3f5b078f94eb59b9dd0721)() = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_0f3b0fcce22957bc99097666f3f2a558)() const = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_def575c074d85fdaba8de0fe20cc1ffa)() const = &::clang::NamespaceDecl::getLocStart;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_0b8595542df1562092d9a39d0efb6eba)() = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_a87bd4157e4f54ca9d25c7c43e7401ee)() const = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_7ba27883e3675998a32d9fb89cb4eef0)() const = &::clang::NamespaceDecl::getRBraceLoc;
    bool  (::clang::NamespaceDecl::*method_pointer_25d52d4d643b526b800997fe5967b6b6)() const = &::clang::NamespaceDecl::isAnonymousNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_3a9a287b8510521dbd0974a9cec77025)() const = &::clang::NamespaceDecl::isInline;
    bool  (::clang::NamespaceDecl::*method_pointer_e498519c8b6d5555926ed9145f4620f4)() const = &::clang::NamespaceDecl::isOriginalNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_d772bf535c725d44bdb0362c7033694c)(class ::clang::NamespaceDecl  *) = &::clang::NamespaceDecl::setAnonymousNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_3fff9632f4985685879e0cbcd23ddf75)(bool ) = &::clang::NamespaceDecl::setInline;
    void  (::clang::NamespaceDecl::*method_pointer_5703301fd64c576bb8fe9e388891fe9b)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setLocStart;
    void  (::clang::NamespaceDecl::*method_pointer_4a7dbaf6e6a45de1badaf74d2a827726)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setRBraceLoc;
    boost::python::class_< class ::clang::NamespaceDecl, autowig::HeldType< class ::clang::NamespaceDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_9a20f9773af45c788737982cd20471fd("NamespaceDecl", "", boost::python::no_init);
    class_9a20f9773af45c788737982cd20471fd.def("create_deserialized", method_pointer_05267f2f3b855f0cb28aa490e2fefdb6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_from_decl_context", method_pointer_6c32d3066fd25dd2b92563bf596aae92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_to_decl_context", method_pointer_754e83310c385b02b8bf3539e490e48e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("classof", method_pointer_e5e5e3e62c52517e8f9807ccfe4abd40, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof_kind", method_pointer_6a81862e76c855439b6727a3b4eb3b42, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_0d52e8d0a5f25dc8a712dccae92dafcf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_1cf7f0e9ea3f5b078f94eb59b9dd0721, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_0f3b0fcce22957bc99097666f3f2a558, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_loc_start", method_pointer_def575c074d85fdaba8de0fe20cc1ffa, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_0b8595542df1562092d9a39d0efb6eba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_a87bd4157e4f54ca9d25c7c43e7401ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_r_brace_loc", method_pointer_7ba27883e3675998a32d9fb89cb4eef0, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_25d52d4d643b526b800997fe5967b6b6, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_3a9a287b8510521dbd0974a9cec77025, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_e498519c8b6d5555926ed9145f4620f4, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_d772bf535c725d44bdb0362c7033694c, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_3fff9632f4985685879e0cbcd23ddf75, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_loc_start", method_pointer_5703301fd64c576bb8fe9e388891fe9b, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_r_brace_loc", method_pointer_4a7dbaf6e6a45de1badaf74d2a827726, "");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("classof_kind");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("create_deserialized");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("classof");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("cast_from_decl_context");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::NamespaceDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamespaceDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamespaceDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}