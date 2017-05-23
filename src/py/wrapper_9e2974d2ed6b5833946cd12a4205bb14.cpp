#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::OMPThreadPrivateDecl const volatile * get_pointer<class ::clang::OMPThreadPrivateDecl const volatile >(class ::clang::OMPThreadPrivateDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9e2974d2ed6b5833946cd12a4205bb14()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::OMPThreadPrivateDecl * (*method_pointer_3eb975a8e60f5867a91d24cf4f65c268)(class ::clang::ASTContext &, unsigned int , unsigned int ) = ::clang::OMPThreadPrivateDecl::CreateDeserialized;
    unsigned int  (::clang::OMPThreadPrivateDecl::*method_pointer_0ea384a7028e5b81b1490daf41472c5b)() const = &::clang::OMPThreadPrivateDecl::varlist_size;
    bool  (::clang::OMPThreadPrivateDecl::*method_pointer_2319219169d85a93a23d9b18c46223f0)() const = &::clang::OMPThreadPrivateDecl::varlist_empty;
    bool  (*method_pointer_5209c5362ad558f683e2da4c1d95f174)(class ::clang::Decl const *) = ::clang::OMPThreadPrivateDecl::classof;
    bool  (*method_pointer_c62dc7ff539456679abd95c24df2ddd8)(enum ::clang::Decl::Kind ) = ::clang::OMPThreadPrivateDecl::classofKind;
    boost::python::class_< class ::clang::OMPThreadPrivateDecl, autowig::Held< class ::clang::OMPThreadPrivateDecl >::Type, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_9e2974d2ed6b5833946cd12a4205bb14("OMPThreadPrivateDecl", "This represents '#pragma omp threadprivate ...' directive. For example,\nin the following, both 'a' and 'A::b' are threadprivate:\n\n", boost::python::no_init);
    class_9e2974d2ed6b5833946cd12a4205bb14.def("create_deserialized", method_pointer_3eb975a8e60f5867a91d24cf4f65c268, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_size", method_pointer_0ea384a7028e5b81b1490daf41472c5b, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_empty", method_pointer_2319219169d85a93a23d9b18c46223f0, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof", method_pointer_5209c5362ad558f683e2da4c1d95f174, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof_kind", method_pointer_c62dc7ff539456679abd95c24df2ddd8, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof_kind");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("create_deserialized");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof");

    if(autowig::Held< class ::clang::OMPThreadPrivateDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::OMPThreadPrivateDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::OMPThreadPrivateDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::OMPThreadPrivateDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::OMPThreadPrivateDecl >::Type, class ::clang::OMPThreadPrivateDecl > > >();
    }

}