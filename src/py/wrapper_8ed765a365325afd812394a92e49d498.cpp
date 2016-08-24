#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_8ed765a365325afd812394a92e49d498()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UsingShadowDecl  * (*method_pointer_0470500a20005f55a61169599dff7aec)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::UsingDecl  *, class ::clang::NamedDecl  *) = ::clang::UsingShadowDecl::Create;
    class ::clang::UsingShadowDecl  * (*method_pointer_c8cee3020c6258dfb3ac754973b14f8a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingShadowDecl::CreateDeserialized;
    bool  (*method_pointer_8af07e39a5265798a0630fa2d4553344)(class ::clang::Decl  const *) = ::clang::UsingShadowDecl::classof;
    bool  (*method_pointer_077e97df69b65a0b9a4072970db24705)(enum ::clang::Decl::Kind ) = ::clang::UsingShadowDecl::classofKind;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_aa0d4691b576529b9569bf4630c63fcc)() = &::clang::UsingShadowDecl::getCanonicalDecl;
    class ::clang::UsingShadowDecl  const * (::clang::UsingShadowDecl::*method_pointer_cc234b16ac23594d8acd1d4bc0750ab1)() const = &::clang::UsingShadowDecl::getCanonicalDecl;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_7996afb10b8b5679bc577946a66d902b)() const = &::clang::UsingShadowDecl::getNextUsingShadowDecl;
    class ::clang::NamedDecl  * (::clang::UsingShadowDecl::*method_pointer_a86bd581228a5aaab7e85f6ddad59a21)() const = &::clang::UsingShadowDecl::getTargetDecl;
    class ::clang::UsingDecl  * (::clang::UsingShadowDecl::*method_pointer_209d04d23e335bdeb5f838dbb6cea093)() const = &::clang::UsingShadowDecl::getUsingDecl;
    void  (::clang::UsingShadowDecl::*method_pointer_5852db1f9efc59328caa9f100b83df1e)(class ::clang::NamedDecl  *) = &::clang::UsingShadowDecl::setTargetDecl;
    boost::python::class_< class ::clang::UsingShadowDecl, autowig::HeldType< class ::clang::UsingShadowDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_8ed765a365325afd812394a92e49d498("UsingShadowDecl", "", boost::python::no_init);
    class_8ed765a365325afd812394a92e49d498.def("create", method_pointer_0470500a20005f55a61169599dff7aec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("create_deserialized", method_pointer_c8cee3020c6258dfb3ac754973b14f8a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("classof", method_pointer_8af07e39a5265798a0630fa2d4553344, "");
    class_8ed765a365325afd812394a92e49d498.def("classof_kind", method_pointer_077e97df69b65a0b9a4072970db24705, "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_aa0d4691b576529b9569bf4630c63fcc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_cc234b16ac23594d8acd1d4bc0750ab1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_next_using_shadow_decl", method_pointer_7996afb10b8b5679bc577946a66d902b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_target_decl", method_pointer_a86bd581228a5aaab7e85f6ddad59a21, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_using_decl", method_pointer_209d04d23e335bdeb5f838dbb6cea093, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("set_target_decl", method_pointer_5852db1f9efc59328caa9f100b83df1e, "");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof_kind");
    class_8ed765a365325afd812394a92e49d498.staticmethod("create");
    class_8ed765a365325afd812394a92e49d498.staticmethod("create_deserialized");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingShadowDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingShadowDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}