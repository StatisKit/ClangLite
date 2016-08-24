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
    class ::clang::VarTemplateSpecializationDecl  * (*method_pointer_8d50f82865cc5cad915a7a6a61f5bf4e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplateSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_ea1242933ef552e6bf16ec0bde65eaae)(class ::clang::Decl  const *) = ::clang::VarTemplateSpecializationDecl::classof;
    bool  (*method_pointer_2b7c2db6dae451a29a6cf31cddf5092d)(enum ::clang::Decl::Kind ) = ::clang::VarTemplateSpecializationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::VarTemplateSpecializationDecl::*method_pointer_8a2e22504bbf53069a4c12f0be3f9ef2)() const = &::clang::VarTemplateSpecializationDecl::getExternLoc;
    class ::clang::VarTemplateSpecializationDecl  * (::clang::VarTemplateSpecializationDecl::*method_pointer_eefe7847378d5b8b94329710ee3ac740)() = &::clang::VarTemplateSpecializationDecl::getMostRecentDecl;
    class ::clang::SourceLocation  (::clang::VarTemplateSpecializationDecl::*method_pointer_71efc239a9285bf7a8e4148a61c2ec5c)() const = &::clang::VarTemplateSpecializationDecl::getPointOfInstantiation;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateSpecializationDecl::*method_pointer_a89118f8869b5af19f60f11a8a4feb44)() const = &::clang::VarTemplateSpecializationDecl::getSpecializedTemplate;
    class ::clang::SourceLocation  (::clang::VarTemplateSpecializationDecl::*method_pointer_3f3ecc8f51f35402aaa034f786d1ac20)() const = &::clang::VarTemplateSpecializationDecl::getTemplateKeywordLoc;
    bool  (::clang::VarTemplateSpecializationDecl::*method_pointer_4e4b63a4ee035bae9347f07ebc425c17)() const = &::clang::VarTemplateSpecializationDecl::isExplicitInstantiationOrSpecialization;
    bool  (::clang::VarTemplateSpecializationDecl::*method_pointer_8e861a7a3428513192539922cf48ab00)() const = &::clang::VarTemplateSpecializationDecl::isExplicitSpecialization;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_4b72a11a2c4858e7a1646579d4613022)(class ::clang::SourceLocation ) = &::clang::VarTemplateSpecializationDecl::setExternLoc;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_3e6d8a6a43665dd9b825faee00d9d76c)(class ::clang::VarTemplatePartialSpecializationDecl  *, class ::clang::TemplateArgumentList  const *) = &::clang::VarTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_6c4a19d224de58e2aef62399293fa781)(class ::clang::VarTemplateDecl  *) = &::clang::VarTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_0897c4a14b275db4b2832b7630672b3b)(class ::clang::SourceLocation ) = &::clang::VarTemplateSpecializationDecl::setPointOfInstantiation;
    void  (::clang::VarTemplateSpecializationDecl::*method_pointer_6414f7be1e7856ac9cf8b196f3fa8895)(class ::clang::SourceLocation ) = &::clang::VarTemplateSpecializationDecl::setTemplateKeywordLoc;
    boost::python::class_< class ::clang::VarTemplateSpecializationDecl, autowig::HeldType< class ::clang::VarTemplateSpecializationDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_ca8ac52d86e758baac4c0aab82cfaeb8("VarTemplateSpecializationDecl", "", boost::python::no_init);
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("create_deserialized", method_pointer_8d50f82865cc5cad915a7a6a61f5bf4e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("classof", method_pointer_ea1242933ef552e6bf16ec0bde65eaae, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("classof_kind", method_pointer_2b7c2db6dae451a29a6cf31cddf5092d, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_extern_loc", method_pointer_8a2e22504bbf53069a4c12f0be3f9ef2, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_most_recent_decl", method_pointer_eefe7847378d5b8b94329710ee3ac740, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_point_of_instantiation", method_pointer_71efc239a9285bf7a8e4148a61c2ec5c, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_specialized_template", method_pointer_a89118f8869b5af19f60f11a8a4feb44, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("get_template_keyword_loc", method_pointer_3f3ecc8f51f35402aaa034f786d1ac20, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("is_explicit_instantiation_or_specialization", method_pointer_4e4b63a4ee035bae9347f07ebc425c17, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("is_explicit_specialization", method_pointer_8e861a7a3428513192539922cf48ab00, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_extern_loc", method_pointer_4b72a11a2c4858e7a1646579d4613022, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_instantiation_of", method_pointer_3e6d8a6a43665dd9b825faee00d9d76c, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_instantiation_of", method_pointer_6c4a19d224de58e2aef62399293fa781, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_point_of_instantiation", method_pointer_0897c4a14b275db4b2832b7630672b3b, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.def("set_template_keyword_loc", method_pointer_6414f7be1e7856ac9cf8b196f3fa8895, "");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("classof_kind");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("create_deserialized");
    class_ca8ac52d86e758baac4c0aab82cfaeb8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplateSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplateSpecializationDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}