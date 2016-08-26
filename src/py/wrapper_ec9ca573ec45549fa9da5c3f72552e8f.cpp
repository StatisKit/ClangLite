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
    bool  (*method_pointer_55a5b5cbcd0c56ea9b4822aed7e19339)(class ::clang::Type  const *) = ::clang::RecordType::classof;
    class ::clang::QualType  (::clang::RecordType::*method_pointer_4f18d020fdf1557487726e578bea7ec0)() const = &::clang::RecordType::desugar;
    class ::clang::RecordDecl  * (::clang::RecordType::*method_pointer_edb939137879582b8c90130a00d39cdb)() const = &::clang::RecordType::getDecl;
    bool  (::clang::RecordType::*method_pointer_206895af47d25c9c98d4374000a162d9)() const = &::clang::RecordType::hasConstFields;
    bool  (::clang::RecordType::*method_pointer_5fc7a22c774b5b79b24985695d577d29)() const = &::clang::RecordType::isSugared;
    boost::python::class_< class ::clang::RecordType, autowig::HeldType< class ::clang::RecordType >, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_ec9ca573ec45549fa9da5c3f72552e8f("RecordType", "", boost::python::no_init);
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("classof", method_pointer_55a5b5cbcd0c56ea9b4822aed7e19339, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("desugar", method_pointer_4f18d020fdf1557487726e578bea7ec0, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("get_decl", method_pointer_edb939137879582b8c90130a00d39cdb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("has_const_fields", method_pointer_206895af47d25c9c98d4374000a162d9, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("is_sugared", method_pointer_5fc7a22c774b5b79b24985695d577d29, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordType >, autowig::HeldType< class ::clang::TagType > >();
    }

}