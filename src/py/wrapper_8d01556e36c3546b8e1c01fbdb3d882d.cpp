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
    bool  (*method_pointer_6feff3e65056553392558d7b3653f681)(class ::clang::Type  const *) = ::clang::MemberPointerType::classof;
    class ::clang::QualType  (::clang::MemberPointerType::*method_pointer_ef6e784482185509b659179d823c87ec)() const = &::clang::MemberPointerType::desugar;
    class ::clang::Type  const * (::clang::MemberPointerType::*method_pointer_66427b31a3a5562599b94d74a6895ee5)() const = &::clang::MemberPointerType::getClass;
    class ::clang::CXXRecordDecl  * (::clang::MemberPointerType::*method_pointer_9c03250392005dcc947e0bb7d2922c37)() const = &::clang::MemberPointerType::getMostRecentCXXRecordDecl;
    class ::clang::QualType  (::clang::MemberPointerType::*method_pointer_4d0dc62a49d85b1eab9c819ef68b3e42)() const = &::clang::MemberPointerType::getPointeeType;
    bool  (::clang::MemberPointerType::*method_pointer_9e19a9547bc65bd1b5a451985403c9d2)() const = &::clang::MemberPointerType::isMemberDataPointer;
    bool  (::clang::MemberPointerType::*method_pointer_97be8092be71578f892239d679704f72)() const = &::clang::MemberPointerType::isMemberFunctionPointer;
    bool  (::clang::MemberPointerType::*method_pointer_9d58d758653d501092d7a6f135547ad7)() const = &::clang::MemberPointerType::isSugared;
    boost::python::class_< class ::clang::MemberPointerType, autowig::HeldType< class ::clang::MemberPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_8d01556e36c3546b8e1c01fbdb3d882d("MemberPointerType", "", boost::python::no_init);
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("classof", method_pointer_6feff3e65056553392558d7b3653f681, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("desugar", method_pointer_ef6e784482185509b659179d823c87ec, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_class", method_pointer_66427b31a3a5562599b94d74a6895ee5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_most_recent_cxx_record_decl", method_pointer_9c03250392005dcc947e0bb7d2922c37, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_pointee_type", method_pointer_4d0dc62a49d85b1eab9c819ef68b3e42, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_data_pointer", method_pointer_9e19a9547bc65bd1b5a451985403c9d2, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_function_pointer", method_pointer_97be8092be71578f892239d679704f72, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_sugared", method_pointer_9d58d758653d501092d7a6f135547ad7, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::MemberPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::MemberPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}