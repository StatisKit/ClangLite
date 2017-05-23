#include "_clanglite.h"



namespace autowig
{
    class Wrap_6bc87a1668d653eba3c26946758eb6dc : public ::llvm::detail::AlignmentCalcImpl< ::clang::RedeclarableTemplateDecl, true >, public boost::python::wrapper< struct ::llvm::detail::AlignmentCalcImpl< class ::clang::RedeclarableTemplateDecl, true > >
    {
        public:
            

        protected:
            
            virtual struct ::clang::RedeclarableTemplateDecl::CommonBase * newCommon(class ::clang::ASTContext & param_0) const
            { return this->get_override("newCommon")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_6bc87a1668d653eba3c26946758eb6dc const volatile * get_pointer<autowig::Wrap_6bc87a1668d653eba3c26946758eb6dc const volatile >(autowig::Wrap_6bc87a1668d653eba3c26946758eb6dc const volatile *c) { return c; }
    template <> struct ::llvm::detail::AlignmentCalcImpl< class ::clang::RedeclarableTemplateDecl, true > const volatile * get_pointer<struct ::llvm::detail::AlignmentCalcImpl< class ::clang::RedeclarableTemplateDecl, true > const volatile >(struct ::llvm::detail::AlignmentCalcImpl< class ::clang::RedeclarableTemplateDecl, true > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6bc87a1668d653eba3c26946758eb6dc()
{

    std::string name_d1608489da065e6eadeb67121a123bdd = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".llvm");
    boost::python::object module_d1608489da065e6eadeb67121a123bdd(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d1608489da065e6eadeb67121a123bdd.c_str()))));
    boost::python::scope().attr("llvm") = module_d1608489da065e6eadeb67121a123bdd;
    boost::python::scope scope_d1608489da065e6eadeb67121a123bdd = module_d1608489da065e6eadeb67121a123bdd;
    std::string name_753b68beb21258579b1c1aef846c7328 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".detail");
    boost::python::object module_753b68beb21258579b1c1aef846c7328(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_753b68beb21258579b1c1aef846c7328.c_str()))));
    boost::python::scope().attr("detail") = module_753b68beb21258579b1c1aef846c7328;
    boost::python::scope scope_753b68beb21258579b1c1aef846c7328 = module_753b68beb21258579b1c1aef846c7328;
    boost::python::class_< autowig::Wrap_6bc87a1668d653eba3c26946758eb6dc, autowig::Held< autowig::Wrap_6bc87a1668d653eba3c26946758eb6dc >::Type, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_6bc87a1668d653eba3c26946758eb6dc("_AlignmentCalcImpl_6bc87a1668d653eba3c26946758eb6dc", "", boost::python::no_init);

    if(autowig::Held< struct ::llvm::detail::AlignmentCalcImpl< class ::clang::RedeclarableTemplateDecl, true > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_6bc87a1668d653eba3c26946758eb6dc >::Type, autowig::Held< struct ::llvm::detail::AlignmentCalcImpl< class ::clang::RedeclarableTemplateDecl, true > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::llvm::detail::AlignmentCalcImpl< class ::clang::RedeclarableTemplateDecl, true > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::llvm::detail::AlignmentCalcImpl< class ::clang::RedeclarableTemplateDecl, true > >::Type, autowig::Held< class ::clang::RedeclarableTemplateDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::llvm::detail::AlignmentCalcImpl< class ::clang::RedeclarableTemplateDecl, true > >::Type, boost::python::objects::make_ptr_instance< struct ::llvm::detail::AlignmentCalcImpl< class ::clang::RedeclarableTemplateDecl, true >, boost::python::objects::pointer_holder< autowig::Held< struct ::llvm::detail::AlignmentCalcImpl< class ::clang::RedeclarableTemplateDecl, true > >::Type, struct ::llvm::detail::AlignmentCalcImpl< class ::clang::RedeclarableTemplateDecl, true > > > >();
    }

}