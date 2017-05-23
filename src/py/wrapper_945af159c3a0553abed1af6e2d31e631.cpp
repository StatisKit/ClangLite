#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TypeDecl const volatile * get_pointer<class ::clang::TypeDecl const volatile >(class ::clang::TypeDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_945af159c3a0553abed1af6e2d31e631()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::Type const * (::clang::TypeDecl::*method_pointer_4d889ca109c85f99a4aa8d651f77192c)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_573b1311c49c58c6ad28503995558b7d)(class ::clang::Type const *) = &::clang::TypeDecl::setTypeForDecl;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_21782ce4de6858238e1dfa3115dab0a8)() const = &::clang::TypeDecl::getLocStart;
    void  (::clang::TypeDecl::*method_pointer_77260870f0a153f5840b33d168afbdec)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    bool  (*method_pointer_e6b9131680cc5433a597ce39f0ccdd50)(class ::clang::Decl const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_e2eccbbf413c58d1bc2324f8ba8b1c17)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    boost::python::class_< class ::clang::TypeDecl, autowig::Held< class ::clang::TypeDecl >::Type, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_4d889ca109c85f99a4aa8d651f77192c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_573b1311c49c58c6ad28503995558b7d, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_21782ce4de6858238e1dfa3115dab0a8, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_77260870f0a153f5840b33d168afbdec, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_e6b9131680cc5433a597ce39f0ccdd50, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_e2eccbbf413c58d1bc2324f8ba8b1c17, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(autowig::Held< class ::clang::TypeDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TypeDecl >::Type, autowig::Held< class ::clang::NamedDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::TypeDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::TypeDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::TypeDecl >::Type, class ::clang::TypeDecl > > >();
    }

}