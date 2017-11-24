#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TypedefType const volatile * get_pointer<class ::clang::TypedefType const volatile >(class ::clang::TypedefType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3c36278b447559a3a5d2a8e223d530d9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TypedefNameDecl * (::clang::TypedefType::*method_pointer_d037ef2092c459709a7dc5470b6cf362)() const = &::clang::TypedefType::getDecl;
    bool  (::clang::TypedefType::*method_pointer_d5806058a73055288d1e9c7daeacb479)() const = &::clang::TypedefType::isSugared;
    class ::clang::QualType  (::clang::TypedefType::*method_pointer_bac08253f4a258b1a50dbd2036a6e65d)() const = &::clang::TypedefType::desugar;
    bool  (*method_pointer_7d4f00fd55c05aac8843ef3bf3b236ac)(class ::clang::Type const *) = ::clang::TypedefType::classof;
    boost::python::class_< class ::clang::TypedefType, autowig::Held< class ::clang::TypedefType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3c36278b447559a3a5d2a8e223d530d9("TypedefType", "", boost::python::no_init);
    class_3c36278b447559a3a5d2a8e223d530d9.def("get_decl", method_pointer_d037ef2092c459709a7dc5470b6cf362, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3c36278b447559a3a5d2a8e223d530d9.def("is_sugared", method_pointer_d5806058a73055288d1e9c7daeacb479, "");
    class_3c36278b447559a3a5d2a8e223d530d9.def("desugar", method_pointer_bac08253f4a258b1a50dbd2036a6e65d, "");
    class_3c36278b447559a3a5d2a8e223d530d9.def("classof", method_pointer_7d4f00fd55c05aac8843ef3bf3b236ac, "");
    class_3c36278b447559a3a5d2a8e223d530d9.staticmethod("classof");

    if(autowig::Held< class ::clang::TypedefType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TypedefType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}