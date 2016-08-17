#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_179220ac78145becbf9b283ff6879c57()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    unsigned int  (::clang::ObjCProtocolDecl::*method_pointer_548d30115e875db3baf2e212cfd48c87)() const = &::clang::ObjCProtocolDecl::protocol_size;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_868bdb8d0a6d5f22ae7afe2f4706d157)() const = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    class ::clang::ObjCProtocolDecl  * (*method_pointer_b03a0372adaa520b973a382fca579abf)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCProtocolDecl::CreateDeserialized;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_089e61c7b28a52058c450d003082aa5e)() = &::clang::ObjCProtocolDecl::getCanonicalDecl;
    bool  (*method_pointer_45176e18ba7357639029d646f8b6ffa5)(class ::clang::Decl  const *) = ::clang::ObjCProtocolDecl::classof;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCProtocolDecl::*method_pointer_37c75120ae2254409fd4d9bfd892b82d)() = &::clang::ObjCProtocolDecl::getDefinition;
    bool  (*method_pointer_a19487fda9775caca265ba3ca07ba12e)(enum ::clang::Decl::Kind ) = ::clang::ObjCProtocolDecl::classofKind;
    class ::clang::ObjCProtocolDecl  const * (::clang::ObjCProtocolDecl::*method_pointer_f5ce5579a3c554e58e26be9d41972e5e)() const = &::clang::ObjCProtocolDecl::getDefinition;
    void  (::clang::ObjCProtocolDecl::*method_pointer_07595f5e57f651ffb34eda776df46c71)() = &::clang::ObjCProtocolDecl::startDefinition;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_44c9c1d0f82453a3b44780140130710e)() const = &::clang::ObjCProtocolDecl::hasDefinition;
    bool  (::clang::ObjCProtocolDecl::*method_pointer_8548e86e77f85bd48911c06c05ab5381)() const = &::clang::ObjCProtocolDecl::isThisDeclarationADefinition;
    boost::python::class_< class ::clang::ObjCProtocolDecl, autowig::HeldType< class ::clang::ObjCProtocolDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_179220ac78145becbf9b283ff6879c57("ObjCProtocolDecl", "", boost::python::no_init);
    class_179220ac78145becbf9b283ff6879c57.def("protocol_size", method_pointer_548d30115e875db3baf2e212cfd48c87, "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_868bdb8d0a6d5f22ae7afe2f4706d157, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("create_deserialized", method_pointer_b03a0372adaa520b973a382fca579abf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("get_canonical_decl", method_pointer_089e61c7b28a52058c450d003082aa5e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("classof", method_pointer_45176e18ba7357639029d646f8b6ffa5, "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_37c75120ae2254409fd4d9bfd892b82d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("classof_kind", method_pointer_a19487fda9775caca265ba3ca07ba12e, "");
    class_179220ac78145becbf9b283ff6879c57.def("get_definition", method_pointer_f5ce5579a3c554e58e26be9d41972e5e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_179220ac78145becbf9b283ff6879c57.def("start_definition", method_pointer_07595f5e57f651ffb34eda776df46c71, "");
    class_179220ac78145becbf9b283ff6879c57.def("has_definition", method_pointer_44c9c1d0f82453a3b44780140130710e, "");
    class_179220ac78145becbf9b283ff6879c57.def("is_this_declaration_a_definition", method_pointer_8548e86e77f85bd48911c06c05ab5381, "");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof_kind");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("create_deserialized");
    class_179220ac78145becbf9b283ff6879c57.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCProtocolDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCProtocolDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}