#include "_clanglite.h"


namespace autowig
{
}


void wrapper_7d10a38ead5950acb903ebd8bb882a64()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_1b64128074645dc2b12b2129e2f3661f)(class ::clang::Type  const *) = ::clang::DependentSizedExtVectorType::classof;
    class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_13b7aff907f75038934a22ad02267bf6)() const = &::clang::DependentSizedExtVectorType::desugar;
    class ::clang::SourceLocation  (::clang::DependentSizedExtVectorType::*method_pointer_bd0209b7429e513591787dc94255317b)() const = &::clang::DependentSizedExtVectorType::getAttributeLoc;
    class ::clang::QualType  (::clang::DependentSizedExtVectorType::*method_pointer_9415541b44545b4790626954d5c145dd)() const = &::clang::DependentSizedExtVectorType::getElementType;
    bool  (::clang::DependentSizedExtVectorType::*method_pointer_634b9064ea855bd2afbf1a62e41f0835)() const = &::clang::DependentSizedExtVectorType::isSugared;
    boost::python::class_< class ::clang::DependentSizedExtVectorType, autowig::HeldType< class ::clang::DependentSizedExtVectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_7d10a38ead5950acb903ebd8bb882a64("DependentSizedExtVectorType", "", boost::python::no_init);
    class_7d10a38ead5950acb903ebd8bb882a64.def("classof", method_pointer_1b64128074645dc2b12b2129e2f3661f, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("desugar", method_pointer_13b7aff907f75038934a22ad02267bf6, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("get_attribute_loc", method_pointer_bd0209b7429e513591787dc94255317b, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("get_element_type", method_pointer_9415541b44545b4790626954d5c145dd, "");
    class_7d10a38ead5950acb903ebd8bb882a64.def("is_sugared", method_pointer_634b9064ea855bd2afbf1a62e41f0835, "");
    class_7d10a38ead5950acb903ebd8bb882a64.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentSizedExtVectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentSizedExtVectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}