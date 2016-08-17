#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_ca8ac52d86e758baac4c0aab82cfaeb8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_a564297e06cb55d887b33d21362e9ba8)(enum ::clang::Decl::Kind ) = ::clang::VarTemplateSpecializationDecl::classofKind;
    bool  (::clang::VarTemplateSpecializationDecl::*method_pointer_844b38a4a32158b8b389fd63d7f40e8d)() const = &::clang::VarTemplateSpecializationDecl::isExplicitSpecialization;
    class ::clang::VarTemplateSpecializationDecl  * (*method_pointer_6aa9adcdcedd5b208be986608d7f1bf7)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplateSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_c9f88519a7a7581bbed843e5c7aa883b)(class ::clang::Decl  const *) = ::clang::VarTemplateSpecializationDecl::classof;
    class ::clang::VarTemplateSpecializationDecl  * (::clang::VarTemplateSpecializationDecl::*method_pointer_25163c20768258d8a86b49ae551255bb)() = &::clang::VarTemplateSpecializationDecl::getMostRecentDecl;
    bool  (::clang::VarTemplateSpecializationDecl::*method_pointer_5fdbaa578ef151748885638f3af0d898)() const = &::clang::VarTemplateSpecializationDecl::isExplicitInstantiationOrSpecialization;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_45873a9f7afa5a368debad15d65d074a)(class ::clang::VarTemplateDecl  *) = &::clang::VarTemplateSpecializationDecl::setInstantiationOf;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateSpecializationDecl::*method_pointer_85ccc3132e6a530abe3fa20635e4d51b)() const = &::clang::VarTemplateSpecializationDecl::getSpecializedTemplate;
    boost::python::class_< class ::clang::VarTemplateSpecializationDecl, autowig::HeldType< class ::clang::VarTemplateSpecializationDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_ca8ac52d86e758baac4c0aab82cfaeb8("VarTemplateSpecializationDecl", "", boost::python::no_init);
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("classof_kind", method_pointer_a564297e06cb55d887b33d21362e9ba8, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("is_explicit_specialization", method_pointer_844b38a4a32158b8b389fd63d7f40e8d, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("create_deserialized", method_pointer_6aa9adcdcedd5b208be986608d7f1bf7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("classof", method_pointer_c9f88519a7a7581bbed843e5c7aa883b, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_most_recent_decl", method_pointer_25163c20768258d8a86b49ae551255bb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("is_explicit_instantiation_or_specialization", method_pointer_5fdbaa578ef151748885638f3af0d898, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_instantiation_of", method_pointer_45873a9f7afa5a368debad15d65d074a, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_specialized_template", method_pointer_85ccc3132e6a530abe3fa20635e4d51b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("classof_kind");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("create_deserialized");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplateSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplateSpecializationDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}