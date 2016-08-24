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
    class ::clang::EnumConstantDecl  * (*method_pointer_19da717d511b577493dbb62bf4087e73)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumConstantDecl::CreateDeserialized;
    bool  (*method_pointer_f9d763421aa151aab14576e366a58776)(class ::clang::Decl  const *) = ::clang::EnumConstantDecl::classof;
    bool  (*method_pointer_507ecb9696d75bd98f1c49aa16ef856e)(enum ::clang::Decl::Kind ) = ::clang::EnumConstantDecl::classofKind;
    class ::clang::EnumConstantDecl  * (::clang::EnumConstantDecl::*method_pointer_e364b158d3f45def8c8491039bbd790a)() = &::clang::EnumConstantDecl::getCanonicalDecl;
    class ::clang::EnumConstantDecl  const * (::clang::EnumConstantDecl::*method_pointer_4f64bbc94de25e4fafcb3ec880cc6f95)() const = &::clang::EnumConstantDecl::getCanonicalDecl;
    boost::python::class_< class ::clang::EnumConstantDecl, autowig::HeldType< class ::clang::EnumConstantDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_80ca55a3e7785ce48e982c583ad333f5("EnumConstantDecl", "", boost::python::no_init);
    class_80ca55a3e7785ce48e982c583ad333f5.def("create_deserialized", method_pointer_19da717d511b577493dbb62bf4087e73, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof", method_pointer_f9d763421aa151aab14576e366a58776, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof_kind", method_pointer_507ecb9696d75bd98f1c49aa16ef856e, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_e364b158d3f45def8c8491039bbd790a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_4f64bbc94de25e4fafcb3ec880cc6f95, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof_kind");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("create_deserialized");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumConstantDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumConstantDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}