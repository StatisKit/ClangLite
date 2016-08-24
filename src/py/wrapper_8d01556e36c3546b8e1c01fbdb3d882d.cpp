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
    bool  (*method_pointer_af30fccf1c59567bbdd042173658049d)(class ::clang::Type  const *) = ::clang::MemberPointerType::classof;
    class ::clang::QualType  (::clang::MemberPointerType::*method_pointer_74bc6b18e8495b5089db98ce825d48fd)() const = &::clang::MemberPointerType::desugar;
    class ::clang::Type  const * (::clang::MemberPointerType::*method_pointer_e9182a382f485adaa7281222bc3ced0f)() const = &::clang::MemberPointerType::getClass;
    class ::clang::CXXRecordDecl  * (::clang::MemberPointerType::*method_pointer_9a522e12c71f5c058bbc5620b119b4ab)() const = &::clang::MemberPointerType::getMostRecentCXXRecordDecl;
    class ::clang::QualType  (::clang::MemberPointerType::*method_pointer_3c8e1676d3065f42a9644166341eb538)() const = &::clang::MemberPointerType::getPointeeType;
    bool  (::clang::MemberPointerType::*method_pointer_02a95cffb51550ee903490e9b8834499)() const = &::clang::MemberPointerType::isMemberDataPointer;
    bool  (::clang::MemberPointerType::*method_pointer_97ba82b8bed65b07851c7d9dbf85323e)() const = &::clang::MemberPointerType::isMemberFunctionPointer;
    bool  (::clang::MemberPointerType::*method_pointer_30bbbcd08acd556aa4ce2754b97d779b)() const = &::clang::MemberPointerType::isSugared;
    boost::python::class_< class ::clang::MemberPointerType, autowig::HeldType< class ::clang::MemberPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_8d01556e36c3546b8e1c01fbdb3d882d("MemberPointerType", "", boost::python::no_init);
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("classof", method_pointer_af30fccf1c59567bbdd042173658049d, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("desugar", method_pointer_74bc6b18e8495b5089db98ce825d48fd, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_class", method_pointer_e9182a382f485adaa7281222bc3ced0f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_most_recent_cxx_record_decl", method_pointer_9a522e12c71f5c058bbc5620b119b4ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_pointee_type", method_pointer_3c8e1676d3065f42a9644166341eb538, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_data_pointer", method_pointer_02a95cffb51550ee903490e9b8834499, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_function_pointer", method_pointer_97ba82b8bed65b07851c7d9dbf85323e, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_sugared", method_pointer_30bbbcd08acd556aa4ce2754b97d779b, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::MemberPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::MemberPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}