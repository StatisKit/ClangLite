#include <boost/python.hpp>
#include <clang/AST/Decl.h>

void class_llvm_string_ref()
{
        std::string llvm_d1608489da065e6eadeb67121a123bdd_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".llvm");
        boost::python::object llvm_d1608489da065e6eadeb67121a123bdd_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(llvm_d1608489da065e6eadeb67121a123bdd_name.c_str()))));
        boost::python::scope().attr("llvm") = llvm_d1608489da065e6eadeb67121a123bdd_module;
        boost::python::scope llvm_d1608489da065e6eadeb67121a123bdd_scope = llvm_d1608489da065e6eadeb67121a123bdd_module;
        boost::python::class_< class ::llvm::StringRef, class ::llvm::StringRef * >("StringRef", boost::python::no_init);
}