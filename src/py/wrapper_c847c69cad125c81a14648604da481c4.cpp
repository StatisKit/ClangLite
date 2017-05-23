#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TemplateArgumentList const volatile * get_pointer<class ::clang::TemplateArgumentList const volatile >(class ::clang::TemplateArgumentList const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c847c69cad125c81a14648604da481c4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateArgumentList * (*method_pointer_43a1a1e5af4351f1aba92d2d9f7933be)(class ::clang::ASTContext &, class ::clang::TemplateArgument const *, unsigned int ) = ::clang::TemplateArgumentList::CreateCopy;
    class ::clang::TemplateArgument const & (::clang::TemplateArgumentList::*method_pointer_dd06961cfded59dabbe6e7d692e2c8c6)(unsigned int ) const = &::clang::TemplateArgumentList::get;
    class ::clang::TemplateArgument const & (::clang::TemplateArgumentList::*method_pointer_56d336a1822c5f4e82f0acd49d06cfc7)(unsigned int ) const = &::clang::TemplateArgumentList::operator[];
    unsigned int  (::clang::TemplateArgumentList::*method_pointer_44b86487c7b254408d02b63768cb5d1d)() const = &::clang::TemplateArgumentList::size;
    class ::clang::TemplateArgument const * (::clang::TemplateArgumentList::*method_pointer_19dd48bb15e85005a4b9de189e5f4dd5)() const = &::clang::TemplateArgumentList::data;
    boost::python::class_< class ::clang::TemplateArgumentList, autowig::Held< class ::clang::TemplateArgumentList >::Type, boost::noncopyable > class_c847c69cad125c81a14648604da481c4("TemplateArgumentList", "A template argument list.\n\n", boost::python::no_init);
    class_c847c69cad125c81a14648604da481c4.def("create_copy", method_pointer_43a1a1e5af4351f1aba92d2d9f7933be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Create a new template argument list that copies the given set of\ntemplate arguments.\n\n:Parameters:\n  - `Context` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n  - `Args` (:py:class:`clanglite.clang.TemplateArgument`) - Undocumented\n  - `NumArgs` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.TemplateArgumentList`\n\n");
    class_c847c69cad125c81a14648604da481c4.def("get", method_pointer_dd06961cfded59dabbe6e7d692e2c8c6, boost::python::return_value_policy< boost::python::return_by_value >(), "Retrieve the template argument at a given index.\n\n:Parameter:\n    `Idx` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.TemplateArgument`\n\n");
    class_c847c69cad125c81a14648604da481c4.def("__getitem__", method_pointer_56d336a1822c5f4e82f0acd49d06cfc7, boost::python::return_value_policy< boost::python::return_by_value >(), "Retrieve the template argument at a given index.\n\n:Parameter:\n    `Idx` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.TemplateArgument`\n\n");
    class_c847c69cad125c81a14648604da481c4.def("__len__", method_pointer_44b86487c7b254408d02b63768cb5d1d, "Retrieve the number of template arguments in this template argument\nlist.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_c847c69cad125c81a14648604da481c4.def("data", method_pointer_19dd48bb15e85005a4b9de189e5f4dd5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve a pointer to the template argument list.\n\n:Return Type:\n    :py:class:`clanglite.clang.TemplateArgument`\n\n");
    class_c847c69cad125c81a14648604da481c4.staticmethod("create_copy");

}