#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_ec9ca573ec45549fa9da5c3f72552e8f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_a242b6aeb7835a22bc7e2787d7c248da)(class ::clang::Type  const *) = ::clang::RecordType::classof;
    class ::clang::QualType  (::clang::RecordType::*method_pointer_a7ae393bd5e65c4d833031c4ffc73202)() const = &::clang::RecordType::desugar;
    class ::clang::RecordDecl  * (::clang::RecordType::*method_pointer_144690b3f2875feb8edf41a6d4ae95b8)() const = &::clang::RecordType::getDecl;
    bool  (::clang::RecordType::*method_pointer_c966b8a6fdfe561bbcf4285c860e6350)() const = &::clang::RecordType::hasConstFields;
    bool  (::clang::RecordType::*method_pointer_ee17fdac2cdf56deb18f24de47ae0bf2)() const = &::clang::RecordType::isSugared;
    boost::python::class_< class ::clang::RecordType, autowig::HeldType< class ::clang::RecordType >, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_ec9ca573ec45549fa9da5c3f72552e8f("RecordType", "", boost::python::no_init);
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("classof", method_pointer_a242b6aeb7835a22bc7e2787d7c248da, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("desugar", method_pointer_a7ae393bd5e65c4d833031c4ffc73202, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("get_decl", method_pointer_144690b3f2875feb8edf41a6d4ae95b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("has_const_fields", method_pointer_c966b8a6fdfe561bbcf4285c860e6350, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("is_sugared", method_pointer_ee17fdac2cdf56deb18f24de47ae0bf2, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordType >, autowig::HeldType< class ::clang::TagType > >();
    }

}