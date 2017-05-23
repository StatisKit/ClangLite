#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ObjCProtocolDecl const volatile * get_pointer<class ::clang::ObjCProtocolDecl const volatile >(class ::clang::ObjCProtocolDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_179220ac78145becbf9b283ff6879c57()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCProtocolDecl * (*method_pointer_c2435c10af2a587898e72a37622212fc)(class ::clang::ASTContext &, unsigned int ) = ::clang::ObjCProtocolDecl::CreateDeserialized;
    ::clang::ObjCProtocolDecl::protocol_loc_iterator  (::clang::ObjCProtocolDecl::*method_pointer_40e753551b685ac789803e0f244b4c33)() const = &::clang::ObjCProtocolDecl::protocol_loc_begin;
    ::clang::ObjCProtocolDecl::protocol_loc_iterator  (::clang::ObjCProtocolDecl::*method_pointer_e7363ba152aa539b9dda7e49b087828e)() const = &::clang::ObjCProtocolDecl::protocol_loc_end;
    unsigned int  (::clang::ObjCProtocolDecl::*method_pointer_f6b6e1f7237e511baa352073adf56cf2)() const = &::clang::ObjCProtocolDecl::protocol_size;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_2f6e5935fb775a149c9c2044ddb5e0e9)() const = &::clang::ObjCProtocolDecl::hasDefinition;
    class ::clang::ObjCProtocolDecl * (::clang::ObjCProtocolDecl::*method_pointer_3ddfc804ceb55e5daff5ea2476a0adc8)() = &::clang::ObjCProtocolDecl::getDefinition;
    class ::clang::ObjCProtocolDecl const * (::clang::ObjCProtocolDecl::*method_pointer_64b45b8410c1597ebcbd75081fe20cfc)() const = &::clang::ObjCProtocolDecl::getDefinition;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_430f589ed97f5e62917c9542dd40691b)() const = &::clang::ObjCProtocolDecl::isThisDeclarationADefinition;
    void  (::clang::ObjCProtocolDecl::*method_pointer_af2078c132445eaebd78b4ea613afcfe)() = &::clang::ObjCProtocolDecl::startDefinition;
    class ::llvm::StringRef  (::clang::ObjCProtocolDecl::*method_pointer_4dce564cfb0f5bd8845a88d7278f2463)() const = &::clang::ObjCProtocolDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCProtocolDecl * (::clang::ObjCProtocolDecl::*method_pointer_51bf49cd48af521995f38f7a06cde86a)() = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl const * (::clang::ObjCProtocolDecl::*method_pointer_bbc8b1190c185b43b425c7d7f87abc1a)() const = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    bool  (*method_pointer_3f36db1e71f6528f85b0dea78bb19f75)(class ::clang::Decl const *) = ::clang::ObjCProtocolDecl::classof;
    bool  (*method_pointer_5b86596707c651c0aab3efb4bc4c9877)(enum ::clang::Decl::Kind ) = ::clang::ObjCProtocolDecl::classofKind;
    boost::python::class_< class ::clang::ObjCProtocolDecl, autowig::Held< class ::clang::ObjCProtocolDecl >::Type, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_179220ac78145becbf9b283ff6879c57("ObjCProtocolDecl", "Represents an Objective-C protocol declaration.\n\nObjective-C protocols declare a pure abstract type (i.e., no instance\nvariables are permitted). Protocols originally drew inspiration from C++\npure virtual functions (a C++ feature with nice semantics and lousy\nsyntax:-). Here is an example:\n\n", boost::python::no_init);
    class_179220ac78145becbf9b283ff6879c57.def("create_deserialized", method_pointer_c2435c10af2a587898e72a37622212fc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("protocol_loc_begin", method_pointer_40e753551b685ac789803e0f244b4c33, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("protocol_loc_end", method_pointer_e7363ba152aa539b9dda7e49b087828e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("protocol_size", method_pointer_f6b6e1f7237e511baa352073adf56cf2, "");
    class_179220ac78145becbf9b283ff6879c57.def("has_definition", method_pointer_2f6e5935fb775a149c9c2044ddb5e0e9, "Determine whether this protocol has a definition.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_3ddfc804ceb55e5daff5ea2476a0adc8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the definition of this protocol, if any.\n\n:Return Type:\n    :py:class:`clanglite.clang.ObjCProtocolDecl`\n\n");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_64b45b8410c1597ebcbd75081fe20cfc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the definition of this protocol, if any.\n\n:Return Type:\n    :py:class:`clanglite.clang.ObjCProtocolDecl`\n\n");
    class_179220ac78145becbf9b283ff6879c57.def("is_this_declaration_a_definition", method_pointer_430f589ed97f5e62917c9542dd40691b, "Determine whether this particular declaration is also the definition.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_179220ac78145becbf9b283ff6879c57.def("start_definition", method_pointer_af2078c132445eaebd78b4ea613afcfe, "Starts the definition of this Objective-C protocol.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_179220ac78145becbf9b283ff6879c57.def("get_obj_c_runtime_name_as_string", method_pointer_4dce564cfb0f5bd8845a88d7278f2463, ":Return Type:\n    :py:class:`clanglite.llvm.StringRef`\n\n");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_51bf49cd48af521995f38f7a06cde86a, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.ObjCProtocolDecl`\n\n");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_bbc8b1190c185b43b425c7d7f87abc1a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("classof", method_pointer_3f36db1e71f6528f85b0dea78bb19f75, "");
    class_179220ac78145becbf9b283ff6879c57.def("classof_kind", method_pointer_5b86596707c651c0aab3efb4bc4c9877, "");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof_kind");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("create_deserialized");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof");

    if(autowig::Held< class ::clang::ObjCProtocolDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCProtocolDecl >::Type, autowig::Held< class ::clang::ObjCContainerDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::ObjCProtocolDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::ObjCProtocolDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::ObjCProtocolDecl >::Type, class ::clang::ObjCProtocolDecl > > >();
    }

}