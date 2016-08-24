#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_3980f13801db50f498b55d818463d500()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_892a3a55e43556d0864d6196d811811e)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_3fb79fd18827589a92ae59edc9cdb732)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_07728362ee1b58bdb9d4710bae8367ef)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_ffba0438253e5b6ba81bc42ed2376107)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_5f23480a52185d9eb655df4b5aeac491)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_b5140db9a6385342aacf33e189e8470f)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_312580368d215cd0993c8e15efd97b7f)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_15e7dfa1e3a75097ab305984074b6312)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_e2a41b804cf45279b71080626533e623)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_b78f020fd3bb50088424507a09e0c7ff)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_7d1f090609b25fb89667c3d82dc3541b)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_d8ec15179ce75b769cdd546a4fb5c334)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_d3cbf96ea7395ce9b318e8ccf762dac3)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_47ddc27ebd315a3d8ada43776314a9a2)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_0f0456b7cc1d56e2a7309ea1bf47e3f5)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_e129d764d8275cf39195d74721b43279)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_f2fe3778fdeb5e42bffc34e951a2de8f)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_04c71e3392a3566a8b8708c84e72f690)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_253343ad034e5256a028f60bcd96e5cb)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_ca2df1cc17075a259b44098c2126073a)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_02b0efca54ce58c1b5c5ec5e5a4cf3d9)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_4b7f4dec0aa2556f8612b83b43824d00)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_892a3a55e43556d0864d6196d811811e, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_3fb79fd18827589a92ae59edc9cdb732, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_07728362ee1b58bdb9d4710bae8367ef, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_ffba0438253e5b6ba81bc42ed2376107, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_5f23480a52185d9eb655df4b5aeac491, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_b5140db9a6385342aacf33e189e8470f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_312580368d215cd0993c8e15efd97b7f, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_15e7dfa1e3a75097ab305984074b6312, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_e2a41b804cf45279b71080626533e623, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_b78f020fd3bb50088424507a09e0c7ff, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_7d1f090609b25fb89667c3d82dc3541b, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_d8ec15179ce75b769cdd546a4fb5c334, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_d3cbf96ea7395ce9b318e8ccf762dac3, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_47ddc27ebd315a3d8ada43776314a9a2, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_0f0456b7cc1d56e2a7309ea1bf47e3f5, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_e129d764d8275cf39195d74721b43279, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_f2fe3778fdeb5e42bffc34e951a2de8f, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_04c71e3392a3566a8b8708c84e72f690, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_253343ad034e5256a028f60bcd96e5cb, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_ca2df1cc17075a259b44098c2126073a, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_02b0efca54ce58c1b5c5ec5e5a4cf3d9, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_4b7f4dec0aa2556f8612b83b43824d00, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}