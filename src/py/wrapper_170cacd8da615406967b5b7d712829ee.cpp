#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_170cacd8da615406967b5b7d712829ee()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FunctionTemplateDecl  * (*method_pointer_3593d8e7658d5dc5856ed7d1ed23a614)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionTemplateDecl::CreateDeserialized;
    void  (::clang::FunctionTemplateDecl::*method_pointer_f350c1f3fac6583783c0e0fe0518376c)() const = &::clang::FunctionTemplateDecl::LoadLazySpecializations;
    bool  (*method_pointer_aca491c6b94653ae8fd97610b3e4c43b)(class ::clang::Decl  const *) = ::clang::FunctionTemplateDecl::classof;
    bool  (*method_pointer_26bf286491c45305b3578a0439dfdff6)(enum ::clang::Decl::Kind ) = ::clang::FunctionTemplateDecl::classofKind;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_9ee0623d0781533e905dfa0285ddeb0e)() = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_8801e5a12e78508aab47777b1cfe91d9)() const = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_82c395007f5b55ac9b1484ba8400ddf9)() const = &::clang::FunctionTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_e46a4dd4e4855b71a55e4ce6bff512a1)() = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_452afc7c459e52378303a305a83a70d2)() const = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_71303322c2415965a6602e70059a283b)() = &::clang::FunctionTemplateDecl::getPreviousDecl;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_506deb7b2ff85f1496cb5767cb3e295e)() const = &::clang::FunctionTemplateDecl::getPreviousDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionTemplateDecl::*method_pointer_aed04993397553d992f68744d315af69)() const = &::clang::FunctionTemplateDecl::getTemplatedDecl;
    bool  (::clang::FunctionTemplateDecl::*method_pointer_1df2be2a610855a8af35d9b394b6313e)() const = &::clang::FunctionTemplateDecl::isThisDeclarationADefinition;
    boost::python::class_< class ::clang::FunctionTemplateDecl, autowig::HeldType< class ::clang::FunctionTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_170cacd8da615406967b5b7d712829ee("FunctionTemplateDecl", "", boost::python::no_init);
    class_170cacd8da615406967b5b7d712829ee.def("create_deserialized", method_pointer_3593d8e7658d5dc5856ed7d1ed23a614, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("load_lazy_specializations", method_pointer_f350c1f3fac6583783c0e0fe0518376c, "");
    class_170cacd8da615406967b5b7d712829ee.def("classof", method_pointer_aca491c6b94653ae8fd97610b3e4c43b, "");
    class_170cacd8da615406967b5b7d712829ee.def("classof_kind", method_pointer_26bf286491c45305b3578a0439dfdff6, "");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_9ee0623d0781533e905dfa0285ddeb0e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_8801e5a12e78508aab47777b1cfe91d9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_instantiated_from_member_template", method_pointer_82c395007f5b55ac9b1484ba8400ddf9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_e46a4dd4e4855b71a55e4ce6bff512a1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_452afc7c459e52378303a305a83a70d2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_71303322c2415965a6602e70059a283b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_506deb7b2ff85f1496cb5767cb3e295e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_templated_decl", method_pointer_aed04993397553d992f68744d315af69, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("is_this_declaration_a_definition", method_pointer_1df2be2a610855a8af35d9b394b6313e, "");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof_kind");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("create_deserialized");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}