#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::FileScopeAsmDecl const volatile * get_pointer<class ::clang::FileScopeAsmDecl const volatile >(class ::clang::FileScopeAsmDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f962c9f0723d5c5fa0f3eb20b8b2a111()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FileScopeAsmDecl * (*method_pointer_39a483a06b98567da31661d22cabb732)(class ::clang::ASTContext &, unsigned int ) = ::clang::FileScopeAsmDecl::CreateDeserialized;
    class ::clang::SourceLocation  (::clang::FileScopeAsmDecl::*method_pointer_a126e52647505a59849495d7f5190482)() const = &::clang::FileScopeAsmDecl::getAsmLoc;
    class ::clang::SourceLocation  (::clang::FileScopeAsmDecl::*method_pointer_7ff376b6548e51d09b4e4834bd9b76fb)() const = &::clang::FileScopeAsmDecl::getRParenLoc;
    void  (::clang::FileScopeAsmDecl::*method_pointer_7b61a7d3fef85657aec0eadcc091639b)(class ::clang::SourceLocation ) = &::clang::FileScopeAsmDecl::setRParenLoc;
    bool  (*method_pointer_11c3f54f369d505db42f7099519a66a5)(class ::clang::Decl const *) = ::clang::FileScopeAsmDecl::classof;
    bool  (*method_pointer_752a12b1cf6e5656a57a1fd2fd1b4b65)(enum ::clang::Decl::Kind ) = ::clang::FileScopeAsmDecl::classofKind;
    boost::python::class_< class ::clang::FileScopeAsmDecl, autowig::Held< class ::clang::FileScopeAsmDecl >::Type, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_f962c9f0723d5c5fa0f3eb20b8b2a111("FileScopeAsmDecl", "", boost::python::no_init);
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("create_deserialized", method_pointer_39a483a06b98567da31661d22cabb732, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("get_asm_loc", method_pointer_a126e52647505a59849495d7f5190482, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("get_r_paren_loc", method_pointer_7ff376b6548e51d09b4e4834bd9b76fb, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("set_r_paren_loc", method_pointer_7b61a7d3fef85657aec0eadcc091639b, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("classof", method_pointer_11c3f54f369d505db42f7099519a66a5, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("classof_kind", method_pointer_752a12b1cf6e5656a57a1fd2fd1b4b65, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.staticmethod("classof_kind");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.staticmethod("create_deserialized");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.staticmethod("classof");

    if(autowig::Held< class ::clang::FileScopeAsmDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::FileScopeAsmDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::FileScopeAsmDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::FileScopeAsmDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::FileScopeAsmDecl >::Type, class ::clang::FileScopeAsmDecl > > >();
    }

}