#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

void wrapper_6b9ee5de31ce580191600ec68763e95b()
{

    std::string name_455bdc46e2b35a918626aaf15ff5c590 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clanglite");
    boost::python::object module_455bdc46e2b35a918626aaf15ff5c590(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_455bdc46e2b35a918626aaf15ff5c590.c_str()))));
    boost::python::scope().attr("clanglite") = module_455bdc46e2b35a918626aaf15ff5c590;
    boost::python::scope scope_455bdc46e2b35a918626aaf15ff5c590 = module_455bdc46e2b35a918626aaf15ff5c590;
    class ::clang::ASTUnit  * (*function_pointer_6b9ee5de31ce580191600ec68763e95b)(class ::boost::python::api::object , class ::boost::python::api::object ) = ::clanglite::build_ast_from_code_with_args;
    boost::python::def("build_ast_from_code_with_args", function_pointer_6b9ee5de31ce580191600ec68763e95b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
}