#include "_clanglite.h"


namespace autowig
{
}


void wrapper_8ed765a365325afd812394a92e49d498()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UsingShadowDecl  * (*method_pointer_8c694058795f5c00825ac67dd0065cda)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingShadowDecl::CreateDeserialized;
    bool  (*method_pointer_541a2b4184d9542886d2ec5358c27cd5)(class ::clang::Decl  const *) = ::clang::UsingShadowDecl::classof;
    bool  (*method_pointer_92fbfcb9d7da510392a34d4de0fb6168)(enum ::clang::Decl::Kind ) = ::clang::UsingShadowDecl::classofKind;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_c796a288c8725e8e80936f78ae3d8007)() = &::clang::UsingShadowDecl::getCanonicalDecl;
    class ::clang::UsingShadowDecl  const * (::clang::UsingShadowDecl::*method_pointer_6b034926927c5b41ac360e72181d49f3)() const = &::clang::UsingShadowDecl::getCanonicalDecl;
    class ::clang::UsingShadowDecl  * (::clang::UsingShadowDecl::*method_pointer_23247961dc0c53508ec8ed40fd72a30b)() const = &::clang::UsingShadowDecl::getNextUsingShadowDecl;
    class ::clang::NamedDecl  * (::clang::UsingShadowDecl::*method_pointer_248591a254de5d64a00ea217cecb9569)() const = &::clang::UsingShadowDecl::getTargetDecl;
    class ::clang::UsingDecl  * (::clang::UsingShadowDecl::*method_pointer_15b5e54eec025a2dbe27322c07d68873)() const = &::clang::UsingShadowDecl::getUsingDecl;
    void  (::clang::UsingShadowDecl::*method_pointer_ad9b1220b6ef5ca0801ff27f065f67f3)(class ::clang::NamedDecl  *) = &::clang::UsingShadowDecl::setTargetDecl;
    boost::python::class_< class ::clang::UsingShadowDecl, autowig::HeldType< class ::clang::UsingShadowDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_8ed765a365325afd812394a92e49d498("UsingShadowDecl", "", boost::python::no_init);
    class_8ed765a365325afd812394a92e49d498.def("create_deserialized", method_pointer_8c694058795f5c00825ac67dd0065cda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("classof", method_pointer_541a2b4184d9542886d2ec5358c27cd5, "");
    class_8ed765a365325afd812394a92e49d498.def("classof_kind", method_pointer_92fbfcb9d7da510392a34d4de0fb6168, "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_c796a288c8725e8e80936f78ae3d8007, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_6b034926927c5b41ac360e72181d49f3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_next_using_shadow_decl", method_pointer_23247961dc0c53508ec8ed40fd72a30b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_target_decl", method_pointer_248591a254de5d64a00ea217cecb9569, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_using_decl", method_pointer_15b5e54eec025a2dbe27322c07d68873, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("set_target_decl", method_pointer_ad9b1220b6ef5ca0801ff27f065f67f3, "");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof_kind");
    class_8ed765a365325afd812394a92e49d498.staticmethod("create_deserialized");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingShadowDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingShadowDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}