#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TemplateSpecializationType const volatile * get_pointer<class ::clang::TemplateSpecializationType const volatile >(class ::clang::TemplateSpecializationType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_13b544d609775d6c82f349029c56dab2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::TemplateSpecializationType::*method_pointer_32570f5d573b5fea878e752f4a405e54)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (::clang::TemplateSpecializationType::*method_pointer_e7a0cc626aea5e2c84adea8995e9d802)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_1773a270a02d57538b261730313c0c7c)() const = &::clang::TemplateSpecializationType::getAliasedType;
    ::clang::TemplateSpecializationType::iterator  (::clang::TemplateSpecializationType::*method_pointer_1e81c076c41e56e78490a1238e05f389)() const = &::clang::TemplateSpecializationType::begin;
    ::clang::TemplateSpecializationType::iterator  (::clang::TemplateSpecializationType::*method_pointer_ab9d699ba6a25ba28611017b22fbd6bc)() const = &::clang::TemplateSpecializationType::end;
    class ::clang::TemplateArgument const * (::clang::TemplateSpecializationType::*method_pointer_65645df33dd2561dbc7a57ac992e78f9)() const = &::clang::TemplateSpecializationType::getArgs;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_bc8e9bedf39f5beabf86cf34e2a7625a)() const = &::clang::TemplateSpecializationType::getNumArgs;
    class ::clang::TemplateArgument const & (::clang::TemplateSpecializationType::*method_pointer_e33d043f4f925b8f9cb3cacd8c9d07f8)(unsigned int ) const = &::clang::TemplateSpecializationType::getArg;
    bool  (::clang::TemplateSpecializationType::*method_pointer_8591e5ab51055abd8cbe7e465f0b2e2b)() const = &::clang::TemplateSpecializationType::isSugared;
    class ::clang::QualType  (::clang::TemplateSpecializationType::*method_pointer_8fd4b99c91d65ccd98dafb4dd92e1b9a)() const = &::clang::TemplateSpecializationType::desugar;
    bool  (*method_pointer_1e9bd34af7775114b870ebba617f1a8d)(class ::clang::Type const *) = ::clang::TemplateSpecializationType::classof;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::Held< class ::clang::TemplateSpecializationType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "Represents a type template specialization; the template must be a class\ntemplate, a type alias template, or a template template parameter. A\ntemplate which cannot be resolved to one of these, e.g. because it is\nwritten with a dependent scope specifier, is instead represented as a @c\nDependentTemplateSpecializationType.\n\nA non-dependent template specialization type is always 'sugar',\ntypically for a :raw-latex:`\\c R`ecordType. For example, a class\ntemplate specialization type of :raw-latex:`\\c v`ector will refer to a\ntag type for the instantiation :raw-latex:`\\c s`td::vector>\n\nTemplate specializations are dependent if either the template or any of\nthe template arguments are dependent, in which case the type may also be\ncanonical.\n\nInstances of this type are allocated with a trailing array of\nTemplateArguments, followed by a QualType representing the non-canonical\naliased type when the template is a type alias template.\n\n", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_32570f5d573b5fea878e752f4a405e54, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_e7a0cc626aea5e2c84adea8995e9d802, "Determine if this template specialization type is for a type alias\ntemplate that has been substituted.\n\nNearly every template specialization type whose template is an alias\ntemplate will be substituted. However, this is not the case when the\nspecialization contains a pack expansion but the template alias does not\nhave a corresponding parameter pack, e.g.,\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_13b544d609775d6c82f349029c56dab2.def("get_aliased_type", method_pointer_1773a270a02d57538b261730313c0c7c, ":Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_13b544d609775d6c82f349029c56dab2.def("begin", method_pointer_1e81c076c41e56e78490a1238e05f389, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("end", method_pointer_ab9d699ba6a25ba28611017b22fbd6bc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_13b544d609775d6c82f349029c56dab2.def("get_args", method_pointer_65645df33dd2561dbc7a57ac992e78f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.TemplateArgument`\n\n");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_bc8e9bedf39f5beabf86cf34e2a7625a, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_13b544d609775d6c82f349029c56dab2.def("get_arg", method_pointer_e33d043f4f925b8f9cb3cacd8c9d07f8, boost::python::return_value_policy< boost::python::return_by_value >(), ":Parameter:\n    `Idx` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.TemplateArgument`\n\n");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_8591e5ab51055abd8cbe7e465f0b2e2b, "");
    class_13b544d609775d6c82f349029c56dab2.def("desugar", method_pointer_8fd4b99c91d65ccd98dafb4dd92e1b9a, "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_1e9bd34af7775114b870ebba617f1a8d, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(autowig::Held< class ::clang::TemplateSpecializationType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TemplateSpecializationType >::Type, autowig::Held< class ::clang::Type >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::TemplateSpecializationType >::Type, boost::python::objects::make_ptr_instance< class ::clang::TemplateSpecializationType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::TemplateSpecializationType >::Type, class ::clang::TemplateSpecializationType > > >();
    }

}