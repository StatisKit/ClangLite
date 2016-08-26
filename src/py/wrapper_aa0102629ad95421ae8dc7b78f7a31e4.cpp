#include "_clanglite.h"


namespace autowig
{
}


void wrapper_aa0102629ad95421ae8dc7b78f7a31e4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_1b239e2a937057aca2ab4874782c104e)(class ::clang::Type  const *) = ::clang::TemplateTypeParmType::classof;
    class ::clang::TemplateTypeParmDecl  * (::clang::TemplateTypeParmType::*method_pointer_e959a01d0fc654e68a7c9de77b554276)() const = &::clang::TemplateTypeParmType::getDecl;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_6d13382b87545e529af41a6f04aadb7c)() const = &::clang::TemplateTypeParmType::getDepth;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_1c4417177c155b01aed9174ce5652abc)() const = &::clang::TemplateTypeParmType::getIndex;
    bool  (::clang::TemplateTypeParmType::*method_pointer_59cf0648ad9e52968dbcca9b08280015)() const = &::clang::TemplateTypeParmType::isParameterPack;
    bool  (::clang::TemplateTypeParmType::*method_pointer_7c53aa4f02885406be7bda55bf9018aa)() const = &::clang::TemplateTypeParmType::isSugared;
    boost::python::class_< class ::clang::TemplateTypeParmType, autowig::HeldType< class ::clang::TemplateTypeParmType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_aa0102629ad95421ae8dc7b78f7a31e4("TemplateTypeParmType", "", boost::python::no_init);
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("classof", method_pointer_1b239e2a937057aca2ab4874782c104e, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_decl", method_pointer_e959a01d0fc654e68a7c9de77b554276, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_depth", method_pointer_6d13382b87545e529af41a6f04aadb7c, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_index", method_pointer_1c4417177c155b01aed9174ce5652abc, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_parameter_pack", method_pointer_59cf0648ad9e52968dbcca9b08280015, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_sugared", method_pointer_7c53aa4f02885406be7bda55bf9018aa, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmType >, autowig::HeldType< class ::clang::Type > >();
    }

}