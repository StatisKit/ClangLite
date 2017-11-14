#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ObjCIvarDecl const volatile * get_pointer<class ::clang::ObjCIvarDecl const volatile >(class ::clang::ObjCIvarDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_41db8c9435975db59206c5f1329984a4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCIvarDecl * (*method_pointer_2daefdc491b75748bf48b6beafbda5ec)(class ::clang::ASTContext &, unsigned int ) = ::clang::ObjCIvarDecl::CreateDeserialized;
    class ::clang::ObjCInterfaceDecl const * (::clang::ObjCIvarDecl::*method_pointer_d388ab5c98ba5ddebd43d23d4e163fe5)() const = &::clang::ObjCIvarDecl::getContainingInterface;
    class ::clang::ObjCIvarDecl * (::clang::ObjCIvarDecl::*method_pointer_154245794a475d6e9ea26bb0158bf7e4)() = &::clang::ObjCIvarDecl::getNextIvar;
    class ::clang::ObjCIvarDecl const * (::clang::ObjCIvarDecl::*method_pointer_0d00d22fe565528fa4ba00ba6509cf2c)() const = &::clang::ObjCIvarDecl::getNextIvar;
    void  (::clang::ObjCIvarDecl::*method_pointer_257958772a615eb291a32854c1d8d67d)(class ::clang::ObjCIvarDecl *) = &::clang::ObjCIvarDecl::setNextIvar;
    void  (::clang::ObjCIvarDecl::*method_pointer_7742954bdb905c6a8752dd661f0da4a3)(bool ) = &::clang::ObjCIvarDecl::setSynthesize;
    bool  (::clang::ObjCIvarDecl::*method_pointer_42312de989605595a099ea0fd8a549a2)() const = &::clang::ObjCIvarDecl::getSynthesize;
    class ::clang::QualType  (::clang::ObjCIvarDecl::*method_pointer_704850bf32225f97811da2617e534e94)(class ::clang::QualType ) const = &::clang::ObjCIvarDecl::getUsageType;
    bool  (*method_pointer_ecbbafd6fbd0585691540a965665dd7e)(class ::clang::Decl const *) = ::clang::ObjCIvarDecl::classof;
    bool  (*method_pointer_8ced530df45653a284c101dbfeeb1614)(enum ::clang::Decl::Kind ) = ::clang::ObjCIvarDecl::classofKind;
    boost::python::class_< class ::clang::ObjCIvarDecl, autowig::Held< class ::clang::ObjCIvarDecl >::Type, boost::python::bases< class ::clang::FieldDecl >, boost::noncopyable > class_41db8c9435975db59206c5f1329984a4("ObjCIvarDecl", "", boost::python::no_init);
    class_41db8c9435975db59206c5f1329984a4.def("create_deserialized", method_pointer_2daefdc491b75748bf48b6beafbda5ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_containing_interface", method_pointer_d388ab5c98ba5ddebd43d23d4e163fe5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Return the class interface that this ivar is logically contained in;\nthis is either the interface where the ivar was declared, or the\ninterface the ivar is conceptually a part of in the case of synthesized\nivars.\n\n:Return Type:\n    :py:class:`clanglite.clang.ObjCInterfaceDecl`\n\n");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_154245794a475d6e9ea26bb0158bf7e4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_0d00d22fe565528fa4ba00ba6509cf2c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("set_next_ivar", method_pointer_257958772a615eb291a32854c1d8d67d, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_synthesize", method_pointer_7742954bdb905c6a8752dd661f0da4a3, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_synthesize", method_pointer_42312de989605595a099ea0fd8a549a2, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_usage_type", method_pointer_704850bf32225f97811da2617e534e94, ":Parameter:\n    `objectType` (:py:class:`clanglite.clang.QualType`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_41db8c9435975db59206c5f1329984a4.def("classof", method_pointer_ecbbafd6fbd0585691540a965665dd7e, "");
    class_41db8c9435975db59206c5f1329984a4.def("classof_kind", method_pointer_8ced530df45653a284c101dbfeeb1614, "");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof_kind");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("create_deserialized");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof");

    if(autowig::Held< class ::clang::ObjCIvarDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCIvarDecl >::Type, autowig::Held< class ::clang::FieldDecl >::Type >();
    }

}