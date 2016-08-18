#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_2cee44285ee85f019f99b9a11d8414aa()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_4e3bdbbd23765255bad4022715570e29)(class ::clang::Decl  const *) = ::clang::RedeclarableTemplateDecl::classof;
    bool  (*method_pointer_107a2bdf8aed5a8db90a17dff585401b)(enum ::clang::Decl::Kind ) = ::clang::RedeclarableTemplateDecl::classofKind;
    class ::clang::RedeclarableTemplateDecl  const * (::clang::RedeclarableTemplateDecl::*method_pointer_ef4ab40d2f7b5e19bcb13db6239c5b84)() const = &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
    class ::clang::RedeclarableTemplateDecl  * (::clang::RedeclarableTemplateDecl::*method_pointer_e414d6762e785ab8961c25977b99c755)() = &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
    class ::clang::RedeclarableTemplateDecl  * (::clang::RedeclarableTemplateDecl::*method_pointer_1f3a2e9b557950128c6d1637dbb467b7)() const = &::clang::RedeclarableTemplateDecl::getInstantiatedFromMemberTemplate;
    bool  (::clang::RedeclarableTemplateDecl::*method_pointer_7500d7b5254052af93feed343c101e71)() const = &::clang::RedeclarableTemplateDecl::isMemberSpecialization;
    void  (::clang::RedeclarableTemplateDecl::*method_pointer_9829a48e8bd356a78b854f938e12dadf)(class ::clang::RedeclarableTemplateDecl  *) = &::clang::RedeclarableTemplateDecl::setInstantiatedFromMemberTemplate;
    void  (::clang::RedeclarableTemplateDecl::*method_pointer_8c4b4fd68c165eee9865954d62bc64fb)() = &::clang::RedeclarableTemplateDecl::setMemberSpecialization;
    boost::python::class_< class ::clang::RedeclarableTemplateDecl, autowig::HeldType< class ::clang::RedeclarableTemplateDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_2cee44285ee85f019f99b9a11d8414aa("RedeclarableTemplateDecl", "", boost::python::no_init);
    class_2cee44285ee85f019f99b9a11d8414aa.def("classof", method_pointer_4e3bdbbd23765255bad4022715570e29, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("classof_kind", method_pointer_107a2bdf8aed5a8db90a17dff585401b, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_ef4ab40d2f7b5e19bcb13db6239c5b84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_e414d6762e785ab8961c25977b99c755, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_instantiated_from_member_template", method_pointer_1f3a2e9b557950128c6d1637dbb467b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("is_member_specialization", method_pointer_7500d7b5254052af93feed343c101e71, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_instantiated_from_member_template", method_pointer_9829a48e8bd356a78b854f938e12dadf, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_member_specialization", method_pointer_8c4b4fd68c165eee9865954d62bc64fb, "");
    class_2cee44285ee85f019f99b9a11d8414aa.staticmethod("classof_kind");
    class_2cee44285ee85f019f99b9a11d8414aa.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RedeclarableTemplateDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}