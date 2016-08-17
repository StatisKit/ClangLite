#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_8d01556e36c3546b8e1c01fbdb3d882d()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::MemberPointerType::*method_pointer_f88e1bf9bb94537889c8de9f67a6f2ea)() const = &::clang::MemberPointerType::isMemberDataPointer;
    bool  (::clang::MemberPointerType::*method_pointer_ca938e8e890b54699f6e1ffd2e6e831e)() const = &::clang::MemberPointerType::isMemberFunctionPointer;
    class ::clang::CXXRecordDecl  * (::clang::MemberPointerType::*method_pointer_5bd4708d81a150ef9934bbd02be74978)() const = &::clang::MemberPointerType::getMostRecentCXXRecordDecl;
    class ::clang::Type  const * (::clang::MemberPointerType::*method_pointer_801fc87e2dd1562c831e6fd5e6ee5a01)() const = &::clang::MemberPointerType::getClass;
    bool  (::clang::MemberPointerType::*method_pointer_a7ac5a8779a45dc8901a0a210cc99019)() const = &::clang::MemberPointerType::isSugared;
    bool  (*method_pointer_fca73ef1156a55a1a81147bb05420e39)(class ::clang::Type  const *) = ::clang::MemberPointerType::classof;
    boost::python::class_< class ::clang::MemberPointerType, autowig::HeldType< class ::clang::MemberPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_8d01556e36c3546b8e1c01fbdb3d882d("MemberPointerType", "", boost::python::no_init);
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_data_pointer", method_pointer_f88e1bf9bb94537889c8de9f67a6f2ea, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_function_pointer", method_pointer_ca938e8e890b54699f6e1ffd2e6e831e, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_most_recent_cxx_record_decl", method_pointer_5bd4708d81a150ef9934bbd02be74978, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_class", method_pointer_801fc87e2dd1562c831e6fd5e6ee5a01, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_sugared", method_pointer_a7ac5a8779a45dc8901a0a210cc99019, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("classof", method_pointer_fca73ef1156a55a1a81147bb05420e39, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::MemberPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::MemberPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}