#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_c847c69cad125c81a14648604da481c4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateArgumentList  * (*method_pointer_78ecdadbd0b15341b5ad49c4379fb058)(class ::clang::ASTContext  &, class ::clang::TemplateArgument  const *, unsigned int ) = ::clang::TemplateArgumentList::CreateCopy;
    class ::clang::TemplateArgument  const * (::clang::TemplateArgumentList::*method_pointer_c4731a9e48f95ed293d5a7a386b1b37a)() const = &::clang::TemplateArgumentList::data;
    class ::clang::TemplateArgument  const & (::clang::TemplateArgumentList::*method_pointer_032be4257d7950c9a65816f3e25d081b)(unsigned int ) const = &::clang::TemplateArgumentList::get;
    class ::clang::TemplateArgument  const & (::clang::TemplateArgumentList::*method_pointer_59b6b9fa88525d17a2da66dde41bf11b)(unsigned int ) const = &::clang::TemplateArgumentList::operator[];
    unsigned int  (::clang::TemplateArgumentList::*method_pointer_e28896dc3db655c692242d4b88677e82)() const = &::clang::TemplateArgumentList::size;
    boost::python::class_< class ::clang::TemplateArgumentList, autowig::HeldType< class ::clang::TemplateArgumentList >, boost::noncopyable > class_c847c69cad125c81a14648604da481c4("TemplateArgumentList", "", boost::python::no_init);
    class_c847c69cad125c81a14648604da481c4.def("create_copy", method_pointer_78ecdadbd0b15341b5ad49c4379fb058, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c847c69cad125c81a14648604da481c4.def("data", method_pointer_c4731a9e48f95ed293d5a7a386b1b37a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c847c69cad125c81a14648604da481c4.def("get", method_pointer_032be4257d7950c9a65816f3e25d081b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c847c69cad125c81a14648604da481c4.def("__getitem__", method_pointer_59b6b9fa88525d17a2da66dde41bf11b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c847c69cad125c81a14648604da481c4.def("size", method_pointer_e28896dc3db655c692242d4b88677e82, "");
    class_c847c69cad125c81a14648604da481c4.staticmethod("create_copy");

}