#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_1d580556003654da9f00e93300e8c7d9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_d8fd91523d7f5fabbac1db8789d48169)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_f209b4ab554453c6ba64e16cdfc796b7)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_3a1f145ef2135572956e38fa2e163650)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_e16af01eb5df559bab889e2ec20f1ba1)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_aba5d9a262075841b3bce3c069b073cb)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_3e1a23f57a7e5e80a4fd74cf95e46f01)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_b889969a894d5eca881842fec103007a)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_ece557184f9a568fa77f9c1672d62dd9)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_d8fd91523d7f5fabbac1db8789d48169, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_f209b4ab554453c6ba64e16cdfc796b7, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_3a1f145ef2135572956e38fa2e163650, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_e16af01eb5df559bab889e2ec20f1ba1, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_aba5d9a262075841b3bce3c069b073cb, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_3e1a23f57a7e5e80a4fd74cf95e46f01, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_b889969a894d5eca881842fec103007a, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_ece557184f9a568fa77f9c1672d62dd9, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}