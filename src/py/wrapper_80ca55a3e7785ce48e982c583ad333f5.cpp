#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_80ca55a3e7785ce48e982c583ad333f5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::EnumConstantDecl  * (*method_pointer_17b17886b85350b790fa61931cc110c5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumConstantDecl::CreateDeserialized;
    bool  (*method_pointer_960ebcddd5b055afa3cf2ebe2dcda371)(class ::clang::Decl  const *) = ::clang::EnumConstantDecl::classof;
    bool  (*method_pointer_74926902d5eb55d3970deb70c9521a3a)(enum ::clang::Decl::Kind ) = ::clang::EnumConstantDecl::classofKind;
    class ::clang::EnumConstantDecl  * (::clang::EnumConstantDecl::*method_pointer_53e918cb6d475d53b26a6b0bc8f90a0f)() = &::clang::EnumConstantDecl::getCanonicalDecl;
    class ::clang::EnumConstantDecl  const * (::clang::EnumConstantDecl::*method_pointer_b7f1db6c6b20582a8eef4b728bc4c65b)() const = &::clang::EnumConstantDecl::getCanonicalDecl;
    boost::python::class_< class ::clang::EnumConstantDecl, autowig::HeldType< class ::clang::EnumConstantDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_80ca55a3e7785ce48e982c583ad333f5("EnumConstantDecl", "", boost::python::no_init);
    class_80ca55a3e7785ce48e982c583ad333f5.def("create_deserialized", method_pointer_17b17886b85350b790fa61931cc110c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof", method_pointer_960ebcddd5b055afa3cf2ebe2dcda371, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof_kind", method_pointer_74926902d5eb55d3970deb70c9521a3a, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_53e918cb6d475d53b26a6b0bc8f90a0f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_b7f1db6c6b20582a8eef4b728bc4c65b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof_kind");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("create_deserialized");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumConstantDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumConstantDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}