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
    bool  (*method_pointer_8472c09cdd855aa9a2320cecc433bc6c)(class ::clang::Type  const *) = ::clang::RecordType::classof;
    class ::clang::QualType  (::clang::RecordType::*method_pointer_23677c796a70560fbdf56d782a9718ea)() const = &::clang::RecordType::desugar;
    class ::clang::RecordDecl  * (::clang::RecordType::*method_pointer_b8cbe498cddd5d328b74b9106da7f370)() const = &::clang::RecordType::getDecl;
    bool  (::clang::RecordType::*method_pointer_4b256db0ae8d54ac88bfeb0eeba63fdb)() const = &::clang::RecordType::hasConstFields;
    bool  (::clang::RecordType::*method_pointer_2a6c50d7a35c5031a5540aaef2bf1a5c)() const = &::clang::RecordType::isSugared;
    boost::python::class_< class ::clang::RecordType, autowig::HeldType< class ::clang::RecordType >, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_ec9ca573ec45549fa9da5c3f72552e8f("RecordType", "", boost::python::no_init);
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("classof", method_pointer_8472c09cdd855aa9a2320cecc433bc6c, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("desugar", method_pointer_23677c796a70560fbdf56d782a9718ea, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("get_decl", method_pointer_b8cbe498cddd5d328b74b9106da7f370, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("has_const_fields", method_pointer_4b256db0ae8d54ac88bfeb0eeba63fdb, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("is_sugared", method_pointer_2a6c50d7a35c5031a5540aaef2bf1a5c, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordType >, autowig::HeldType< class ::clang::TagType > >();
    }

}