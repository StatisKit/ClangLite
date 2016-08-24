#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_349b01a7525f5245a8ca7e0497dd56cd()
{

    std::string name_d1608489da065e6eadeb67121a123bdd = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".llvm");
    boost::python::object module_d1608489da065e6eadeb67121a123bdd(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d1608489da065e6eadeb67121a123bdd.c_str()))));
    boost::python::scope().attr("llvm") = module_d1608489da065e6eadeb67121a123bdd;
    boost::python::scope scope_d1608489da065e6eadeb67121a123bdd = module_d1608489da065e6eadeb67121a123bdd;
    char  (::llvm::StringRef::*method_pointer_fa7546612b485aa08d071e8074cde698)() const = &::llvm::StringRef::back;
    int  (::llvm::StringRef::*method_pointer_671442c1779a5075be692b51fc57b806)(class ::llvm::StringRef ) const = &::llvm::StringRef::compare;
    int  (::llvm::StringRef::*method_pointer_3c60c6972a455859b93a28d482704426)(class ::llvm::StringRef ) const = &::llvm::StringRef::compare_lower;
    int  (::llvm::StringRef::*method_pointer_fedbfa5d4fee5200b2967e7af088e442)(class ::llvm::StringRef ) const = &::llvm::StringRef::compare_numeric;
    unsigned long int  (::llvm::StringRef::*method_pointer_b3f3b26b971e53ad8283a373e7a88811)(class ::llvm::StringRef ) const = &::llvm::StringRef::count;
    unsigned long int  (::llvm::StringRef::*method_pointer_0e07f9916b5d54aa82794d24bb73ab7e)(char ) const = &::llvm::StringRef::count;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_d172472f53f15e1bbcc43a3b0df08727)(unsigned long int ) const = &::llvm::StringRef::drop_back;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_67099055064a51309473706ab9b89bfa)(unsigned long int ) const = &::llvm::StringRef::drop_front;
    unsigned int  (::llvm::StringRef::*method_pointer_f730e30e2de95559a05721113778f51f)(class ::llvm::StringRef , bool , unsigned int ) const = &::llvm::StringRef::edit_distance;
    bool  (::llvm::StringRef::*method_pointer_e7ccf992c9e55c148ad025e0cbcf11f1)() const = &::llvm::StringRef::empty;
    bool  (::llvm::StringRef::*method_pointer_cae78178c3dd59fca12667b699bfad09)(class ::llvm::StringRef ) const = &::llvm::StringRef::endswith;
    bool  (::llvm::StringRef::*method_pointer_a3f148656db15375a90b053571c7ada3)(class ::llvm::StringRef ) const = &::llvm::StringRef::endswith_lower;
    bool  (::llvm::StringRef::*method_pointer_d3a460ff067b5d3e9d03b66c0e19dae2)(class ::llvm::StringRef ) const = &::llvm::StringRef::equals;
    bool  (::llvm::StringRef::*method_pointer_2b4e3e13eb2e5d4a8bf1aa4f87816a85)(class ::llvm::StringRef ) const = &::llvm::StringRef::equals_lower;
    unsigned long int  (::llvm::StringRef::*method_pointer_e650e73f9efe535192be87d946694d97)(char , unsigned long int ) const = &::llvm::StringRef::find;
    unsigned long int  (::llvm::StringRef::*method_pointer_1a180b0e599c58dc960345fe2c5d0173)(class ::llvm::StringRef , unsigned long int ) const = &::llvm::StringRef::find;
    unsigned long int  (::llvm::StringRef::*method_pointer_eaf6ed0f55d759c29389d871a86ac846)(class ::llvm::StringRef , unsigned long int ) const = &::llvm::StringRef::find_first_not_of;
    unsigned long int  (::llvm::StringRef::*method_pointer_6dd4c3bb20ac5acc88dc30780b6be8dc)(char , unsigned long int ) const = &::llvm::StringRef::find_first_not_of;
    unsigned long int  (::llvm::StringRef::*method_pointer_6ca4ef119d735231b0b7ba3481859e44)(char , unsigned long int ) const = &::llvm::StringRef::find_first_of;
    unsigned long int  (::llvm::StringRef::*method_pointer_6e6014640d2950bab0079bdc42db5499)(class ::llvm::StringRef , unsigned long int ) const = &::llvm::StringRef::find_first_of;
    unsigned long int  (::llvm::StringRef::*method_pointer_15cd46849a9e54c4a05f04ba478cf78c)(char , unsigned long int ) const = &::llvm::StringRef::find_last_not_of;
    unsigned long int  (::llvm::StringRef::*method_pointer_9eb50e99480258e2a60a948bed32aef4)(class ::llvm::StringRef , unsigned long int ) const = &::llvm::StringRef::find_last_not_of;
    unsigned long int  (::llvm::StringRef::*method_pointer_8442f67062e6541fa4477d421203e6d1)(char , unsigned long int ) const = &::llvm::StringRef::find_last_of;
    unsigned long int  (::llvm::StringRef::*method_pointer_44ec7c09381256198559dab7be90b0cd)(class ::llvm::StringRef , unsigned long int ) const = &::llvm::StringRef::find_last_of;
    char  (::llvm::StringRef::*method_pointer_a238b4cf5c3e5127a92319fe2b5c0ade)() const = &::llvm::StringRef::front;
    int  (::llvm::StringRef::*method_pointer_ca88929a48095843b82b23b1dbb27d54)() const = &::llvm::StringRef::lower;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_6cd10f87c3065a7892d57c895e923838)(class ::llvm::StringRef ) const = &::llvm::StringRef::ltrim;
    char  (::llvm::StringRef::*method_pointer_78449134641859e5b91f70de097b827c)(unsigned long int ) const = &::llvm::StringRef::operator[];
    unsigned long int  (::llvm::StringRef::*method_pointer_ea68c42af2e75f5f97e50cdca725f11d)(class ::llvm::StringRef ) const = &::llvm::StringRef::rfind;
    unsigned long int  (::llvm::StringRef::*method_pointer_f022d2b3f6375efaa8e43cf4d8e10045)(char , unsigned long int ) const = &::llvm::StringRef::rfind;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_646790f41b1d5dd58e92c5f96bf41a38)(class ::llvm::StringRef ) const = &::llvm::StringRef::rtrim;
    unsigned long int  (::llvm::StringRef::*method_pointer_95e3676fc5eb5f0c8d438251d1bf508c)() const = &::llvm::StringRef::size;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_5c049a6d54185d1395e3e3327522c281)(unsigned long int , unsigned long int ) const = &::llvm::StringRef::slice;
    bool  (::llvm::StringRef::*method_pointer_1dc40887372d5507b517f2a3efd124e4)(class ::llvm::StringRef ) const = &::llvm::StringRef::startswith;
    bool  (::llvm::StringRef::*method_pointer_679cadb8a7835d7d8c2fc9afcc44a5cd)(class ::llvm::StringRef ) const = &::llvm::StringRef::startswith_lower;
    int  (::llvm::StringRef::*method_pointer_3060f54fd64b5ac5ae3179186cd3f5ef)() const = &::llvm::StringRef::str;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_29b94809f2ad550da695d60fc38f60f0)(unsigned long int , unsigned long int ) const = &::llvm::StringRef::substr;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_f95ec87bd8ac5b72adf6fbff44ddc5bd)(class ::llvm::StringRef ) const = &::llvm::StringRef::trim;
    int  (::llvm::StringRef::*method_pointer_c57f88eb2ea050368ff2436d9c11470d)() const = &::llvm::StringRef::upper;
    struct function_group
    {
        static bool  function_4754017e0fb1510a94b760f5bf6e68f1(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_4ecd18296fc9543c9942662f76665370(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<=(parameter_0, parameter_1); }
        static bool  function_6f527565efb25f7c97e56e1f88b4a798(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>=(parameter_0, parameter_1); }
        static bool  function_8cd7965b9bfa55afac85ab74641cdd73(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_b0437e9dd2305e3bac476e533f0d24a9(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_70f344b1d9ab5025a83954d6718b98e5(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>(parameter_0, parameter_1); }
        static class ::boost::python::str  function_c3ccde1546215acb914befb19dd6c5b5(class ::llvm::StringRef  * parameter_0)
        { return ::clanglite::str(parameter_0); }
    };
    boost::python::class_< class ::llvm::StringRef, autowig::HeldType< class ::llvm::StringRef > > class_349b01a7525f5245a8ca7e0497dd56cd("StringRef", "", boost::python::no_init);
    class_349b01a7525f5245a8ca7e0497dd56cd.def("back", method_pointer_fa7546612b485aa08d071e8074cde698, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("compare", method_pointer_671442c1779a5075be692b51fc57b806, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("compare_lower", method_pointer_3c60c6972a455859b93a28d482704426, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("compare_numeric", method_pointer_fedbfa5d4fee5200b2967e7af088e442, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("count", method_pointer_b3f3b26b971e53ad8283a373e7a88811, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("count", method_pointer_0e07f9916b5d54aa82794d24bb73ab7e, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("drop_back", method_pointer_d172472f53f15e1bbcc43a3b0df08727, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("drop_front", method_pointer_67099055064a51309473706ab9b89bfa, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("edit_distance", method_pointer_f730e30e2de95559a05721113778f51f, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("empty", method_pointer_e7ccf992c9e55c148ad025e0cbcf11f1, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("endswith", method_pointer_cae78178c3dd59fca12667b699bfad09, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("endswith_lower", method_pointer_a3f148656db15375a90b053571c7ada3, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("equals", method_pointer_d3a460ff067b5d3e9d03b66c0e19dae2, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("equals_lower", method_pointer_2b4e3e13eb2e5d4a8bf1aa4f87816a85, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find", method_pointer_e650e73f9efe535192be87d946694d97, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find", method_pointer_1a180b0e599c58dc960345fe2c5d0173, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_first_not_of", method_pointer_eaf6ed0f55d759c29389d871a86ac846, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_first_not_of", method_pointer_6dd4c3bb20ac5acc88dc30780b6be8dc, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_first_of", method_pointer_6ca4ef119d735231b0b7ba3481859e44, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_first_of", method_pointer_6e6014640d2950bab0079bdc42db5499, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_last_not_of", method_pointer_15cd46849a9e54c4a05f04ba478cf78c, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_last_not_of", method_pointer_9eb50e99480258e2a60a948bed32aef4, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_last_of", method_pointer_8442f67062e6541fa4477d421203e6d1, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_last_of", method_pointer_44ec7c09381256198559dab7be90b0cd, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("front", method_pointer_a238b4cf5c3e5127a92319fe2b5c0ade, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("lower", method_pointer_ca88929a48095843b82b23b1dbb27d54, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("ltrim", method_pointer_6cd10f87c3065a7892d57c895e923838, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__getitem__", method_pointer_78449134641859e5b91f70de097b827c, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("rfind", method_pointer_ea68c42af2e75f5f97e50cdca725f11d, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("rfind", method_pointer_f022d2b3f6375efaa8e43cf4d8e10045, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("rtrim", method_pointer_646790f41b1d5dd58e92c5f96bf41a38, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("size", method_pointer_95e3676fc5eb5f0c8d438251d1bf508c, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("slice", method_pointer_5c049a6d54185d1395e3e3327522c281, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("startswith", method_pointer_1dc40887372d5507b517f2a3efd124e4, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("startswith_lower", method_pointer_679cadb8a7835d7d8c2fc9afcc44a5cd, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("str", method_pointer_3060f54fd64b5ac5ae3179186cd3f5ef, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("substr", method_pointer_29b94809f2ad550da695d60fc38f60f0, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("trim", method_pointer_f95ec87bd8ac5b72adf6fbff44ddc5bd, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("upper", method_pointer_c57f88eb2ea050368ff2436d9c11470d, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__lt__", function_group::function_4754017e0fb1510a94b760f5bf6e68f1, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__le__", function_group::function_4ecd18296fc9543c9942662f76665370, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__ge__", function_group::function_6f527565efb25f7c97e56e1f88b4a798, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__neq__", function_group::function_8cd7965b9bfa55afac85ab74641cdd73, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__eq__", function_group::function_b0437e9dd2305e3bac476e533f0d24a9, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__gt__", function_group::function_70f344b1d9ab5025a83954d6718b98e5, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("str", function_group::function_c3ccde1546215acb914befb19dd6c5b5, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def_readonly("npos", ::llvm::StringRef::npos, "");

}