#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ObjCAtDefsFieldDecl const volatile * get_pointer<class ::clang::ObjCAtDefsFieldDecl const volatile >(class ::clang::ObjCAtDefsFieldDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_90fba55bcadf52088b0326eb2a205040()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCAtDefsFieldDecl * (*method_pointer_83c5fa6f39485e8f901598dba33095be)(class ::clang::ASTContext &, unsigned int ) = ::clang::ObjCAtDefsFieldDecl::CreateDeserialized;
    bool  (*method_pointer_d221044262765a60acaf9e3b81cca3c6)(class ::clang::Decl const *) = ::clang::ObjCAtDefsFieldDecl::classof;
    bool  (*method_pointer_149b9040920c5fffbdec7c6fceea3d15)(enum ::clang::Decl::Kind ) = ::clang::ObjCAtDefsFieldDecl::classofKind;
    boost::python::class_< class ::clang::ObjCAtDefsFieldDecl, autowig::Held< class ::clang::ObjCAtDefsFieldDecl >::Type, boost::python::bases< class ::clang::FieldDecl >, boost::noncopyable > class_90fba55bcadf52088b0326eb2a205040("ObjCAtDefsFieldDecl", "Represents a field declaration created by an @defs(...).\n\n", boost::python::no_init);
    class_90fba55bcadf52088b0326eb2a205040.def("create_deserialized", method_pointer_83c5fa6f39485e8f901598dba33095be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_90fba55bcadf52088b0326eb2a205040.def("classof", method_pointer_d221044262765a60acaf9e3b81cca3c6, "");
    class_90fba55bcadf52088b0326eb2a205040.def("classof_kind", method_pointer_149b9040920c5fffbdec7c6fceea3d15, "");
    class_90fba55bcadf52088b0326eb2a205040.staticmethod("classof_kind");
    class_90fba55bcadf52088b0326eb2a205040.staticmethod("create_deserialized");
    class_90fba55bcadf52088b0326eb2a205040.staticmethod("classof");

    if(autowig::Held< class ::clang::ObjCAtDefsFieldDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCAtDefsFieldDecl >::Type, autowig::Held< class ::clang::FieldDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::ObjCAtDefsFieldDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::ObjCAtDefsFieldDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::ObjCAtDefsFieldDecl >::Type, class ::clang::ObjCAtDefsFieldDecl > > >();
    }

}