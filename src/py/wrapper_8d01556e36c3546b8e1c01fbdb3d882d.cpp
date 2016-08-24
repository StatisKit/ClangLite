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
    bool  (*method_pointer_25f7a15ed5dc5b51b5c5fa48ddae9321)(class ::clang::Type  const *) = ::clang::MemberPointerType::classof;
    class ::clang::QualType  (::clang::MemberPointerType::*method_pointer_5c3ac9a501055c6d9ac6464a4d0af66a)() const = &::clang::MemberPointerType::desugar;
    class ::clang::Type  const * (::clang::MemberPointerType::*method_pointer_4429c70608a15f5f9c06a951a366a793)() const = &::clang::MemberPointerType::getClass;
    class ::clang::CXXRecordDecl  * (::clang::MemberPointerType::*method_pointer_aa0e38b770ed50af841de094094dabbe)() const = &::clang::MemberPointerType::getMostRecentCXXRecordDecl;
    class ::clang::QualType  (::clang::MemberPointerType::*method_pointer_1419da7ee93d570d81e2ba9e9657186d)() const = &::clang::MemberPointerType::getPointeeType;
    bool  (::clang::MemberPointerType::*method_pointer_b0a40ac52ae151a58bd60df45a100c9b)() const = &::clang::MemberPointerType::isMemberDataPointer;
    bool  (::clang::MemberPointerType::*method_pointer_9c27909a0cc752a390968c837b515d4f)() const = &::clang::MemberPointerType::isMemberFunctionPointer;
    bool  (::clang::MemberPointerType::*method_pointer_3a84b284097f5e50a2c7ebc621e8439c)() const = &::clang::MemberPointerType::isSugared;
    boost::python::class_< class ::clang::MemberPointerType, autowig::HeldType< class ::clang::MemberPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_8d01556e36c3546b8e1c01fbdb3d882d("MemberPointerType", "", boost::python::no_init);
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("classof", method_pointer_25f7a15ed5dc5b51b5c5fa48ddae9321, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("desugar", method_pointer_5c3ac9a501055c6d9ac6464a4d0af66a, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_class", method_pointer_4429c70608a15f5f9c06a951a366a793, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_most_recent_cxx_record_decl", method_pointer_aa0e38b770ed50af841de094094dabbe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_pointee_type", method_pointer_1419da7ee93d570d81e2ba9e9657186d, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_data_pointer", method_pointer_b0a40ac52ae151a58bd60df45a100c9b, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_function_pointer", method_pointer_9c27909a0cc752a390968c837b515d4f, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_sugared", method_pointer_3a84b284097f5e50a2c7ebc621e8439c, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::MemberPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::MemberPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}