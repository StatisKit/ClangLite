#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_ca8ac52d86e758baac4c0aab82cfaeb8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarTemplateSpecializationDecl  * (*method_pointer_de80c564863550dbb60d904d4f4f0d99)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplateSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_4fcb833e9da3551c8eed53e0fdad677b)(class ::clang::Decl  const *) = ::clang::VarTemplateSpecializationDecl::classof;
    bool  (*method_pointer_591729f762f252fe882d2f8189ed104b)(enum ::clang::Decl::Kind ) = ::clang::VarTemplateSpecializationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::VarTemplateSpecializationDecl::*method_pointer_fc7e9238c972563b9d3a3203083f5749)() const = &::clang::VarTemplateSpecializationDecl::getExternLoc;
    class ::clang::VarTemplateSpecializationDecl  * (::clang::VarTemplateSpecializationDecl::*method_pointer_31a7b3a987035ede981bb70432a5403c)() = &::clang::VarTemplateSpecializationDecl::getMostRecentDecl;
    class ::clang::SourceLocation  (::clang::VarTemplateSpecializationDecl::*method_pointer_c6b7042a836e548380c6300f28c0effb)() const = &::clang::VarTemplateSpecializationDecl::getPointOfInstantiation;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateSpecializationDecl::*method_pointer_0049a20ab88a592791d27c86bb86a669)() const = &::clang::VarTemplateSpecializationDecl::getSpecializedTemplate;
    class ::clang::SourceLocation  (::clang::VarTemplateSpecializationDecl::*method_pointer_2a8dcaa6641354b19789af8659b3761b)() const = &::clang::VarTemplateSpecializationDecl::getTemplateKeywordLoc;
    bool  (::clang::VarTemplateSpecializationDecl::*method_pointer_c351ebe6538755418e023bda27e63bde)() const = &::clang::VarTemplateSpecializationDecl::isExplicitInstantiationOrSpecialization;
    bool  (::clang::VarTemplateSpecializationDecl::*method_pointer_3ff85577b1db5a19b2b73e726949afcb)() const = &::clang::VarTemplateSpecializationDecl::isExplicitSpecialization;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_c35c25193b24522f9ee8cd178f7ba04e)(class ::clang::SourceLocation ) = &::clang::VarTemplateSpecializationDecl::setExternLoc;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_89cbc51dd53352a293cec05a534c6c72)(class ::clang::VarTemplateDecl  *) = &::clang::VarTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_88a39da5446d5b568ffeecf2fc1d909c)(class ::clang::VarTemplatePartialSpecializationDecl  *, class ::clang::TemplateArgumentList  const *) = &::clang::VarTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_4f71e59f4cae560cb48e1cc91089863f)(class ::clang::SourceLocation ) = &::clang::VarTemplateSpecializationDecl::setPointOfInstantiation;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_4f7e6db9ba7553699daa9f7622782f08)(class ::clang::SourceLocation ) = &::clang::VarTemplateSpecializationDecl::setTemplateKeywordLoc;
    boost::python::class_< class ::clang::VarTemplateSpecializationDecl, autowig::HeldType< class ::clang::VarTemplateSpecializationDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_ca8ac52d86e758baac4c0aab82cfaeb8("VarTemplateSpecializationDecl", "", boost::python::no_init);
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("create_deserialized", method_pointer_de80c564863550dbb60d904d4f4f0d99, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("classof", method_pointer_4fcb833e9da3551c8eed53e0fdad677b, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("classof_kind", method_pointer_591729f762f252fe882d2f8189ed104b, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_extern_loc", method_pointer_fc7e9238c972563b9d3a3203083f5749, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_most_recent_decl", method_pointer_31a7b3a987035ede981bb70432a5403c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_point_of_instantiation", method_pointer_c6b7042a836e548380c6300f28c0effb, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_specialized_template", method_pointer_0049a20ab88a592791d27c86bb86a669, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_template_keyword_loc", method_pointer_2a8dcaa6641354b19789af8659b3761b, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("is_explicit_instantiation_or_specialization", method_pointer_c351ebe6538755418e023bda27e63bde, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("is_explicit_specialization", method_pointer_3ff85577b1db5a19b2b73e726949afcb, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_extern_loc", method_pointer_c35c25193b24522f9ee8cd178f7ba04e, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_instantiation_of", method_pointer_89cbc51dd53352a293cec05a534c6c72, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_instantiation_of", method_pointer_88a39da5446d5b568ffeecf2fc1d909c, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_point_of_instantiation", method_pointer_4f71e59f4cae560cb48e1cc91089863f, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_template_keyword_loc", method_pointer_4f7e6db9ba7553699daa9f7622782f08, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("classof_kind");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("create_deserialized");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplateSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplateSpecializationDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}