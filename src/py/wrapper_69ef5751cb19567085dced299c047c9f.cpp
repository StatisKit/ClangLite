#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_69ef5751cb19567085dced299c047c9f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXConstructorDecl  * (*method_pointer_24cbbee485ee503296b3d3d33920039f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXConstructorDecl::CreateDeserialized;
    bool  (*method_pointer_eb0c9e680f0853a585f7c2ed6ca5a759)(class ::clang::Decl  const *) = ::clang::CXXConstructorDecl::classof;
    bool  (*method_pointer_e0096f38b01e52baa0bfe61ed82d9330)(enum ::clang::Decl::Kind ) = ::clang::CXXConstructorDecl::classofKind;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_19120a44370c529f9008aeee5a74b55b)() = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_d5383d239822570d8e73b72c575bbdc3)() const = &::clang::CXXConstructorDecl::getCanonicalDecl;
    class ::clang::CXXConstructorDecl  const * (::clang::CXXConstructorDecl::*method_pointer_4c94fad71cd7533f93dc04a484328b5c)() const = &::clang::CXXConstructorDecl::getInheritedConstructor;
    unsigned int  (::clang::CXXConstructorDecl::*method_pointer_b15d05318b6f55e38a2b4ec2bbe05a74)() const = &::clang::CXXConstructorDecl::getNumCtorInitializers;
    class ::clang::CXXConstructorDecl  * (::clang::CXXConstructorDecl::*method_pointer_cd9386a7e98455cc99efdd17c276654a)() const = &::clang::CXXConstructorDecl::getTargetConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_4cf6766ff4295f5caaf3ec175b4509cc)(bool ) const = &::clang::CXXConstructorDecl::isConvertingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_f5ee67e803a555d88268335e05e5f15f)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_810b9de5328951b9b41fc9cbe887d8d6)() const = &::clang::CXXConstructorDecl::isCopyConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_855894141c8c5bed838e5e50a13ad185)(unsigned int  &) const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_8898430d49755568a29bfff1993c8046)() const = &::clang::CXXConstructorDecl::isCopyOrMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_ca539c9392375e178e1f4a634ac63b7b)() const = &::clang::CXXConstructorDecl::isDefaultConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_c71e6669dc145bcb91ebc77372f2a6f3)() const = &::clang::CXXConstructorDecl::isDelegatingConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_252e4412194c58068e8cabbddb05b5be)() const = &::clang::CXXConstructorDecl::isExplicit;
    bool  (::clang::CXXConstructorDecl::*method_pointer_d63c5f26609254b0af3b6f3d3f152721)() const = &::clang::CXXConstructorDecl::isExplicitSpecified;
    bool  (::clang::CXXConstructorDecl::*method_pointer_92369e86326f598bbc5e4459985fc860)(unsigned int  &) const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_bcc5f9ce4d065f308ed8d7ccc011f81a)() const = &::clang::CXXConstructorDecl::isMoveConstructor;
    bool  (::clang::CXXConstructorDecl::*method_pointer_259764c6dd5b54c39f26913a51b77dae)() const = &::clang::CXXConstructorDecl::isSpecializationCopyingObject;
    void  (::clang::CXXConstructorDecl::*method_pointer_1e0b3c8bfd2d5f78bd8eb89dfbc903ae)(class ::clang::CXXConstructorDecl  const *) = &::clang::CXXConstructorDecl::setInheritedConstructor;
    void  (::clang::CXXConstructorDecl::*method_pointer_457a333df84f557f92b3ead149132fa6)(unsigned int ) = &::clang::CXXConstructorDecl::setNumCtorInitializers;
    boost::python::class_< class ::clang::CXXConstructorDecl, autowig::HeldType< class ::clang::CXXConstructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_69ef5751cb19567085dced299c047c9f("CXXConstructorDecl", "", boost::python::no_init);
    class_69ef5751cb19567085dced299c047c9f.def("create_deserialized", method_pointer_24cbbee485ee503296b3d3d33920039f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("classof", method_pointer_eb0c9e680f0853a585f7c2ed6ca5a759, "");
    class_69ef5751cb19567085dced299c047c9f.def("classof_kind", method_pointer_e0096f38b01e52baa0bfe61ed82d9330, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_19120a44370c529f9008aeee5a74b55b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_canonical_decl", method_pointer_d5383d239822570d8e73b72c575bbdc3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_inherited_constructor", method_pointer_4c94fad71cd7533f93dc04a484328b5c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("get_num_ctor_initializers", method_pointer_b15d05318b6f55e38a2b4ec2bbe05a74, "");
    class_69ef5751cb19567085dced299c047c9f.def("get_target_constructor", method_pointer_cd9386a7e98455cc99efdd17c276654a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_69ef5751cb19567085dced299c047c9f.def("is_converting_constructor", method_pointer_4cf6766ff4295f5caaf3ec175b4509cc, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_f5ee67e803a555d88268335e05e5f15f, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_constructor", method_pointer_810b9de5328951b9b41fc9cbe887d8d6, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_855894141c8c5bed838e5e50a13ad185, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_copy_or_move_constructor", method_pointer_8898430d49755568a29bfff1993c8046, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_default_constructor", method_pointer_ca539c9392375e178e1f4a634ac63b7b, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_delegating_constructor", method_pointer_c71e6669dc145bcb91ebc77372f2a6f3, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit", method_pointer_252e4412194c58068e8cabbddb05b5be, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_explicit_specified", method_pointer_d63c5f26609254b0af3b6f3d3f152721, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_92369e86326f598bbc5e4459985fc860, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_move_constructor", method_pointer_bcc5f9ce4d065f308ed8d7ccc011f81a, "");
    class_69ef5751cb19567085dced299c047c9f.def("is_specialization_copying_object", method_pointer_259764c6dd5b54c39f26913a51b77dae, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_inherited_constructor", method_pointer_1e0b3c8bfd2d5f78bd8eb89dfbc903ae, "");
    class_69ef5751cb19567085dced299c047c9f.def("set_num_ctor_initializers", method_pointer_457a333df84f557f92b3ead149132fa6, "");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof_kind");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("create_deserialized");
    class_69ef5751cb19567085dced299c047c9f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXConstructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXConstructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}