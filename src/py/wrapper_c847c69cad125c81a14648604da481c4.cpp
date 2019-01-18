#include "_clanglite.h"

class ::clang::TemplateArgument const & (::clang::TemplateArgumentList::*method_pointer_dd06961cfded59dabbe6e7d692e2c8c6)(unsigned int )const= &::clang::TemplateArgumentList::get;
class ::clang::TemplateArgument const & (::clang::TemplateArgumentList::*method_pointer_56d336a1822c5f4e82f0acd49d06cfc7)(unsigned int )const= &::clang::TemplateArgumentList::operator[];
unsigned int  (::clang::TemplateArgumentList::*method_pointer_44b86487c7b254408d02b63768cb5d1d)()const= &::clang::TemplateArgumentList::size;
class ::clang::TemplateArgument const * (::clang::TemplateArgumentList::*method_pointer_19dd48bb15e85005a4b9de189e5f4dd5)()const= &::clang::TemplateArgumentList::data;

namespace autowig {
}

void wrapper_c847c69cad125c81a14648604da481c4(pybind11::module& module)
{

    pybind11::class_<class ::clang::TemplateArgumentList, autowig::HolderType< class ::clang::TemplateArgumentList >::Type > class_c847c69cad125c81a14648604da481c4(module, "TemplateArgumentList", "A template argument list.\n\n");
    class_c847c69cad125c81a14648604da481c4.def("get", method_pointer_dd06961cfded59dabbe6e7d692e2c8c6, pybind11::return_value_policy::copy, "Retrieve the template argument at a given index.\n\n:Parameter:\n    `Idx` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::TemplateArgument`\n\n");
    class_c847c69cad125c81a14648604da481c4.def("__getitem__", method_pointer_56d336a1822c5f4e82f0acd49d06cfc7, pybind11::return_value_policy::copy, "Retrieve the template argument at a given index.\n\n:Parameter:\n    `Idx` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::TemplateArgument`\n\n");
    class_c847c69cad125c81a14648604da481c4.def("__len__", method_pointer_44b86487c7b254408d02b63768cb5d1d, "Retrieve the number of template arguments in this template argument\nlist.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_c847c69cad125c81a14648604da481c4.def("data", method_pointer_19dd48bb15e85005a4b9de189e5f4dd5, pybind11::return_value_policy::reference_internal, "Retrieve a pointer to the template argument list.\n\n:Return Type:\n    :cpp:class:`::clang::TemplateArgument`\n\n");

}