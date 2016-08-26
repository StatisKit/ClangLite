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
    class ::clang::TemplateArgumentList  * (*method_pointer_4c8eb17839d1514f805e02fd66177e7d)(class ::clang::ASTContext  &, class ::clang::TemplateArgument  const *, unsigned int ) = ::clang::TemplateArgumentList::CreateCopy;
    class ::clang::TemplateArgument  const * (::clang::TemplateArgumentList::*method_pointer_68aae7edbab7591584cb2ccf674e4cd8)() const = &::clang::TemplateArgumentList::data;
    class ::clang::TemplateArgument  const & (::clang::TemplateArgumentList::*method_pointer_fcb5f7cf828c5dc3a78bfea55a17f023)(unsigned int ) const = &::clang::TemplateArgumentList::get;
    class ::clang::TemplateArgument  const & (::clang::TemplateArgumentList::*method_pointer_496af36cfb10588cbd13618298c5abc1)(unsigned int ) const = &::clang::TemplateArgumentList::operator[];
    unsigned int  (::clang::TemplateArgumentList::*method_pointer_4fca79f98dc15ced9eb917e3a9fb4c35)() const = &::clang::TemplateArgumentList::size;
    boost::python::class_< class ::clang::TemplateArgumentList, autowig::HeldType< class ::clang::TemplateArgumentList >, boost::noncopyable > class_c847c69cad125c81a14648604da481c4("TemplateArgumentList", "", boost::python::no_init);
    class_c847c69cad125c81a14648604da481c4.def("create_copy", method_pointer_4c8eb17839d1514f805e02fd66177e7d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c847c69cad125c81a14648604da481c4.def("data", method_pointer_68aae7edbab7591584cb2ccf674e4cd8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c847c69cad125c81a14648604da481c4.def("get", method_pointer_fcb5f7cf828c5dc3a78bfea55a17f023, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c847c69cad125c81a14648604da481c4.def("__getitem__", method_pointer_496af36cfb10588cbd13618298c5abc1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c847c69cad125c81a14648604da481c4.def("size", method_pointer_4fca79f98dc15ced9eb917e3a9fb4c35, "");
    class_c847c69cad125c81a14648604da481c4.staticmethod("create_copy");

}