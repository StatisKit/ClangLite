#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::FunctionType const volatile * get_pointer<class ::clang::FunctionType const volatile >(class ::clang::FunctionType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_808dfaeb3c825011b508a4347f0e64a5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_feeecb51a6d95f28a4236d5473e7d580)() const = &::clang::FunctionType::getReturnType;
    bool  (::clang::FunctionType::*method_pointer_f8650e1204f759eabcba2b0cf84b414f)() const = &::clang::FunctionType::getHasRegParm;
    unsigned int  (::clang::FunctionType::*method_pointer_927a9d6b0fd454edb4d82b5afe21af77)() const = &::clang::FunctionType::getRegParmType;
    bool  (::clang::FunctionType::*method_pointer_a977c2e5340c5b70b5bf1f99fded1ac6)() const = &::clang::FunctionType::getNoReturnAttr;
    bool  (::clang::FunctionType::*method_pointer_110584cc4df05ee482d7e3486e4e1d03)() const = &::clang::FunctionType::isConst;
    bool  (::clang::FunctionType::*method_pointer_45026dbd52fd5b19ace7dbe6d779f203)() const = &::clang::FunctionType::isVolatile;
    bool  (::clang::FunctionType::*method_pointer_193af7ab1ee953b09db6e9251c7e701d)() const = &::clang::FunctionType::isRestrict;
    class ::clang::QualType  (::clang::FunctionType::*method_pointer_744edf570e335075b3f1a5489c7580bd)(class ::clang::ASTContext &) const = &::clang::FunctionType::getCallResultType;
    bool  (*method_pointer_4233a67989755f32aa6b5c0a5db22548)(class ::clang::Type const *) = ::clang::FunctionType::classof;
    boost::python::class_< class ::clang::FunctionType, autowig::Held< class ::clang::FunctionType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_808dfaeb3c825011b508a4347f0e64a5("FunctionType", "", boost::python::no_init);
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_return_type", method_pointer_feeecb51a6d95f28a4236d5473e7d580, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_has_reg_parm", method_pointer_f8650e1204f759eabcba2b0cf84b414f, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_reg_parm_type", method_pointer_927a9d6b0fd454edb4d82b5afe21af77, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_no_return_attr", method_pointer_a977c2e5340c5b70b5bf1f99fded1ac6, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_const", method_pointer_110584cc4df05ee482d7e3486e4e1d03, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_volatile", method_pointer_45026dbd52fd5b19ace7dbe6d779f203, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("is_restrict", method_pointer_193af7ab1ee953b09db6e9251c7e701d, "");
    class_808dfaeb3c825011b508a4347f0e64a5.def("get_call_result_type", method_pointer_744edf570e335075b3f1a5489c7580bd, "Determine the type of an expression that calls a function of this type.\n\n:Parameter:\n    `Context` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_808dfaeb3c825011b508a4347f0e64a5.def("classof", method_pointer_4233a67989755f32aa6b5c0a5db22548, "");
    class_808dfaeb3c825011b508a4347f0e64a5.staticmethod("classof");

    if(autowig::Held< class ::clang::FunctionType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::FunctionType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}