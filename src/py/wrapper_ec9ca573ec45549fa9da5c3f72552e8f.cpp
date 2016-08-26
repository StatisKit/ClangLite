#include "_clanglite.h"


namespace autowig
{
}


void wrapper_ec9ca573ec45549fa9da5c3f72552e8f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_334c3a6623b159e6bed6c08b48360d3b)(class ::clang::Type  const *) = ::clang::RecordType::classof;
    class ::clang::RecordDecl  * (::clang::RecordType::*method_pointer_b668f964bfca5aec8823ecd7d540be84)() const = &::clang::RecordType::getDecl;
    bool  (::clang::RecordType::*method_pointer_2240f2ae6d315990823977cebc26ba66)() const = &::clang::RecordType::hasConstFields;
    bool  (::clang::RecordType::*method_pointer_fbaf6aaf63ec5ebb98db0f72aac6779f)() const = &::clang::RecordType::isSugared;
    boost::python::class_< class ::clang::RecordType, autowig::HeldType< class ::clang::RecordType >, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_ec9ca573ec45549fa9da5c3f72552e8f("RecordType", "", boost::python::no_init);
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("classof", method_pointer_334c3a6623b159e6bed6c08b48360d3b, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("get_decl", method_pointer_b668f964bfca5aec8823ecd7d540be84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("has_const_fields", method_pointer_2240f2ae6d315990823977cebc26ba66, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("is_sugared", method_pointer_fbaf6aaf63ec5ebb98db0f72aac6779f, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordType >, autowig::HeldType< class ::clang::TagType > >();
    }

}