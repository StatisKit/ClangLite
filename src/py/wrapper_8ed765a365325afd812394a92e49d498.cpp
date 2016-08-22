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
    class ::clang::UsingShadowDecl  * (*method_pointer_e5026f9b11695492bd9f3b5daeaeda95)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingShadowDecl::CreateDeserialized;
    bool  (*method_pointer_70ad1cbe4d845a78ae80f46517295213)(class ::clang::Decl  const *) = ::clang::UsingShadowDecl::classof;
    bool  (*method_pointer_24057d44493d5b3c8fa63a1b00e88b1e)(enum ::clang::Decl::Kind ) = ::clang::UsingShadowDecl::classofKind;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_95c9b21a7cd053409a1ff1886a0e870d)() = &::clang::UsingShadowDecl::getCanonicalDecl;
    class ::clang::UsingShadowDecl  const * (::clang::UsingShadowDecl::*method_pointer_2827c8e99408565e947bd3629583f678)() const = &::clang::UsingShadowDecl::getCanonicalDecl;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_497973dd693153f9ba1d36b27b7cf715)() const = &::clang::UsingShadowDecl::getNextUsingShadowDecl;
    class ::clang::NamedDecl  * (::clang::UsingShadowDecl::*method_pointer_c95796a0374f5b8bb485852a512dd026)() const = &::clang::UsingShadowDecl::getTargetDecl;
    class ::clang::UsingDecl  * (::clang::UsingShadowDecl::*method_pointer_c79f71c44dc95f688b292b3e00f8157f)() const = &::clang::UsingShadowDecl::getUsingDecl;
    void  (::clang::UsingShadowDecl::*method_pointer_be9dd5f4b25b5f4da357d61ba38251c4)(class ::clang::NamedDecl  *) = &::clang::UsingShadowDecl::setTargetDecl;
    boost::python::class_< class ::clang::UsingShadowDecl, autowig::HeldType< class ::clang::UsingShadowDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_8ed765a365325afd812394a92e49d498("UsingShadowDecl", "", boost::python::no_init);
    class_8ed765a365325afd812394a92e49d498.def("create_deserialized", method_pointer_e5026f9b11695492bd9f3b5daeaeda95, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("classof", method_pointer_70ad1cbe4d845a78ae80f46517295213, "");
    class_8ed765a365325afd812394a92e49d498.def("classof_kind", method_pointer_24057d44493d5b3c8fa63a1b00e88b1e, "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_95c9b21a7cd053409a1ff1886a0e870d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_2827c8e99408565e947bd3629583f678, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_next_using_shadow_decl", method_pointer_497973dd693153f9ba1d36b27b7cf715, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_target_decl", method_pointer_c95796a0374f5b8bb485852a512dd026, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_using_decl", method_pointer_c79f71c44dc95f688b292b3e00f8157f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("set_target_decl", method_pointer_be9dd5f4b25b5f4da357d61ba38251c4, "");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof_kind");
    class_8ed765a365325afd812394a92e49d498.staticmethod("create_deserialized");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingShadowDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingShadowDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}