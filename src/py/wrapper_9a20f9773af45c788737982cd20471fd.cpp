#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_9a20f9773af45c788737982cd20471fd()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamespaceDecl  * (*method_pointer_aa3b31d4b2245f739ebed7228d5e9369)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NamespaceDecl::CreateDeserialized;
    class ::clang::NamespaceDecl  * (*method_pointer_f060af30de935e2fab4a1f6fad4ec463)(class ::clang::DeclContext  const *) = ::clang::NamespaceDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_3ba1deb8fef1501dafa34e1aef2ab901)(class ::clang::NamespaceDecl  const *) = ::clang::NamespaceDecl::castToDeclContext;
    bool  (*method_pointer_1b020eb698295487b8fbd10395edba81)(class ::clang::Decl  const *) = ::clang::NamespaceDecl::classof;
    bool  (*method_pointer_6c155d3f3e2f5971bfb974a6443b2616)(enum ::clang::Decl::Kind ) = ::clang::NamespaceDecl::classofKind;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_72beccdb8611589b803e67faa8286188)() const = &::clang::NamespaceDecl::getAnonymousNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_85d3778c03955f53bf50120dbddaf538)() const = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_6f95547eb406598a84a8a5bc4297243c)() = &::clang::NamespaceDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_fdd80bc10a945387b08a805883ad5671)() const = &::clang::NamespaceDecl::getLocStart;
    class ::clang::NamespaceDecl  * (::clang::NamespaceDecl::*method_pointer_f4ce8b1d126659ab89e0f3bd197a8ac2)() = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::NamespaceDecl  const * (::clang::NamespaceDecl::*method_pointer_23625b2e551e526c8fbb2789fb2d1234)() const = &::clang::NamespaceDecl::getOriginalNamespace;
    class ::clang::SourceLocation  (::clang::NamespaceDecl::*method_pointer_74a477ba2b6e58f0bc4f111ab626ed6e)() const = &::clang::NamespaceDecl::getRBraceLoc;
    bool  (::clang::NamespaceDecl::*method_pointer_8d44c722b08a5deeb9fe89c08675d672)() const = &::clang::NamespaceDecl::isAnonymousNamespace;
    bool  (::clang::NamespaceDecl::*method_pointer_7b64971f1f935169b700f765028b4d08)() const = &::clang::NamespaceDecl::isInline;
    bool  (::clang::NamespaceDecl::*method_pointer_66dca318412853969664e752d7756ef4)() const = &::clang::NamespaceDecl::isOriginalNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_21ebce2b9af55c2d8993d14a81aa2a70)(class ::clang::NamespaceDecl  *) = &::clang::NamespaceDecl::setAnonymousNamespace;
    void  (::clang::NamespaceDecl::*method_pointer_9c2de4349c625ceb8a6a7f175caa31dc)(bool ) = &::clang::NamespaceDecl::setInline;
    void  (::clang::NamespaceDecl::*method_pointer_68bf5af869be5dce9e582a2122347368)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setLocStart;
    void  (::clang::NamespaceDecl::*method_pointer_52e18bd0ac355eae8dbe6d3b55df113c)(class ::clang::SourceLocation ) = &::clang::NamespaceDecl::setRBraceLoc;
    boost::python::class_< class ::clang::NamespaceDecl, autowig::HeldType< class ::clang::NamespaceDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_9a20f9773af45c788737982cd20471fd("NamespaceDecl", "", boost::python::no_init);
    class_9a20f9773af45c788737982cd20471fd.def("create_deserialized", method_pointer_aa3b31d4b2245f739ebed7228d5e9369, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_from_decl_context", method_pointer_f060af30de935e2fab4a1f6fad4ec463, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("cast_to_decl_context", method_pointer_3ba1deb8fef1501dafa34e1aef2ab901, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("classof", method_pointer_1b020eb698295487b8fbd10395edba81, "");
    class_9a20f9773af45c788737982cd20471fd.def("classof_kind", method_pointer_6c155d3f3e2f5971bfb974a6443b2616, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_anonymous_namespace", method_pointer_72beccdb8611589b803e67faa8286188, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_85d3778c03955f53bf50120dbddaf538, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_canonical_decl", method_pointer_6f95547eb406598a84a8a5bc4297243c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_loc_start", method_pointer_fdd80bc10a945387b08a805883ad5671, "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_f4ce8b1d126659ab89e0f3bd197a8ac2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_original_namespace", method_pointer_23625b2e551e526c8fbb2789fb2d1234, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9a20f9773af45c788737982cd20471fd.def("get_r_brace_loc", method_pointer_74a477ba2b6e58f0bc4f111ab626ed6e, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_anonymous_namespace", method_pointer_8d44c722b08a5deeb9fe89c08675d672, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_inline", method_pointer_7b64971f1f935169b700f765028b4d08, "");
    class_9a20f9773af45c788737982cd20471fd.def("is_original_namespace", method_pointer_66dca318412853969664e752d7756ef4, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_anonymous_namespace", method_pointer_21ebce2b9af55c2d8993d14a81aa2a70, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_inline", method_pointer_9c2de4349c625ceb8a6a7f175caa31dc, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_loc_start", method_pointer_68bf5af869be5dce9e582a2122347368, "");
    class_9a20f9773af45c788737982cd20471fd.def("set_r_brace_loc", method_pointer_52e18bd0ac355eae8dbe6d3b55df113c, "");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("classof_kind");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("create_deserialized");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("classof");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("cast_from_decl_context");
    class_9a20f9773af45c788737982cd20471fd.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::NamespaceDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamespaceDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NamespaceDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}