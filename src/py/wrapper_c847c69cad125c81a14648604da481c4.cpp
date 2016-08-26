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
    class ::clang::TemplateArgumentList  * (*method_pointer_8fe68a1f983c5b8f8382abff9d62dd90)(class ::clang::ASTContext  &, class ::clang::TemplateArgument  const *, unsigned int ) = ::clang::TemplateArgumentList::CreateCopy;
    class ::clang::TemplateArgument  const * (::clang::TemplateArgumentList::*method_pointer_9a97cad2a8315733ad060ae8fd8f0d4d)() const = &::clang::TemplateArgumentList::data;
    class ::clang::TemplateArgument  const & (::clang::TemplateArgumentList::*method_pointer_47e7c0ab26c55e068b3122733c24119e)(unsigned int ) const = &::clang::TemplateArgumentList::get;
    class ::clang::TemplateArgument  const & (::clang::TemplateArgumentList::*method_pointer_a0b6d9bfe68352b8929966021923adad)(unsigned int ) const = &::clang::TemplateArgumentList::operator[];
    unsigned int  (::clang::TemplateArgumentList::*method_pointer_9426b14a36fd5e04a1bebaceff49e6e0)() const = &::clang::TemplateArgumentList::size;
    boost::python::class_< class ::clang::TemplateArgumentList, autowig::HeldType< class ::clang::TemplateArgumentList >, boost::noncopyable > class_c847c69cad125c81a14648604da481c4("TemplateArgumentList", "", boost::python::no_init);
    class_c847c69cad125c81a14648604da481c4.def("create_copy", method_pointer_8fe68a1f983c5b8f8382abff9d62dd90, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c847c69cad125c81a14648604da481c4.def("data", method_pointer_9a97cad2a8315733ad060ae8fd8f0d4d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c847c69cad125c81a14648604da481c4.def("get", method_pointer_47e7c0ab26c55e068b3122733c24119e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c847c69cad125c81a14648604da481c4.def("__getitem__", method_pointer_a0b6d9bfe68352b8929966021923adad, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c847c69cad125c81a14648604da481c4.def("size", method_pointer_9426b14a36fd5e04a1bebaceff49e6e0, "");
    class_c847c69cad125c81a14648604da481c4.staticmethod("create_copy");

}