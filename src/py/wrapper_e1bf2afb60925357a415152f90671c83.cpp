#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::SubstTemplateTypeParmType const volatile * get_pointer<class ::clang::SubstTemplateTypeParmType const volatile >(class ::clang::SubstTemplateTypeParmType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e1bf2afb60925357a415152f90671c83()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateTypeParmType const * (::clang::SubstTemplateTypeParmType::*method_pointer_bdbc7d2d82f55c61b41a7799e0096a94)() const = &::clang::SubstTemplateTypeParmType::getReplacedParameter;
    class ::clang::QualType  (::clang::SubstTemplateTypeParmType::*method_pointer_6b652ccaf67155d594f91dbd22dbeae4)() const = &::clang::SubstTemplateTypeParmType::getReplacementType;
    bool  (::clang::SubstTemplateTypeParmType::*method_pointer_ceb6ae8c6fc4507ebdf1282c48457b4f)() const = &::clang::SubstTemplateTypeParmType::isSugared;
    class ::clang::QualType  (::clang::SubstTemplateTypeParmType::*method_pointer_65a5d58ce4c35411bdcdd4125582ef59)() const = &::clang::SubstTemplateTypeParmType::desugar;
    bool  (*method_pointer_6199bb15e058531bb780b59f98613138)(class ::clang::Type const *) = ::clang::SubstTemplateTypeParmType::classof;
    boost::python::class_< class ::clang::SubstTemplateTypeParmType, autowig::Held< class ::clang::SubstTemplateTypeParmType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_e1bf2afb60925357a415152f90671c83("SubstTemplateTypeParmType", "Represents the result of substituting a type for a template type\nparameter.\n\nWithin an instantiated template, all template type parameters have been\nreplaced with these. They are used solely to record that a type was\noriginally written as a template type parameter; therefore they are\nnever canonical.\n\n", boost::python::no_init);
    class_e1bf2afb60925357a415152f90671c83.def("get_replaced_parameter", method_pointer_bdbc7d2d82f55c61b41a7799e0096a94, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.TemplateTypeParmType`\n\n");
    class_e1bf2afb60925357a415152f90671c83.def("get_replacement_type", method_pointer_6b652ccaf67155d594f91dbd22dbeae4, ":Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_e1bf2afb60925357a415152f90671c83.def("is_sugared", method_pointer_ceb6ae8c6fc4507ebdf1282c48457b4f, "");
    class_e1bf2afb60925357a415152f90671c83.def("desugar", method_pointer_65a5d58ce4c35411bdcdd4125582ef59, "");
    class_e1bf2afb60925357a415152f90671c83.def("classof", method_pointer_6199bb15e058531bb780b59f98613138, "");
    class_e1bf2afb60925357a415152f90671c83.staticmethod("classof");

    if(autowig::Held< class ::clang::SubstTemplateTypeParmType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::SubstTemplateTypeParmType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}