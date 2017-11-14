#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TypeOfExprType const volatile * get_pointer<class ::clang::TypeOfExprType const volatile >(class ::clang::TypeOfExprType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3bff763d917f5a62bc6b705f9eb6fdba()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::TypeOfExprType::*method_pointer_2986677fb5cc52c185a3dadfe5276f22)() const = &::clang::TypeOfExprType::desugar;
    bool  (::clang::TypeOfExprType::*method_pointer_127a875d8a4c5167aaee7d8cad487479)() const = &::clang::TypeOfExprType::isSugared;
    bool  (*method_pointer_ca4b7c018479539fac03fd4863c9fa9d)(class ::clang::Type const *) = ::clang::TypeOfExprType::classof;
    boost::python::class_< class ::clang::TypeOfExprType, autowig::Held< class ::clang::TypeOfExprType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3bff763d917f5a62bc6b705f9eb6fdba("TypeOfExprType", "", boost::python::no_init);
    class_3bff763d917f5a62bc6b705f9eb6fdba.def("desugar", method_pointer_2986677fb5cc52c185a3dadfe5276f22, "Remove a single level of sugar.\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_3bff763d917f5a62bc6b705f9eb6fdba.def("is_sugared", method_pointer_127a875d8a4c5167aaee7d8cad487479, "Returns whether this type directly provides sugar.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bff763d917f5a62bc6b705f9eb6fdba.def("classof", method_pointer_ca4b7c018479539fac03fd4863c9fa9d, "");
    class_3bff763d917f5a62bc6b705f9eb6fdba.staticmethod("classof");

    if(autowig::Held< class ::clang::TypeOfExprType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TypeOfExprType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}