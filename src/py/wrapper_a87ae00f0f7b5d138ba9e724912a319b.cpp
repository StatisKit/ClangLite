#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_a87ae00f0f7b5d138ba9e724912a319b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamespaceAliasDecl  * (*method_pointer_3f576dead8055e4eaea86c89853b6bcb)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceAliasDecl::CreateDeserialized;
    bool  (*method_pointer_c5af0726121c55cbb618becf29a4bc9e)(class ::clang::Decl  const *) = ::clang::NamespaceAliasDecl::classof;
    bool  (*method_pointer_9c187ddd8c755b5ca2250264e1171c51)(enum ::clang::Decl::Kind ) = ::clang::NamespaceAliasDecl::classofKind;
    class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_8be75663ed58512b9f4ada47f7f56113)() const = &::clang::NamespaceAliasDecl::getAliasLoc;
    class ::clang::NamedDecl  * (::clang::NamespaceAliasDecl::*method_pointer_051cd82240be5fd58dba895f3bbc5e92)() const = &::clang::NamespaceAliasDecl::getAliasedNamespace;
    class ::clang::NamespaceAliasDecl  const * (::clang::NamespaceAliasDecl::*method_pointer_b59d5418f7fe514887f283af353d23ed)() const = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    class ::clang::NamespaceAliasDecl  * (::clang::NamespaceAliasDecl::*method_pointer_e0faec9657b854f894ed7e52eab2815e)() = &::clang::NamespaceAliasDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  * (::clang::NamespaceAliasDecl::*method_pointer_814dd875d34e562dbd19169f4454f6ce)() = &::clang::NamespaceAliasDecl::getNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceAliasDecl::*method_pointer_d4a5ef1e312b5ebea6f04c194dbd6008)() const = &::clang::NamespaceAliasDecl::getNamespace;
    class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_277b506f8f185892a581318791d4a5de)() const = &::clang::NamespaceAliasDecl::getNamespaceLoc;
    class ::clang::SourceLocation  (::clang::NamespaceAliasDecl::*method_pointer_20422b7642685087a343f9712abca980)() const = &::clang::NamespaceAliasDecl::getTargetNameLoc;
    boost::python::class_< class ::clang::NamespaceAliasDecl, autowig::HeldType< class ::clang::NamespaceAliasDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_a87ae00f0f7b5d138ba9e724912a319b("NamespaceAliasDecl", "", boost::python::no_init);
    class_a87ae00f0f7b5d138ba9e724912a319b.def("create_deserialized", method_pointer_3f576dead8055e4eaea86c89853b6bcb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof", method_pointer_c5af0726121c55cbb618becf29a4bc9e, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("classof_kind", method_pointer_9c187ddd8c755b5ca2250264e1171c51, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_alias_loc", method_pointer_8be75663ed58512b9f4ada47f7f56113, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_aliased_namespace", method_pointer_051cd82240be5fd58dba895f3bbc5e92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_b59d5418f7fe514887f283af353d23ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_canonical_decl", method_pointer_e0faec9657b854f894ed7e52eab2815e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_814dd875d34e562dbd19169f4454f6ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace", method_pointer_d4a5ef1e312b5ebea6f04c194dbd6008, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_namespace_loc", method_pointer_277b506f8f185892a581318791d4a5de, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.def("get_target_name_loc", method_pointer_20422b7642685087a343f9712abca980, "");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof_kind");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("create_deserialized");
    class_a87ae00f0f7b5d138ba9e724912a319b.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NamespaceAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamespaceAliasDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}