#include "_clanglite.h"


namespace autowig
{
}


void wrapper_8d01556e36c3546b8e1c01fbdb3d882d()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_97c9530c1f2154c88a666ad6e04faedb)(class ::clang::Type  const *) = ::clang::MemberPointerType::classof;
    class ::clang::Type  const * (::clang::MemberPointerType::*method_pointer_df32cd6737fb526f91e2a1028b93b55a)() const = &::clang::MemberPointerType::getClass;
    class ::clang::CXXRecordDecl  * (::clang::MemberPointerType::*method_pointer_b6b23bb93665554ca86d66a32184e768)() const = &::clang::MemberPointerType::getMostRecentCXXRecordDecl;
    bool  (::clang::MemberPointerType::*method_pointer_4c6b3af1a2d85b6991e65d1b1e2a7c21)() const = &::clang::MemberPointerType::isMemberDataPointer;
    bool  (::clang::MemberPointerType::*method_pointer_fad60910bd2e5d9ea18cee2e2678caaf)() const = &::clang::MemberPointerType::isMemberFunctionPointer;
    bool  (::clang::MemberPointerType::*method_pointer_5903eecae0e95c80bd4ba91c68a13f8a)() const = &::clang::MemberPointerType::isSugared;
    boost::python::class_< class ::clang::MemberPointerType, autowig::HeldType< class ::clang::MemberPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_8d01556e36c3546b8e1c01fbdb3d882d("MemberPointerType", "", boost::python::no_init);
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("classof", method_pointer_97c9530c1f2154c88a666ad6e04faedb, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_class", method_pointer_df32cd6737fb526f91e2a1028b93b55a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_most_recent_cxx_record_decl", method_pointer_b6b23bb93665554ca86d66a32184e768, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_data_pointer", method_pointer_4c6b3af1a2d85b6991e65d1b1e2a7c21, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_function_pointer", method_pointer_fad60910bd2e5d9ea18cee2e2678caaf, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_sugared", method_pointer_5903eecae0e95c80bd4ba91c68a13f8a, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::MemberPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::MemberPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}