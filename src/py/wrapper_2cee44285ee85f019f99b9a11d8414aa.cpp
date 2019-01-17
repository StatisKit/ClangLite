#include "_clanglite.h"

namespace autowig
{
    class Wrap_2cee44285ee85f019f99b9a11d8414aa : public ::clang::RedeclarableTemplateDecl
    {
        public:
            using ::clang::RedeclarableTemplateDecl::RedeclarableTemplateDecl;

        public:
            
            virtual class ::clang::RedeclarableTemplateDecl * getCanonicalDecl() { PYBIND11_OVERLOAD(class ::clang::RedeclarableTemplateDecl *, ::clang::RedeclarableTemplateDecl, getCanonicalDecl, ); };
            virtual class ::clang::SourceRange  getSourceRange() const { PYBIND11_OVERLOAD(class ::clang::SourceRange , ::clang::RedeclarableTemplateDecl, getSourceRange, ); };
            virtual void  getNameForDiagnostic(class ::llvm::raw_ostream & param_0, struct ::clang::PrintingPolicy const & param_1, bool  param_2) const { PYBIND11_OVERLOAD(void , ::clang::RedeclarableTemplateDecl, getNameForDiagnostic, param_0, param_1, param_2); };
            virtual void  printName(class ::llvm::raw_ostream & param_0) const { PYBIND11_OVERLOAD(void , ::clang::RedeclarableTemplateDecl, printName, param_0); };
            virtual bool  hasBody() const { PYBIND11_OVERLOAD(bool , ::clang::RedeclarableTemplateDecl, hasBody, ); };
            virtual class ::clang::Stmt * getBody() const { PYBIND11_OVERLOAD(class ::clang::Stmt *, ::clang::RedeclarableTemplateDecl, getBody, ); };
            // virtual class ::clang::Decl * getCanonicalDecl() { PYBIND11_OVERLOAD(class ::clang::Decl *, ::clang::RedeclarableTemplateDecl, getCanonicalDecl, ); };
            virtual bool  isOutOfLine() const { PYBIND11_OVERLOAD(bool , ::clang::RedeclarableTemplateDecl, isOutOfLine, ); };

        // protected:
            
        //     virtual struct ::clang::RedeclarableTemplateDecl::CommonBase * newCommon(class ::clang::ASTContext & param_0) const { PYBIND11_OVERLOAD_PURE(struct ::clang::RedeclarableTemplateDecl::CommonBase *, ::clang::RedeclarableTemplateDecl, newCommon, param_0); };
        //     virtual class ::clang::Decl * getMostRecentDeclImpl() { PYBIND11_OVERLOAD(class ::clang::Decl *, ::clang::RedeclarableTemplateDecl, getMostRecentDeclImpl, ); };
        //     virtual class ::clang::Decl * getPreviousDeclImpl() { PYBIND11_OVERLOAD(class ::clang::Decl *, ::clang::RedeclarableTemplateDecl, getPreviousDeclImpl, ); };
        //     virtual class ::clang::Decl * getNextRedeclarationImpl() { PYBIND11_OVERLOAD(class ::clang::Decl *, ::clang::RedeclarableTemplateDecl, getNextRedeclarationImpl, ); };

        // private:
            
        //     virtual class ::clang::RedeclarableTemplateDecl * getMostRecentDeclImpl() { PYBIND11_OVERLOAD(class ::clang::RedeclarableTemplateDecl *, ::clang::RedeclarableTemplateDecl, getMostRecentDeclImpl, ); };
        //     virtual class ::clang::RedeclarableTemplateDecl * getPreviousDeclImpl() { PYBIND11_OVERLOAD(class ::clang::RedeclarableTemplateDecl *, ::clang::RedeclarableTemplateDecl, getPreviousDeclImpl, ); };
        //     virtual class ::clang::RedeclarableTemplateDecl * getNextRedeclarationImpl() { PYBIND11_OVERLOAD(class ::clang::RedeclarableTemplateDecl *, ::clang::RedeclarableTemplateDecl, getNextRedeclarationImpl, ); };

    };
}

