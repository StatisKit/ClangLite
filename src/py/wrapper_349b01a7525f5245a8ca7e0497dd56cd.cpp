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
/* File authors: Pierre Fernique <pfernique@gmail.com> (13)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_349b01a7525f5245a8ca7e0497dd56cd()
{

    std::string name_d1608489da065e6eadeb67121a123bdd = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".llvm");
    boost::python::object module_d1608489da065e6eadeb67121a123bdd(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d1608489da065e6eadeb67121a123bdd.c_str()))));
    boost::python::scope().attr("llvm") = module_d1608489da065e6eadeb67121a123bdd;
    boost::python::scope scope_d1608489da065e6eadeb67121a123bdd = module_d1608489da065e6eadeb67121a123bdd;
    struct function_group
    {
        static bool  function_06bc913d463f5b278defb2e178b70d1a(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_9dab43d13bce5d7ca28943e50e3dd912(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>=(parameter_0, parameter_1); }
        static bool  function_239e0057ef325f9b8d01a5b193f01e61(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_836a09a9f243533d945f40e71f9cc178(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_256d09bf431459b7a56e6a3560bd7f3e(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator>(parameter_0, parameter_1); }
        static bool  function_e513d88de08e5259aa3ea9b4d2c817e6(class ::llvm::StringRef  parameter_0, class ::llvm::StringRef  parameter_1)
        { return operator<=(parameter_0, parameter_1); }
        static class ::boost::python::str  function_52ce97147e9b5a94b07d192b933671cb(class ::llvm::StringRef  * parameter_0)
        { return ::clanglite::str(parameter_0); }
    };
    boost::python::class_< class ::llvm::StringRef, autowig::HeldType< class ::llvm::StringRef > > class_349b01a7525f5245a8ca7e0497dd56cd("StringRef", "", boost::python::no_init);
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__eq__", function_group::function_06bc913d463f5b278defb2e178b70d1a, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__ge__", function_group::function_9dab43d13bce5d7ca28943e50e3dd912, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__lt__", function_group::function_239e0057ef325f9b8d01a5b193f01e61, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__neq__", function_group::function_836a09a9f243533d945f40e71f9cc178, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__gt__", function_group::function_256d09bf431459b7a56e6a3560bd7f3e, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("__le__", function_group::function_e513d88de08e5259aa3ea9b4d2c817e6, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def("str", function_group::function_52ce97147e9b5a94b07d192b933671cb, "");
    class_349b01a7525f5245a8ca7e0497dd56cd.def_readonly("npos", ::llvm::StringRef::npos, "");

}