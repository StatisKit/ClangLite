#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_0dd00d729e905a24a952147ef6cb1f26()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_48c5f0de891e50fc929f12fcaa4b3191)(enum ::clang::Decl::Kind ) = ::clang::StaticAssertDecl::classofKind;
    bool  (*method_pointer_4a75c6b954015c1ca55450fe00bd3e45)(class ::clang::Decl  const *) = ::clang::StaticAssertDecl::classof;
    bool  (::clang::StaticAssertDecl::*method_pointer_2872351a4fc3589bb641847aaf2421b6)() const = &::clang::StaticAssertDecl::isFailed;
    class ::clang::StaticAssertDecl  * (*method_pointer_9fa83c29c99953b8a95bf2f82c009a4a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::StaticAssertDecl::CreateDeserialized;
    boost::python::class_< class ::clang::StaticAssertDecl, autowig::HeldType< class ::clang::StaticAssertDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_0dd00d729e905a24a952147ef6cb1f26("StaticAssertDecl", "", boost::python::no_init);
    class_0dd00d729e905a24a952147ef6cb1f26.def("classof_kind", method_pointer_48c5f0de891e50fc929f12fcaa4b3191, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("classof", method_pointer_4a75c6b954015c1ca55450fe00bd3e45, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("is_failed", method_pointer_2872351a4fc3589bb641847aaf2421b6, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("create_deserialized", method_pointer_9fa83c29c99953b8a95bf2f82c009a4a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("classof_kind");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("create_deserialized");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::StaticAssertDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::StaticAssertDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}