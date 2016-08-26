#include "_clanglite.h"


namespace autowig
{
}


void wrapper_708015b5173c579ca15734236c01d5a8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_481a3d52b6e4599bb1c81e719e9b8d03)(class ::clang::Type  const *) = ::clang::UnresolvedUsingType::classof;
    class ::clang::QualType  (::clang::UnresolvedUsingType::*method_pointer_6d1a1ada030c5417a4e50c14da740788)() const = &::clang::UnresolvedUsingType::desugar;
    class ::clang::UnresolvedUsingTypenameDecl  * (::clang::UnresolvedUsingType::*method_pointer_c121e5ce32a0574bbc00cd770eaab0db)() const = &::clang::UnresolvedUsingType::getDecl;
    bool  (::clang::UnresolvedUsingType::*method_pointer_a2bb7ebdf4bc5ea9a0c63fcbac8c1770)() const = &::clang::UnresolvedUsingType::isSugared;
    boost::python::class_< class ::clang::UnresolvedUsingType, autowig::HeldType< class ::clang::UnresolvedUsingType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_708015b5173c579ca15734236c01d5a8("UnresolvedUsingType", "", boost::python::no_init);
    class_708015b5173c579ca15734236c01d5a8.def("classof", method_pointer_481a3d52b6e4599bb1c81e719e9b8d03, "");
    class_708015b5173c579ca15734236c01d5a8.def("desugar", method_pointer_6d1a1ada030c5417a4e50c14da740788, "");
    class_708015b5173c579ca15734236c01d5a8.def("get_decl", method_pointer_c121e5ce32a0574bbc00cd770eaab0db, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_708015b5173c579ca15734236c01d5a8.def("is_sugared", method_pointer_a2bb7ebdf4bc5ea9a0c63fcbac8c1770, "");
    class_708015b5173c579ca15734236c01d5a8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnresolvedUsingType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnresolvedUsingType >, autowig::HeldType< class ::clang::Type > >();
    }

}