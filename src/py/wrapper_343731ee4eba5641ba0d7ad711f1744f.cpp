#include "_clanglite.h"


namespace autowig
{
}


void wrapper_343731ee4eba5641ba0d7ad711f1744f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_c6f944c87e9959e9851df42e5e22474c)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_2a49db5c40515bb2adb542e8cc152313)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_651479d8e5165193af065077c5bb96ac)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_a986205b672257aeb3622af332036f2d)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_c3045677af3d52eb80964709daa8d91d)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_75b5188a478652588dc17c79c6b9ded5)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_c6f944c87e9959e9851df42e5e22474c, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_2a49db5c40515bb2adb542e8cc152313, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_651479d8e5165193af065077c5bb96ac, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_a986205b672257aeb3622af332036f2d, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_c3045677af3d52eb80964709daa8d91d, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_75b5188a478652588dc17c79c6b9ded5, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}