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
    class ::clang::ObjCPropertyImplDecl  * (*method_pointer_3283bbbc3e4456949acf495ce7d734e7)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    bool  (*method_pointer_a601c5db3e695c54abd64f54b1f60e45)(class ::clang::Decl  const *) = ::clang::ObjCPropertyImplDecl::classof;
    bool  (*method_pointer_43dce673e2f252188ca69b3fade75181)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_c0d1f6f8267050ee99c20fb4d4b18f43)() const = &::clang::ObjCPropertyImplDecl::getLocStart;
    class ::clang::ObjCPropertyDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_8d1f981d9f08504db1945b4b836ae316)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_ca5870545036589a88714901f18e835e)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_2d2745c7c7f0532f8179f5007e729d8b)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDeclLoc;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_2969e59930445a638f4e3cb5705d7b22)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_207b48e2f79c585bb6c41ae7530e7627)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setAtLoc;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_5084979897375a2194594c00b71e589c)(class ::clang::ObjCPropertyDecl  *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_84b271a66c3e5db48b428c335fb23f86)(class ::clang::ObjCIvarDecl  *, class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setPropertyIvarDecl;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_3283bbbc3e4456949acf495ce7d734e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_a601c5db3e695c54abd64f54b1f60e45, "");
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_43dce673e2f252188ca69b3fade75181, "");
    class_19b8049789335462bac78de513b121a7.def("get_loc_start", method_pointer_c0d1f6f8267050ee99c20fb4d4b18f43, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_8d1f981d9f08504db1945b4b836ae316, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_ca5870545036589a88714901f18e835e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl_loc", method_pointer_2d2745c7c7f0532f8179f5007e729d8b, "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_2969e59930445a638f4e3cb5705d7b22, "");
    class_19b8049789335462bac78de513b121a7.def("set_at_loc", method_pointer_207b48e2f79c585bb6c41ae7530e7627, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_5084979897375a2194594c00b71e589c, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_ivar_decl", method_pointer_84b271a66c3e5db48b428c335fb23f86, "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}