#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_0dd00d729e905a24a952147ef6cb1f26()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::StaticAssertDecl  * (*method_pointer_cf3fb42f5a3a5f7ea7553103ccaa759f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::StaticAssertDecl::CreateDeserialized;
    bool  (*method_pointer_cbe956f495c557728880a9e2f689cc11)(class ::clang::Decl  const *) = ::clang::StaticAssertDecl::classof;
    bool  (*method_pointer_6a944fa167ff52209d93249b0470a5f4)(enum ::clang::Decl::Kind ) = ::clang::StaticAssertDecl::classofKind;
    class ::clang::SourceLocation  (::clang::StaticAssertDecl::*method_pointer_5b4ff14709015531be8284ea66d802d6)() const = &::clang::StaticAssertDecl::getRParenLoc;
    bool  (::clang::StaticAssertDecl::*method_pointer_62cccab7b6a353c89a0cb00da6354e4a)() const = &::clang::StaticAssertDecl::isFailed;
    boost::python::class_< class ::clang::StaticAssertDecl, autowig::HeldType< class ::clang::StaticAssertDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_0dd00d729e905a24a952147ef6cb1f26("StaticAssertDecl", "", boost::python::no_init);
    class_0dd00d729e905a24a952147ef6cb1f26.def("create_deserialized", method_pointer_cf3fb42f5a3a5f7ea7553103ccaa759f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("classof", method_pointer_cbe956f495c557728880a9e2f689cc11, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("classof_kind", method_pointer_6a944fa167ff52209d93249b0470a5f4, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("get_r_paren_loc", method_pointer_5b4ff14709015531be8284ea66d802d6, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("is_failed", method_pointer_62cccab7b6a353c89a0cb00da6354e4a, "");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("classof_kind");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("create_deserialized");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::StaticAssertDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::StaticAssertDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}