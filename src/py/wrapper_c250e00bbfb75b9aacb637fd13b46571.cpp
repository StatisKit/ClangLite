#include "_clanglite.h"


namespace autowig
{
}


void wrapper_c250e00bbfb75b9aacb637fd13b46571()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_93352f6b7e08567292f775e560fce638)(class ::clang::Type  const *) = ::clang::ReferenceType::classof;
    bool  (::clang::ReferenceType::*method_pointer_64dca1c27c87530e82977ec7f331be1b)() const = &::clang::ReferenceType::isInnerRef;
    bool  (::clang::ReferenceType::*method_pointer_4ec4555bd3e95e8286074e0af12e7207)() const = &::clang::ReferenceType::isSpelledAsLValue;
    boost::python::class_< class ::clang::ReferenceType, autowig::HeldType< class ::clang::ReferenceType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_c250e00bbfb75b9aacb637fd13b46571("ReferenceType", "", boost::python::no_init);
    class_c250e00bbfb75b9aacb637fd13b46571.def("classof", method_pointer_93352f6b7e08567292f775e560fce638, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("is_inner_ref", method_pointer_64dca1c27c87530e82977ec7f331be1b, "");
    class_c250e00bbfb75b9aacb637fd13b46571.def("is_spelled_as_l_value", method_pointer_4ec4555bd3e95e8286074e0af12e7207, "");
    class_c250e00bbfb75b9aacb637fd13b46571.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ReferenceType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ReferenceType >, autowig::HeldType< class ::clang::Type > >();
    }

}