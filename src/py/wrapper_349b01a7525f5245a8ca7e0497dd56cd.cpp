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
    char  (::llvm::StringRef::*method_pointer_2e508551c05d5b37a69cc7793cb7640e)() const = &::llvm::StringRef::back;
    int  (::llvm::StringRef::*method_pointer_5a90f5dcb9a659059fc7187778ae3c05)(class ::llvm::StringRef ) const = &::llvm::StringRef::compare;
    int  (::llvm::StringRef::*method_pointer_a66565b134d356b4ac323564fd2a3630)(class ::llvm::StringRef ) const = &::llvm::StringRef::compare_lower;
    int  (::llvm::StringRef::*method_pointer_a7783452ad595706aeb62abd3f46bc80)(class ::llvm::StringRef ) const = &::llvm::StringRef::compare_numeric;
    unsigned long int  (::llvm::StringRef::*method_pointer_bf849f17843d52d4a9e633c4eb153273)(char ) const = &::llvm::StringRef::count;
    unsigned long int  (::llvm::StringRef::*method_pointer_5c1f2a416efe5c3aacb3646c4fa411bb)(class ::llvm::StringRef ) const = &::llvm::StringRef::count;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_6c929c35a56e5bd29d9130736800831b)(unsigned long int ) const = &::llvm::StringRef::drop_back;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_f33816461a3a5d92aad4f90fce401cdd)(unsigned long int ) const = &::llvm::StringRef::drop_front;
    unsigned int  (::llvm::StringRef::*method_pointer_8b5eb47994e559e6a699c2b809694a37)(class ::llvm::StringRef , bool , unsigned int ) const = &::llvm::StringRef::edit_distance;
    bool  (::llvm::StringRef::*method_pointer_d705e6a428885f0c80380385a1cd33a3)() const = &::llvm::StringRef::empty;
    bool  (::llvm::StringRef::*method_pointer_604d46d108e55d9da2e41bb81481c999)(class ::llvm::StringRef ) const = &::llvm::StringRef::endswith;
    bool  (::llvm::StringRef::*method_pointer_826f8160d68a5a5db923668d251778fd)(class ::llvm::StringRef ) const = &::llvm::StringRef::endswith_lower;
    bool  (::llvm::StringRef::*method_pointer_5fe95c30f9715c508b8a43afef7ab81e)(class ::llvm::StringRef ) const = &::llvm::StringRef::equals;
    bool  (::llvm::StringRef::*method_pointer_4b90d4435a5450d08e07ee3054a09995)(class ::llvm::StringRef ) const = &::llvm::StringRef::equals_lower;
    unsigned long int  (::llvm::StringRef::*method_pointer_2fa2b145c798587cb5ceedfa40810cbf)(char , unsigned long int ) const = &::llvm::StringRef::find;
    unsigned long int  (::llvm::StringRef::*method_pointer_62e36d75482f533a80b1a6f8a7555022)(class ::llvm::StringRef , unsigned long int ) const = &::llvm::StringRef::find;
    unsigned long int  (::llvm::StringRef::*method_pointer_97c4e9a8cebb500789fb2d4feef288d9)(char , unsigned long int ) const = &::llvm::StringRef::find_first_not_of;
    unsigned long int  (::llvm::StringRef::*method_pointer_7e9d96307ab851a88b792cefd5de90bf)(class ::llvm::StringRef , unsigned long int ) const = &::llvm::StringRef::find_first_not_of;
    unsigned long int  (::llvm::StringRef::*method_pointer_02536ca185ae5c10b4e35a9a97d35333)(char , unsigned long int ) const = &::llvm::StringRef::find_first_of;
    unsigned long int  (::llvm::StringRef::*method_pointer_ec98a28241bb55a882b24ec905eae6fb)(class ::llvm::StringRef , unsigned long int ) const = &::llvm::StringRef::find_first_of;
    unsigned long int  (::llvm::StringRef::*method_pointer_b0b88774daac541a97c9f6a86f18497d)(class ::llvm::StringRef , unsigned long int ) const = &::llvm::StringRef::find_last_not_of;
    unsigned long int  (::llvm::StringRef::*method_pointer_e7d893082fe7553e99e11856715da78d)(char , unsigned long int ) const = &::llvm::StringRef::find_last_not_of;
    unsigned long int  (::llvm::StringRef::*method_pointer_cd91a2ddb74f572bb756ffa770870609)(class ::llvm::StringRef , unsigned long int ) const = &::llvm::StringRef::find_last_of;
    unsigned long int  (::llvm::StringRef::*method_pointer_a0516ca47b025cd08f96a514707aa109)(char , unsigned long int ) const = &::llvm::StringRef::find_last_of;
    char  (::llvm::StringRef::*method_pointer_91b1fc24c18a51069e34b205029a1108)() const = &::llvm::StringRef::front;
    int  (::llvm::StringRef::*method_pointer_ecb7ac4d7e1155478a5e09ba697b6580)() const = &::llvm::StringRef::lower;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_4942e508097b54b39c0f593c7054ffa2)(class ::llvm::StringRef ) const = &::llvm::StringRef::ltrim;
    char  (::llvm::StringRef::*method_pointer_969e67bb8c2c5d1da79c36e55f1690f9)(unsigned long int ) const = &::llvm::StringRef::operator[];
    unsigned long int  (::llvm::StringRef::*method_pointer_a6ed92471628579c8731e0b869b17f0c)(class ::llvm::StringRef ) const = &::llvm::StringRef::rfind;
    unsigned long int  (::llvm::StringRef::*method_pointer_1c504dbd47eb58a58df01810f5e0f350)(char , unsigned long int ) const = &::llvm::StringRef::rfind;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_ab7dccb06d485e4fb6c83059b7806960)(class ::llvm::StringRef ) const = &::llvm::StringRef::rtrim;
    unsigned long int  (::llvm::StringRef::*method_pointer_5cd1b1be47af5548871cd5db5421ac77)() const = &::llvm::StringRef::size;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_7980b0743042555b8b31ac7870f72980)(unsigned long int , unsigned long int ) const = &::llvm::StringRef::slice;
    bool  (::llvm::StringRef::*method_pointer_b2bd9b488ab9500586e3baaee038be99)(class ::llvm::StringRef ) const = &::llvm::StringRef::startswith;
    bool  (::llvm::StringRef::*method_pointer_fe1de06cd4e25efeb03f1d2138d2e77e)(class ::llvm::StringRef ) const = &::llvm::StringRef::startswith_lower;
    int  (::llvm::StringRef::*method_pointer_cb3c09cd63ae5261a3cd66dd18f898aa)() const = &::llvm::StringRef::str;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_ee589a2f9e6e56889415ff083a688760)(unsigned long int , unsigned long int ) const = &::llvm::StringRef::substr;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_e26253d6399f572085cf9e25d1fc896d)(class ::llvm::StringRef ) const = &::llvm::StringRef::trim;
    int  (::llvm::StringRef::*method_pointer_edfcfe07431b5d328c46ec3557a86e6e)() const = &::llvm::StringRef::upper;
    struct function_group
    {
        static bool  function_d34d5a3435065f379d3ff644cc031654(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<=(parameter_0, parameter_1); }
        static bool  function_960e3d4eb82c52eb8fb081b0d5bb2c1e(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>=(parameter_0, parameter_1); }
        static bool  function_248c6dbf920c5c16a8a5a3fed32c28df(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_542594538311508097ca1ad47e5bd275(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_4b07c6a49a5a5542bbbe8e753964494c(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>(parameter_0, parameter_1); }
        static bool  function_40c4b83d6511565291f9c2b4f6e86add(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static class ::boost::python::str  function_170c6ea3a8e355b98ebacf58d53eb848(class ::llvm::StringRef  * parameter_0)
        { return ::clanglite::str(parameter_0); }
    };
    boost::python::class_< class ::llvm::StringRef, autowig::HeldType< class ::llvm::StringRef > > class_349b01a7525f5245a8ca7e0497dd56cd("StringRef", "", boost::python::no_init);
    class_349b01a7525f5245a8ca7e0497dd56cd.def("back", method_pointer_2e508551c05d5b37a69cc7793cb7640e, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("compare", method_pointer_5a90f5dcb9a659059fc7187778ae3c05, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("compare_lower", method_pointer_a66565b134d356b4ac323564fd2a3630, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("compare_numeric", method_pointer_a7783452ad595706aeb62abd3f46bc80, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("count", method_pointer_bf849f17843d52d4a9e633c4eb153273, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("count", method_pointer_5c1f2a416efe5c3aacb3646c4fa411bb, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("drop_back", method_pointer_6c929c35a56e5bd29d9130736800831b, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("drop_front", method_pointer_f33816461a3a5d92aad4f90fce401cdd, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("edit_distance", method_pointer_8b5eb47994e559e6a699c2b809694a37, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("empty", method_pointer_d705e6a428885f0c80380385a1cd33a3, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("endswith", method_pointer_604d46d108e55d9da2e41bb81481c999, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("endswith_lower", method_pointer_826f8160d68a5a5db923668d251778fd, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("equals", method_pointer_5fe95c30f9715c508b8a43afef7ab81e, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("equals_lower", method_pointer_4b90d4435a5450d08e07ee3054a09995, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find", method_pointer_2fa2b145c798587cb5ceedfa40810cbf, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find", method_pointer_62e36d75482f533a80b1a6f8a7555022, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_first_not_of", method_pointer_97c4e9a8cebb500789fb2d4feef288d9, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_first_not_of", method_pointer_7e9d96307ab851a88b792cefd5de90bf, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_first_of", method_pointer_02536ca185ae5c10b4e35a9a97d35333, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_first_of", method_pointer_ec98a28241bb55a882b24ec905eae6fb, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_last_not_of", method_pointer_b0b88774daac541a97c9f6a86f18497d, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_last_not_of", method_pointer_e7d893082fe7553e99e11856715da78d, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_last_of", method_pointer_cd91a2ddb74f572bb756ffa770870609, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_last_of", method_pointer_a0516ca47b025cd08f96a514707aa109, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("front", method_pointer_91b1fc24c18a51069e34b205029a1108, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("lower", method_pointer_ecb7ac4d7e1155478a5e09ba697b6580, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("ltrim", method_pointer_4942e508097b54b39c0f593c7054ffa2, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__getitem__", method_pointer_969e67bb8c2c5d1da79c36e55f1690f9, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("rfind", method_pointer_a6ed92471628579c8731e0b869b17f0c, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("rfind", method_pointer_1c504dbd47eb58a58df01810f5e0f350, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("rtrim", method_pointer_ab7dccb06d485e4fb6c83059b7806960, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("size", method_pointer_5cd1b1be47af5548871cd5db5421ac77, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("slice", method_pointer_7980b0743042555b8b31ac7870f72980, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("startswith", method_pointer_b2bd9b488ab9500586e3baaee038be99, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("startswith_lower", method_pointer_fe1de06cd4e25efeb03f1d2138d2e77e, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("str", method_pointer_cb3c09cd63ae5261a3cd66dd18f898aa, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("substr", method_pointer_ee589a2f9e6e56889415ff083a688760, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("trim", method_pointer_e26253d6399f572085cf9e25d1fc896d, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("upper", method_pointer_edfcfe07431b5d328c46ec3557a86e6e, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__le__", function_group::function_d34d5a3435065f379d3ff644cc031654, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__ge__", function_group::function_960e3d4eb82c52eb8fb081b0d5bb2c1e, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__lt__", function_group::function_248c6dbf920c5c16a8a5a3fed32c28df, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__eq__", function_group::function_542594538311508097ca1ad47e5bd275, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__gt__", function_group::function_4b07c6a49a5a5542bbbe8e753964494c, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__neq__", function_group::function_40c4b83d6511565291f9c2b4f6e86add, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("str", function_group::function_170c6ea3a8e355b98ebacf58d53eb848, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def_readonly("npos", ::llvm::StringRef::npos, "");

}