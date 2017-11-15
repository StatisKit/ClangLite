#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::llvm::StringRef const volatile * get_pointer<class ::llvm::StringRef const volatile >(class ::llvm::StringRef const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_349b01a7525f5245a8ca7e0497dd56cd()
{

    std::string name_d1608489da065e6eadeb67121a123bdd = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".llvm");
    boost::python::object module_d1608489da065e6eadeb67121a123bdd(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d1608489da065e6eadeb67121a123bdd.c_str()))));
    boost::python::scope().attr("llvm") = module_d1608489da065e6eadeb67121a123bdd;
    boost::python::scope scope_d1608489da065e6eadeb67121a123bdd = module_d1608489da065e6eadeb67121a123bdd;
    bool  (::llvm::StringRef::*method_pointer_462e9c612a55508da41c9d2c5928ca05)() const = &::llvm::StringRef::empty;
    ::size_t  (::llvm::StringRef::*method_pointer_31d0cea305bd532489ff20d1c89a4d28)() const = &::llvm::StringRef::size;
    char  (::llvm::StringRef::*method_pointer_3b8b2c51f6f15b0ab1bd520e2bc32937)() const = &::llvm::StringRef::front;
    char  (::llvm::StringRef::*method_pointer_7e0f2ab81b0653659fd865201d348bf3)() const = &::llvm::StringRef::back;
    bool  (::llvm::StringRef::*method_pointer_b4d1b6e95ac95516a0f4f899ad71b611)(class ::llvm::StringRef ) const = &::llvm::StringRef::equals;
    bool  (::llvm::StringRef::*method_pointer_d6411e679c895c8e96a8689b56cac49c)(class ::llvm::StringRef ) const = &::llvm::StringRef::equals_lower;
    int  (::llvm::StringRef::*method_pointer_897e28ba678552959559ee7d1572cde3)(class ::llvm::StringRef ) const = &::llvm::StringRef::compare;
    int  (::llvm::StringRef::*method_pointer_e97e6618e9975f0baca5472f054c9dc8)(class ::llvm::StringRef ) const = &::llvm::StringRef::compare_lower;
    int  (::llvm::StringRef::*method_pointer_bee248cb02b254fcad34e9b7826637ab)(class ::llvm::StringRef ) const = &::llvm::StringRef::compare_numeric;
    unsigned int  (::llvm::StringRef::*method_pointer_bf3ff93ac09f5c4488dfa6188b1e7e1a)(class ::llvm::StringRef , bool , unsigned int ) const = &::llvm::StringRef::edit_distance;
    char  (::llvm::StringRef::*method_pointer_e0b03543400152f284c0a073cc8b7f9a)(::size_t ) const = &::llvm::StringRef::operator[];
    bool  (::llvm::StringRef::*method_pointer_87038407f4535c2095160ef1e5f5d24f)(class ::llvm::StringRef ) const = &::llvm::StringRef::startswith;
    bool  (::llvm::StringRef::*method_pointer_dd2d5c4d679658fea2afcdbd4b1a4562)(class ::llvm::StringRef ) const = &::llvm::StringRef::startswith_lower;
    bool  (::llvm::StringRef::*method_pointer_cb90649f841351e182088b86a776bde2)(class ::llvm::StringRef ) const = &::llvm::StringRef::endswith;
    bool  (::llvm::StringRef::*method_pointer_efa98de0b9a8568583a40aaab5986ec2)(class ::llvm::StringRef ) const = &::llvm::StringRef::endswith_lower;
    ::size_t  (::llvm::StringRef::*method_pointer_75814fd53e8853e2aed66642b4cbfd57)(char , ::size_t ) const = &::llvm::StringRef::find;
    ::size_t  (::llvm::StringRef::*method_pointer_b1ae1226685f57e1b98c88cd2371a44a)(char , ::size_t ) const = &::llvm::StringRef::find_lower;
    ::size_t  (::llvm::StringRef::*method_pointer_d7338f37b1bb53e493b111b044d6c1cc)(class ::llvm::StringRef , ::size_t ) const = &::llvm::StringRef::find;
    ::size_t  (::llvm::StringRef::*method_pointer_f5a642d397a15ff286f92af46b31ebe6)(class ::llvm::StringRef , ::size_t ) const = &::llvm::StringRef::find_lower;
    ::size_t  (::llvm::StringRef::*method_pointer_71dba39b16fd53bdb31caf16deaa2237)(char , ::size_t ) const = &::llvm::StringRef::rfind;
    ::size_t  (::llvm::StringRef::*method_pointer_836e4090d43e509ebac1d3613d177cf4)(char , ::size_t ) const = &::llvm::StringRef::rfind_lower;
    ::size_t  (::llvm::StringRef::*method_pointer_a9a48c6cdbac5caaa2d01d09b19b707b)(class ::llvm::StringRef ) const = &::llvm::StringRef::rfind;
    ::size_t  (::llvm::StringRef::*method_pointer_2d2da3e698a055d5ac945801fc77bcbc)(class ::llvm::StringRef ) const = &::llvm::StringRef::rfind_lower;
    ::size_t  (::llvm::StringRef::*method_pointer_fbc703efb05352bda778918bd845f94f)(char , ::size_t ) const = &::llvm::StringRef::find_first_of;
    ::size_t  (::llvm::StringRef::*method_pointer_e9754cc24d0f52aab389ed3845a1c1b2)(class ::llvm::StringRef , ::size_t ) const = &::llvm::StringRef::find_first_of;
    ::size_t  (::llvm::StringRef::*method_pointer_e84b036ffca95b019aa5293aaa77db40)(char , ::size_t ) const = &::llvm::StringRef::find_first_not_of;
    ::size_t  (::llvm::StringRef::*method_pointer_0a7a803805cd559f8367dd7a7283a5b4)(class ::llvm::StringRef , ::size_t ) const = &::llvm::StringRef::find_first_not_of;
    ::size_t  (::llvm::StringRef::*method_pointer_6f2b9de124e354d3bd082e9a0d4ff9c7)(char , ::size_t ) const = &::llvm::StringRef::find_last_of;
    ::size_t  (::llvm::StringRef::*method_pointer_f590b3921a685088800377be04d4b119)(class ::llvm::StringRef , ::size_t ) const = &::llvm::StringRef::find_last_of;
    ::size_t  (::llvm::StringRef::*method_pointer_943d3f36034f56c1acdd8dba5bfd38b8)(char , ::size_t ) const = &::llvm::StringRef::find_last_not_of;
    ::size_t  (::llvm::StringRef::*method_pointer_e13ff19b51235c7893a053828e4c1db8)(class ::llvm::StringRef , ::size_t ) const = &::llvm::StringRef::find_last_not_of;
    bool  (::llvm::StringRef::*method_pointer_ef23388d5cab5d26a66333f331adb646)(class ::llvm::StringRef ) const = &::llvm::StringRef::contains;
    bool  (::llvm::StringRef::*method_pointer_28bcf573145e5a309d553bdc84a33917)(char ) const = &::llvm::StringRef::contains;
    bool  (::llvm::StringRef::*method_pointer_6d4646efd53653c4bef16c7677d37a5d)(class ::llvm::StringRef ) const = &::llvm::StringRef::contains_lower;
    bool  (::llvm::StringRef::*method_pointer_8c05ea600e30573aa8089ec48d0a1195)(char ) const = &::llvm::StringRef::contains_lower;
    ::size_t  (::llvm::StringRef::*method_pointer_ad97680f7f045db18ffce0834427ff17)(char ) const = &::llvm::StringRef::count;
    ::size_t  (::llvm::StringRef::*method_pointer_78a25eb914fb54ba8edc35408ffd7018)(class ::llvm::StringRef ) const = &::llvm::StringRef::count;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_0c3e428a0ea453e8abc635d76e679ecf)(::size_t , ::size_t ) const = &::llvm::StringRef::substr;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_e410455645b054cf951793a70e3121b2)(::size_t ) const = &::llvm::StringRef::take_front;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_54c791ff3ec55ce8aefb01a0d2d42717)(::size_t ) const = &::llvm::StringRef::take_back;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_3ddae719a77d5e61bef80c728eda95f4)(::size_t ) const = &::llvm::StringRef::drop_front;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_9b0a820d89f85a97b31a4a6402a146f4)(::size_t ) const = &::llvm::StringRef::drop_back;
    bool  (::llvm::StringRef::*method_pointer_8adbdd272c965c60b87c62223dda58a0)(class ::llvm::StringRef ) = &::llvm::StringRef::consume_front;
    bool  (::llvm::StringRef::*method_pointer_2b8018220283537dbfab14d0669dd174)(class ::llvm::StringRef ) = &::llvm::StringRef::consume_back;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_3c51b19964085487a3e38afa8970e09d)(::size_t , ::size_t ) const = &::llvm::StringRef::slice;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_697d49ec3d7c5eb586ff025dccce8320)(char ) const = &::llvm::StringRef::ltrim;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_3488e5acc40557b2b70396aaa626dd5c)(class ::llvm::StringRef ) const = &::llvm::StringRef::ltrim;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_20c7c383aed25ed0a135ff50cf814bf2)(char ) const = &::llvm::StringRef::rtrim;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_d097bc3001135a62af43b71a38471b37)(class ::llvm::StringRef ) const = &::llvm::StringRef::rtrim;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_f6375b8b319c5e3fa2e6392f5360a7d1)(char ) const = &::llvm::StringRef::trim;
    class ::llvm::StringRef  (::llvm::StringRef::*method_pointer_b57fed64c88b59e8a9057e46481cdf69)(class ::llvm::StringRef ) const = &::llvm::StringRef::trim;
    bool  (::llvm::StringRef::*method_pointer_c60bcf59b4e55b4db8aeb41b11fb6258)(unsigned int , unsigned int &) const = &::llvm::StringRef::getAsInteger;
    struct function_group
    {
        static class ::boost::python::str  function_c0557a2c1ef45ce68e69cdb8c80c8383(class ::llvm::StringRef * parameter_0)
        { return ::clanglite::str(parameter_0); }
    };
    boost::python::class_< class ::llvm::StringRef, autowig::Held< class ::llvm::StringRef >::Type > class_349b01a7525f5245a8ca7e0497dd56cd("StringRef", "", boost::python::no_init);
    class_349b01a7525f5245a8ca7e0497dd56cd.def(boost::python::init<  >(""));
    class_349b01a7525f5245a8ca7e0497dd56cd.def(boost::python::init< class ::llvm::StringRef const & >(""));
    class_349b01a7525f5245a8ca7e0497dd56cd.def("empty", method_pointer_462e9c612a55508da41c9d2c5928ca05, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__len__", method_pointer_31d0cea305bd532489ff20d1c89a4d28, ":Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("front", method_pointer_3b8b2c51f6f15b0ab1bd520e2bc32937, ":Return Type:\n    :cpp:any:`char`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("back", method_pointer_7e0f2ab81b0653659fd865201d348bf3, ":Return Type:\n    :cpp:any:`char`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("equals", method_pointer_b4d1b6e95ac95516a0f4f899ad71b611, ":Parameter:\n    `RHS` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("equals_lower", method_pointer_d6411e679c895c8e96a8689b56cac49c, ":Parameter:\n    `RHS` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("compare", method_pointer_897e28ba678552959559ee7d1572cde3, ":Parameter:\n    `RHS` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :cpp:any:`int`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("compare_lower", method_pointer_e97e6618e9975f0baca5472f054c9dc8, ":Parameter:\n    `RHS` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :cpp:any:`int`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("compare_numeric", method_pointer_bee248cb02b254fcad34e9b7826637ab, ":Parameter:\n    `RHS` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :cpp:any:`int`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("edit_distance", method_pointer_bf3ff93ac09f5c4488dfa6188b1e7e1a, "Determine the edit distance between this string and another string.\n\n:Parameters:\n  - `Other` (:py:class:`clanglite.llvm.StringRef`) - the string to compare this string against.\n  - `AllowReplacements` (:cpp:any:`bool`) - whether to allow character replacements (change one character into\n                                            another) as a single operation, rather than as two operations (an\n                                            insertion and a removal).\n  - `MaxEditDistance` (:cpp:any:`unsigned` int) - If non-zero, the maximum edit distance that this routine is allowed to\n                                                  compute. If the edit distance will exceed that maximum, returns\n                                                  :raw-latex:`\\c M`axEditDistance+1.\n\n:Returns:\n    the minimum number of character insertions, removals, or (if\n    :raw-latex:`\\p `AllowReplacements is :raw-latex:`\\c t`rue) replacements\n    needed to transform one of the given strings into the other. If zero,\n    the strings are identical.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__getitem__", method_pointer_e0b03543400152f284c0a073cc8b7f9a, ":Parameter:\n    `Index` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Return Type:\n    :cpp:any:`char`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("startswith", method_pointer_87038407f4535c2095160ef1e5f5d24f, ":Parameter:\n    `Prefix` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("startswith_lower", method_pointer_dd2d5c4d679658fea2afcdbd4b1a4562, ":Parameter:\n    `Prefix` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("endswith", method_pointer_cb90649f841351e182088b86a776bde2, ":Parameter:\n    `Suffix` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("endswith_lower", method_pointer_efa98de0b9a8568583a40aaab5986ec2, ":Parameter:\n    `Suffix` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find", method_pointer_75814fd53e8853e2aed66642b4cbfd57, ":Parameters:\n  - `C` (:cpp:any:`char`) - Undocumented\n  - `From` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Returns:\n    The index of the first occurrence of :raw-latex:`\\p `C, or npos if not\n    found.\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_lower", method_pointer_b1ae1226685f57e1b98c88cd2371a44a, ":Parameters:\n  - `C` (:cpp:any:`char`) - Undocumented\n  - `From` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Returns:\n    The index of the first occurrence of :raw-latex:`\\p `C, or npos if not\n    found.\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find", method_pointer_d7338f37b1bb53e493b111b044d6c1cc, ":Parameters:\n  - `Str` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n  - `From` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Returns:\n    The index of the first occurrence of :raw-latex:`\\p `Str, or npos if not\n    found.\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_lower", method_pointer_f5a642d397a15ff286f92af46b31ebe6, ":Parameters:\n  - `Str` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n  - `From` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Returns:\n    The index of the first occurrence of :raw-latex:`\\p `Str, or npos if not\n    found.\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("rfind", method_pointer_71dba39b16fd53bdb31caf16deaa2237, ":Parameters:\n  - `C` (:cpp:any:`char`) - Undocumented\n  - `From` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Returns:\n    The index of the last occurrence of :raw-latex:`\\p `C, or npos if not\n    found.\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("rfind_lower", method_pointer_836e4090d43e509ebac1d3613d177cf4, ":Parameters:\n  - `C` (:cpp:any:`char`) - Undocumented\n  - `From` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Returns:\n    The index of the last occurrence of :raw-latex:`\\p `C, or npos if not\n    found.\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("rfind", method_pointer_a9a48c6cdbac5caaa2d01d09b19b707b, ":Parameter:\n    `Str` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Returns:\n    The index of the last occurrence of :raw-latex:`\\p `Str, or npos if not\n    found.\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("rfind_lower", method_pointer_2d2da3e698a055d5ac945801fc77bcbc, ":Parameter:\n    `Str` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Returns:\n    The index of the last occurrence of :raw-latex:`\\p `Str, or npos if not\n    found.\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_first_of", method_pointer_fbc703efb05352bda778918bd845f94f, ":Parameters:\n  - `C` (:cpp:any:`char`) - Undocumented\n  - `From` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_first_of", method_pointer_e9754cc24d0f52aab389ed3845a1c1b2, ":Parameters:\n  - `Chars` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n  - `From` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_first_not_of", method_pointer_e84b036ffca95b019aa5293aaa77db40, ":Parameters:\n  - `C` (:cpp:any:`char`) - Undocumented\n  - `From` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_first_not_of", method_pointer_0a7a803805cd559f8367dd7a7283a5b4, ":Parameters:\n  - `Chars` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n  - `From` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_last_of", method_pointer_6f2b9de124e354d3bd082e9a0d4ff9c7, ":Parameters:\n  - `C` (:cpp:any:`char`) - Undocumented\n  - `From` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_last_of", method_pointer_f590b3921a685088800377be04d4b119, ":Parameters:\n  - `Chars` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n  - `From` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_last_not_of", method_pointer_943d3f36034f56c1acdd8dba5bfd38b8, ":Parameters:\n  - `C` (:cpp:any:`char`) - Undocumented\n  - `From` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("find_last_not_of", method_pointer_e13ff19b51235c7893a053828e4c1db8, ":Parameters:\n  - `Chars` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n  - `From` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("contains", method_pointer_ef23388d5cab5d26a66333f331adb646, ":Parameter:\n    `Other` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("contains", method_pointer_28bcf573145e5a309d553bdc84a33917, ":Parameter:\n    `C` (:cpp:any:`char`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("contains_lower", method_pointer_6d4646efd53653c4bef16c7677d37a5d, ":Parameter:\n    `Other` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("contains_lower", method_pointer_8c05ea600e30573aa8089ec48d0a1195, ":Parameter:\n    `C` (:cpp:any:`char`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("count", method_pointer_ad97680f7f045db18ffce0834427ff17, ":Parameter:\n    `C` (:cpp:any:`char`) - Undocumented\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("count", method_pointer_78a25eb914fb54ba8edc35408ffd7018, ":Parameter:\n    `Str` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("substr", method_pointer_0c3e428a0ea453e8abc635d76e679ecf, ":Parameters:\n  - `Start` (:cpp:any:`unsigned` long int) - The index of the starting character in the substring; if the index is\n                                             npos or greater than the length of the string then the empty substring\n                                             will be returned.\n  - `N` (:cpp:any:`unsigned` long int) - The number of characters to included in the substring. If N exceeds the\n                                         number of characters remaining in the string, the string suffix\n                                         (starting with :raw-latex:`\\p `Start) will be returned.\n\n:Return Type:\n    :py:class:`clanglite.llvm.StringRef`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("take_front", method_pointer_e410455645b054cf951793a70e3121b2, ":Parameter:\n    `N` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.llvm.StringRef`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("take_back", method_pointer_54c791ff3ec55ce8aefb01a0d2d42717, ":Parameter:\n    `N` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.llvm.StringRef`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("drop_front", method_pointer_3ddae719a77d5e61bef80c728eda95f4, ":Parameter:\n    `N` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.llvm.StringRef`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("drop_back", method_pointer_9b0a820d89f85a97b31a4a6402a146f4, ":Parameter:\n    `N` (:cpp:any:`unsigned` long int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.llvm.StringRef`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("consume_front", method_pointer_8adbdd272c965c60b87c62223dda58a0, ":Parameter:\n    `Prefix` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("consume_back", method_pointer_2b8018220283537dbfab14d0669dd174, ":Parameter:\n    `Suffix` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("slice", method_pointer_3c51b19964085487a3e38afa8970e09d, ":Parameters:\n  - `Start` (:cpp:any:`unsigned` long int) - The index of the starting character in the substring; if the index is\n                                             npos or greater than the length of the string then the empty substring\n                                             will be returned.\n  - `End` (:cpp:any:`unsigned` long int) - The index following the last character to include in the substring. If\n                                           this is npos or exceeds the number of characters remaining in the\n                                           string, the string suffix (starting with :raw-latex:`\\p `Start) will be\n                                           returned. If this is less than :raw-latex:`\\p `Start, an empty string\n                                           will be returned.\n\n:Return Type:\n    :py:class:`clanglite.llvm.StringRef`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("ltrim", method_pointer_697d49ec3d7c5eb586ff025dccce8320, ":Parameter:\n    `Char` (:cpp:any:`char`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.llvm.StringRef`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("ltrim", method_pointer_3488e5acc40557b2b70396aaa626dd5c, ":Parameter:\n    `Chars` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.llvm.StringRef`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("rtrim", method_pointer_20c7c383aed25ed0a135ff50cf814bf2, ":Parameter:\n    `Char` (:cpp:any:`char`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.llvm.StringRef`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("rtrim", method_pointer_d097bc3001135a62af43b71a38471b37, ":Parameter:\n    `Chars` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.llvm.StringRef`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("trim", method_pointer_f6375b8b319c5e3fa2e6392f5360a7d1, ":Parameter:\n    `Char` (:cpp:any:`char`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.llvm.StringRef`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("trim", method_pointer_b57fed64c88b59e8a9057e46481cdf69, ":Parameter:\n    `Chars` (:py:class:`clanglite.llvm.StringRef`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.llvm.StringRef`\n\n");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("get_as_integer", method_pointer_c60bcf59b4e55b4db8aeb41b11fb6258, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("str", function_group::function_c0557a2c1ef45ce68e69cdb8c80c8383, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def_readonly("npos", ::llvm::StringRef::npos, "");

}