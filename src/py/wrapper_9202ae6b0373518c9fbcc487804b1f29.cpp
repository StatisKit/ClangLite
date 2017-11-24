#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TemplateTypeParmDecl const volatile * get_pointer<class ::clang::TemplateTypeParmDecl const volatile >(class ::clang::TemplateTypeParmDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9202ae6b0373518c9fbcc487804b1f29()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_1b101dd41759550191084cc1e3a234ac)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_2ecc6f9ccd955396aded9a5a2fe68891)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    class ::clang::QualType  (::clang::TemplateTypeParmDecl::*method_pointer_6de5caab17e95f0f84dc6603ecf530f7)() const = &::clang::TemplateTypeParmDecl::getDefaultArgument;
    class ::clang::SourceLocation  (::clang::TemplateTypeParmDecl::*method_pointer_2d36cde6998f5dd58bee87b3e77716a5)() const = &::clang::TemplateTypeParmDecl::getDefaultArgumentLoc;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_bc87a5ada712564389d00615ac378b06)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_4356affb20855d1d980e286e7bfdb6b8)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_2622c0477e775679b0f7868506ee1042)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_b667c385bf565c56b83d4519d6548383)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_03ad8f450223511a95c2a70632a4ae3d)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_738b0a3394425a348028ad17973cf43f)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    bool  (*method_pointer_d3225609ff4b5b75b018705f7c97a40d)(class ::clang::Decl const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_b5e30d0b734a5efba3df5db450414310)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::Held< class ::clang::TemplateTypeParmDecl >::Type, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "Declaration of a template type parameter.\n\nFor example, 'T' in\n\n", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_1b101dd41759550191084cc1e3a234ac, "Whether this template type parameter was declared with the 'typename'\nkeyword.\n\nIf not, it was declared with the 'class' keyword.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_2ecc6f9ccd955396aded9a5a2fe68891, "Determine whether this template parameter has a default argument.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument", method_pointer_6de5caab17e95f0f84dc6603ecf530f7, "Retrieve the default argument, if any.\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument_loc", method_pointer_2d36cde6998f5dd58bee87b3e77716a5, "Retrieves the location of the default argument declaration.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_bc87a5ada712564389d00615ac378b06, "Determines whether the default argument was inherited from a previous\ndeclaration of this template.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_4356affb20855d1d980e286e7bfdb6b8, "Removes the default argument of this template parameter.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_2622c0477e775679b0f7868506ee1042, "Set whether this template type parameter was declared with the\n'typename' or 'class' keyword.\n\n:Parameter:\n    `withTypename` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_b667c385bf565c56b83d4519d6548383, "Retrieve the depth of the template parameter.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_03ad8f450223511a95c2a70632a4ae3d, "Retrieve the index of the template parameter.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_738b0a3394425a348028ad17973cf43f, "Returns whether this is a parameter pack.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_d3225609ff4b5b75b018705f7c97a40d, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_b5e30d0b734a5efba3df5db450414310, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(autowig::Held< class ::clang::TemplateTypeParmDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TemplateTypeParmDecl >::Type, autowig::Held< class ::clang::TypeDecl >::Type >();
    }

}