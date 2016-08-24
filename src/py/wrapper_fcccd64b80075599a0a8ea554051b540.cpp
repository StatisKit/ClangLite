#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_fcccd64b80075599a0a8ea554051b540()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UsingDirectiveDecl  * (*method_pointer_48248bef57c35552b5c5b544f2b7ca6d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDirectiveDecl::CreateDeserialized;
    bool  (*method_pointer_a0f6b32b2e3458ce90302033a9792920)(class ::clang::Decl  const *) = ::clang::UsingDirectiveDecl::classof;
    bool  (*method_pointer_1098397ca39454c78d3e12e87ff41d7a)(enum ::clang::Decl::Kind ) = ::clang::UsingDirectiveDecl::classofKind;
    class ::clang::DeclContext  const * (::clang::UsingDirectiveDecl::*method_pointer_76424ff6e2535e91be1eb4aaa52ea755)() const = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::DeclContext  * (::clang::UsingDirectiveDecl::*method_pointer_228a8b51dab552079a78a3c862012d05)() = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_5db49d9546955d66bccc11c11c8472e9)() const = &::clang::UsingDirectiveDecl::getIdentLocation;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_145575cf03ba56a5834c9461af78812e)() const = &::clang::UsingDirectiveDecl::getNamespaceKeyLocation;
    class ::clang::NamespaceDecl  * (::clang::UsingDirectiveDecl::*method_pointer_7f864382f2b754e7a6a43a484a00614d)() = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamespaceDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_d55f5fcbc56e5c698b89b4a9236d9d8d)() const = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamedDecl  * (::clang::UsingDirectiveDecl::*method_pointer_0cc36fc5a8d956efa477c7b5306c076f)() = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::NamedDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_0ea7857d9945578f9df775daeb4a1548)() const = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_4861047f6adc5ee3a2a72d9da78fe43a)() const = &::clang::UsingDirectiveDecl::getUsingLoc;
    boost::python::class_< class ::clang::UsingDirectiveDecl, autowig::HeldType< class ::clang::UsingDirectiveDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_fcccd64b80075599a0a8ea554051b540("UsingDirectiveDecl", "", boost::python::no_init);
    class_fcccd64b80075599a0a8ea554051b540.def("create_deserialized", method_pointer_48248bef57c35552b5c5b544f2b7ca6d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof", method_pointer_a0f6b32b2e3458ce90302033a9792920, "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof_kind", method_pointer_1098397ca39454c78d3e12e87ff41d7a, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_76424ff6e2535e91be1eb4aaa52ea755, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_228a8b51dab552079a78a3c862012d05, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_ident_location", method_pointer_5db49d9546955d66bccc11c11c8472e9, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_namespace_key_location", method_pointer_145575cf03ba56a5834c9461af78812e, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_7f864382f2b754e7a6a43a484a00614d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_d55f5fcbc56e5c698b89b4a9236d9d8d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_0cc36fc5a8d956efa477c7b5306c076f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_0ea7857d9945578f9df775daeb4a1548, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_using_loc", method_pointer_4861047f6adc5ee3a2a72d9da78fe43a, "");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof_kind");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("create_deserialized");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDirectiveDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDirectiveDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}