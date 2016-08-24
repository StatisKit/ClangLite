#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_19b8049789335462bac78de513b121a7()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCPropertyImplDecl  * (*method_pointer_7d3d2c489a5c54aa8d7b63d822b6bc8a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    bool  (*method_pointer_df249291ea005fc4bb70731733de0cd6)(class ::clang::Decl  const *) = ::clang::ObjCPropertyImplDecl::classof;
    bool  (*method_pointer_8ff47fa388a35db3891a4f0c6269777d)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_47e39d6551fe5990ae938467ce618500)() const = &::clang::ObjCPropertyImplDecl::getLocStart;
    class ::clang::ObjCPropertyDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_89ca39da6989590ea96dc93e952ebe8c)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_394694e2cfde55348c9bbd6cda8e8e2b)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_bb9b7b1deaaf5ffcb9dbed5ed5065910)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDeclLoc;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_cea3c4ddfa9452c8a411b108b476d299)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_f07d1ad793e95671b05ead9468fa9a59)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setAtLoc;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_b068a7c0e5bf545692042f4e5c3c1a82)(class ::clang::ObjCPropertyDecl  *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_69b96eec7aa85ffbb943d6c0222f714a)(class ::clang::ObjCIvarDecl  *, class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setPropertyIvarDecl;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_7d3d2c489a5c54aa8d7b63d822b6bc8a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_df249291ea005fc4bb70731733de0cd6, "");
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_8ff47fa388a35db3891a4f0c6269777d, "");
    class_19b8049789335462bac78de513b121a7.def("get_loc_start", method_pointer_47e39d6551fe5990ae938467ce618500, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_89ca39da6989590ea96dc93e952ebe8c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_394694e2cfde55348c9bbd6cda8e8e2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl_loc", method_pointer_bb9b7b1deaaf5ffcb9dbed5ed5065910, "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_cea3c4ddfa9452c8a411b108b476d299, "");
    class_19b8049789335462bac78de513b121a7.def("set_at_loc", method_pointer_f07d1ad793e95671b05ead9468fa9a59, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_b068a7c0e5bf545692042f4e5c3c1a82, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_ivar_decl", method_pointer_69b96eec7aa85ffbb943d6c0222f714a, "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}