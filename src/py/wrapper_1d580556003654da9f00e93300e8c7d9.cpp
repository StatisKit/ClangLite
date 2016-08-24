#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_1d580556003654da9f00e93300e8c7d9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_e76dfab4699d5ce98b66ede49599feeb)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_d42dadfec80e51c4a45bf3d3ef99a3d6)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_6c26b444e12c563ca6870371a3dcc42f)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_7861756f26fc5251bd6a8f640297a8f1)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_b43870a28e575c7c9579107081e2345e)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_abc73c7d2b575e7aa39ee9bcb48c8849)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_e8ad23c936e15c6fba83e547f946c054)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_f34f3427ae345df6b6773f46fbe5d817)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_e76dfab4699d5ce98b66ede49599feeb, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_d42dadfec80e51c4a45bf3d3ef99a3d6, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_6c26b444e12c563ca6870371a3dcc42f, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_7861756f26fc5251bd6a8f640297a8f1, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_b43870a28e575c7c9579107081e2345e, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_abc73c7d2b575e7aa39ee9bcb48c8849, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_e8ad23c936e15c6fba83e547f946c054, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_f34f3427ae345df6b6773f46fbe5d817, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}