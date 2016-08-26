#include "_clanglite.h"


namespace autowig
{
}


void wrapper_c847c69cad125c81a14648604da481c4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateArgumentList  * (*method_pointer_2bb34c100458581d83846363ffb0632e)(class ::clang::ASTContext  &, class ::clang::TemplateArgument  const *, unsigned int ) = ::clang::TemplateArgumentList::CreateCopy;
    class ::clang::TemplateArgument  const * (::clang::TemplateArgumentList::*method_pointer_e3cd7ceb2f8d5181a08e57870e74f36a)() const = &::clang::TemplateArgumentList::data;
    class ::clang::TemplateArgument  const & (::clang::TemplateArgumentList::*method_pointer_8393e7e0690458639803cd41a717e577)(unsigned int ) const = &::clang::TemplateArgumentList::get;
    class ::clang::TemplateArgument  const & (::clang::TemplateArgumentList::*method_pointer_933497be1b425d26af6d82ceff835750)(unsigned int ) const = &::clang::TemplateArgumentList::operator[];
    unsigned int  (::clang::TemplateArgumentList::*method_pointer_c9b4a64a65e45a94b138919d6629d50f)() const = &::clang::TemplateArgumentList::size;
    boost::python::class_< class ::clang::TemplateArgumentList, autowig::HeldType< class ::clang::TemplateArgumentList >, boost::noncopyable > class_c847c69cad125c81a14648604da481c4("TemplateArgumentList", "", boost::python::no_init);
    class_c847c69cad125c81a14648604da481c4.def("create_copy", method_pointer_2bb34c100458581d83846363ffb0632e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c847c69cad125c81a14648604da481c4.def("data", method_pointer_e3cd7ceb2f8d5181a08e57870e74f36a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c847c69cad125c81a14648604da481c4.def("get", method_pointer_8393e7e0690458639803cd41a717e577, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c847c69cad125c81a14648604da481c4.def("__getitem__", method_pointer_933497be1b425d26af6d82ceff835750, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c847c69cad125c81a14648604da481c4.def("size", method_pointer_c9b4a64a65e45a94b138919d6629d50f, "");
    class_c847c69cad125c81a14648604da481c4.staticmethod("create_copy");

}