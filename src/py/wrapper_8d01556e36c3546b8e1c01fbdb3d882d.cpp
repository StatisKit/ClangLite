#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_8d01556e36c3546b8e1c01fbdb3d882d()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_c2cbe75b4e5052ddb4be26772d8c89c4)(class ::clang::Type  const *) = ::clang::MemberPointerType::classof;
    class ::clang::QualType  (::clang::MemberPointerType::*method_pointer_e342cfd2295a5407a4ac620812f1f280)() const = &::clang::MemberPointerType::desugar;
    class ::clang::Type  const * (::clang::MemberPointerType::*method_pointer_1c2ad031199f529082131e73f320fb45)() const = &::clang::MemberPointerType::getClass;
    class ::clang::CXXRecordDecl  * (::clang::MemberPointerType::*method_pointer_7263a288b795509ab0b41fdf42696434)() const = &::clang::MemberPointerType::getMostRecentCXXRecordDecl;
    class ::clang::QualType  (::clang::MemberPointerType::*method_pointer_0a0494f2bef25c8a85623a22196d3c53)() const = &::clang::MemberPointerType::getPointeeType;
    bool  (::clang::MemberPointerType::*method_pointer_63b80e9caefe53a6ac81c9a18ca58913)() const = &::clang::MemberPointerType::isMemberDataPointer;
    bool  (::clang::MemberPointerType::*method_pointer_46604c2808725b5a8c9f385ffdf4bb4b)() const = &::clang::MemberPointerType::isMemberFunctionPointer;
    bool  (::clang::MemberPointerType::*method_pointer_1eceb58634835aadab1a62d8aff91f42)() const = &::clang::MemberPointerType::isSugared;
    boost::python::class_< class ::clang::MemberPointerType, autowig::HeldType< class ::clang::MemberPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_8d01556e36c3546b8e1c01fbdb3d882d("MemberPointerType", "", boost::python::no_init);
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("classof", method_pointer_c2cbe75b4e5052ddb4be26772d8c89c4, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("desugar", method_pointer_e342cfd2295a5407a4ac620812f1f280, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_class", method_pointer_1c2ad031199f529082131e73f320fb45, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_most_recent_cxx_record_decl", method_pointer_7263a288b795509ab0b41fdf42696434, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_pointee_type", method_pointer_0a0494f2bef25c8a85623a22196d3c53, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_data_pointer", method_pointer_63b80e9caefe53a6ac81c9a18ca58913, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_function_pointer", method_pointer_46604c2808725b5a8c9f385ffdf4bb4b, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_sugared", method_pointer_1eceb58634835aadab1a62d8aff91f42, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::MemberPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::MemberPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}