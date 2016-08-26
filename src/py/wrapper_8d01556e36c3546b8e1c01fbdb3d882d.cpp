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
    bool  (*method_pointer_cba9eff26e8d503db353bb6024ad60ca)(class ::clang::Type  const *) = ::clang::MemberPointerType::classof;
    class ::clang::QualType  (::clang::MemberPointerType::*method_pointer_3673284679a35a84b30a7fb2166b400c)() const = &::clang::MemberPointerType::desugar;
    class ::clang::Type  const * (::clang::MemberPointerType::*method_pointer_27ac5346a67a5e64be44f2689e48d7d5)() const = &::clang::MemberPointerType::getClass;
    class ::clang::CXXRecordDecl  * (::clang::MemberPointerType::*method_pointer_221c69872fda5e72ba5ccfa3363a30d6)() const = &::clang::MemberPointerType::getMostRecentCXXRecordDecl;
    class ::clang::QualType  (::clang::MemberPointerType::*method_pointer_e0f1581ceb0f5a7b9f6725c9c601dfa7)() const = &::clang::MemberPointerType::getPointeeType;
    bool  (::clang::MemberPointerType::*method_pointer_9b99a7e9f68d559b876f00efb78a9de3)() const = &::clang::MemberPointerType::isMemberDataPointer;
    bool  (::clang::MemberPointerType::*method_pointer_5fc81185d8385ef380977ac06c29f5e8)() const = &::clang::MemberPointerType::isMemberFunctionPointer;
    bool  (::clang::MemberPointerType::*method_pointer_345f94b9b53e5bc3a2d63cd80a0906b5)() const = &::clang::MemberPointerType::isSugared;
    boost::python::class_< class ::clang::MemberPointerType, autowig::HeldType< class ::clang::MemberPointerType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_8d01556e36c3546b8e1c01fbdb3d882d("MemberPointerType", "", boost::python::no_init);
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("classof", method_pointer_cba9eff26e8d503db353bb6024ad60ca, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("desugar", method_pointer_3673284679a35a84b30a7fb2166b400c, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_class", method_pointer_27ac5346a67a5e64be44f2689e48d7d5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_most_recent_cxx_record_decl", method_pointer_221c69872fda5e72ba5ccfa3363a30d6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_pointee_type", method_pointer_e0f1581ceb0f5a7b9f6725c9c601dfa7, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_data_pointer", method_pointer_9b99a7e9f68d559b876f00efb78a9de3, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_function_pointer", method_pointer_5fc81185d8385ef380977ac06c29f5e8, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_sugared", method_pointer_345f94b9b53e5bc3a2d63cd80a0906b5, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::MemberPointerType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::MemberPointerType >, autowig::HeldType< class ::clang::Type > >();
    }

}