class ::clang::RedeclarableTemplateDecl * (::clang::RedeclarableTemplateDecl::*method_pointer_80e2758ee46d54edaf143f0c564e2d26)()= &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
class ::clang::RedeclarableTemplateDecl const * (::clang::RedeclarableTemplateDecl::*method_pointer_ebdc5c7340dc5fb68213fcd24ceb5322)()const= &::clang::RedeclarableTemplateDecl::getCanonicalDecl;
bool  (::clang::RedeclarableTemplateDecl::*method_pointer_8f558e12bd1c54a08119423b9af7226a)()const= &::clang::RedeclarableTemplateDecl::isMemberSpecialization;
void  (::clang::RedeclarableTemplateDecl::*method_pointer_d7124c92758e53a3b184af16e6118664)()= &::clang::RedeclarableTemplateDecl::setMemberSpecialization;
class ::clang::RedeclarableTemplateDecl * (::clang::RedeclarableTemplateDecl::*method_pointer_c5db5557e5da5873ab1fa1c6136b0e56)()const= &::clang::RedeclarableTemplateDecl::getInstantiatedFromMemberTemplate;
void  (::clang::RedeclarableTemplateDecl::*method_pointer_f052c6d51f1159f4b48a8a6d31384a85)(class ::clang::RedeclarableTemplateDecl *)= &::clang::RedeclarableTemplateDecl::setInstantiatedFromMemberTemplate;
bool  (*method_pointer_5d80981664a85a318b967946bc66ac2f)(class ::clang::Decl const *)= ::clang::RedeclarableTemplateDecl::classof;
bool  (*method_pointer_0f68e86a64c65ab1a06da308f99b0f4f)(enum ::clang::Decl::Kind )= ::clang::RedeclarableTemplateDecl::classofKind;


void wrapper_2cee44285ee85f019f99b9a11d8414aa(pybind11::module& module)
{

    pybind11::class_<class ::clang::RedeclarableTemplateDecl, autowig::Wrap_2cee44285ee85f019f99b9a11d8414aa, autowig::HolderType< class ::clang::RedeclarableTemplateDecl >::Type, class ::clang::TemplateDecl > class_2cee44285ee85f019f99b9a11d8414aa(module, "RedeclarableTemplateDecl", "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_80e2758ee46d54edaf143f0c564e2d26, pybind11::return_value_policy::reference_internal, "Retrieves the canonical declaration of this template.\n\n:Return Type:\n    :cpp:class:`::clang::RedeclarableTemplateDecl`\n\n");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_canonical_decl", method_pointer_ebdc5c7340dc5fb68213fcd24ceb5322, pybind11::return_value_policy::reference_internal, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def("is_member_specialization", method_pointer_8f558e12bd1c54a08119423b9af7226a, "Determines whether this template was a specialization of a member\ntemplate.\n\nIn the following example, the function template :raw-latex:`\\c X`::f and\nthe member template :raw-latex:`\\c X`::Inner are member specializations.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_member_specialization", method_pointer_d7124c92758e53a3b184af16e6118664, "Note that this member template is a specialization.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_2cee44285ee85f019f99b9a11d8414aa.def("get_instantiated_from_member_template", method_pointer_c5db5557e5da5873ab1fa1c6136b0e56, pybind11::return_value_policy::reference_internal, "Retrieve the member template from which this template was instantiated,\nor NULL if this template was not instantiated from a member template.\n\nA template is instantiated from a member template when the member\ntemplate itself is part of a class template (or member thereof). For\nexample, given\n\n:Return Type:\n    :cpp:class:`::clang::RedeclarableTemplateDecl`\n\n");
    class_2cee44285ee85f019f99b9a11d8414aa.def("set_instantiated_from_member_template", method_pointer_f052c6d51f1159f4b48a8a6d31384a85, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def_static("classof", method_pointer_5d80981664a85a318b967946bc66ac2f, "");
    class_2cee44285ee85f019f99b9a11d8414aa.def_static("classof_kind", method_pointer_0f68e86a64c65ab1a06da308f99b0f4f, "");

}