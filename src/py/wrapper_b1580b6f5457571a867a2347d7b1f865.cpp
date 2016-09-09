/**********************************************************************************/
/*                                                                                */
/* PyClangLite: Python bindings for Clang                                         */
/*                                                                                */
/* Homepage: http://pyclanglite.readthedocs.io/                                   */
/*                                                                                */
/* Copyright (c) 2016 Pierre Fernique                                             */
/*                                                                                */
/* This software is distributed under the CeCILL-C license. You should have       */
/* received a copy of the legalcode along with this work. If not, see             */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/* File authors: Pierre Fernique <pfernique@gmail.com> (37)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_b1580b6f5457571a867a2347d7b1f865()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    unsigned int  (::clang::FileID::*method_pointer_27e8aaed94075443ad3db75a66d9c51c)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_3cdaaea9382458c4ba341b3134c4acaf)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_5b04a4debad15a479a0aeea572e0ba4d)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_17260dffc1bc5847971571954c6efe34)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_e0f1361eda2a5328883e4704a37ce2bd)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_a7121722f4ee5dddbce824705b01ead2)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_9eba1c996cdd5cab8a59160eacc4638e)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_957ff047164a5284a55d6f418c7910ac)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_df1954f7ac2e5dfb962313213ed41ed7)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_2fe5b55d1ac4523ea4a05ccf8d9d320f)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_27e8aaed94075443ad3db75a66d9c51c, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_3cdaaea9382458c4ba341b3134c4acaf, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_5b04a4debad15a479a0aeea572e0ba4d, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_17260dffc1bc5847971571954c6efe34, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_e0f1361eda2a5328883e4704a37ce2bd, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_a7121722f4ee5dddbce824705b01ead2, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_9eba1c996cdd5cab8a59160eacc4638e, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_957ff047164a5284a55d6f418c7910ac, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_df1954f7ac2e5dfb962313213ed41ed7, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_2fe5b55d1ac4523ea4a05ccf8d9d320f, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}