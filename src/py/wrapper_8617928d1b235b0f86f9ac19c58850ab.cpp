#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TypeAliasDecl const volatile * get_pointer<class ::clang::TypeAliasDecl const volatile >(class ::clang::TypeAliasDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8617928d1b235b0f86f9ac19c58850ab()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TypeAliasDecl * (*method_pointer_21d4b660c0a15d12a536268039431ff8)(class ::clang::ASTContext &, unsigned int ) = ::clang::TypeAliasDecl::CreateDeserialized;
    class ::clang::TypeAliasTemplateDecl * (::clang::TypeAliasDecl::*method_pointer_eb1326b4422f5998a5e691510d070ad3)() const = &::clang::TypeAliasDecl::getDescribedAliasTemplate;
    void  (::clang::TypeAliasDecl::*method_pointer_10221e90b08e596dbae4c69f82863eee)(class ::clang::TypeAliasTemplateDecl *) = &::clang::TypeAliasDecl::setDescribedAliasTemplate;
    bool  (*method_pointer_32e78a22c66957c6899dfaca2ec7dac1)(class ::clang::Decl const *) = ::clang::TypeAliasDecl::classof;
    bool  (*method_pointer_6cf8916dcb2c53e49eec8ea84e668218)(enum ::clang::Decl::Kind ) = ::clang::TypeAliasDecl::classofKind;
    boost::python::class_< class ::clang::TypeAliasDecl, autowig::Held< class ::clang::TypeAliasDecl >::Type, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_8617928d1b235b0f86f9ac19c58850ab("TypeAliasDecl", "", boost::python::no_init);
    class_8617928d1b235b0f86f9ac19c58850ab.def("create_deserialized", method_pointer_21d4b660c0a15d12a536268039431ff8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("get_described_alias_template", method_pointer_eb1326b4422f5998a5e691510d070ad3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("set_described_alias_template", method_pointer_10221e90b08e596dbae4c69f82863eee, "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("classof", method_pointer_32e78a22c66957c6899dfaca2ec7dac1, "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("classof_kind", method_pointer_6cf8916dcb2c53e49eec8ea84e668218, "");
    class_8617928d1b235b0f86f9ac19c58850ab.staticmethod("classof_kind");
    class_8617928d1b235b0f86f9ac19c58850ab.staticmethod("create_deserialized");
    class_8617928d1b235b0f86f9ac19c58850ab.staticmethod("classof");

    if(autowig::Held< class ::clang::TypeAliasDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TypeAliasDecl >::Type, autowig::Held< class ::clang::TypedefNameDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::TypeAliasDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::TypeAliasDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::TypeAliasDecl >::Type, class ::clang::TypeAliasDecl > > >();
    }

}