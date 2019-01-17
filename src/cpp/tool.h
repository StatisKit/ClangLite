// Copyright [2017-2018] UMR MISTEA INRA, UMR LEPSE INRA,                //
//                       UMR AGAP CIRAD, EPI Virtual Plants Inria        //
// Copyright [2015-2016] UMR AGAP CIRAD, EPI Virtual Plants Inria        //
//                                                                       //
// This file is part of the AutoWIG project. More information can be     //
// found at                                                              //
//                                                                       //
//     http://autowig.rtfd.io                                            //
//                                                                       //
// The Apache Software Foundation (ASF) licenses this file to you under  //
// the Apache License, Version 2.0 (the "License"); you may not use this //
// file except in compliance with the License. You should have received  //
// a copy of the Apache License, Version 2.0 along with this file; see   //
// the file LICENSE. If not, you may obtain a copy of the License at     //
//                                                                       //
//     http://www.apache.org/licenses/LICENSE-2.0                        //
//                                                                       //
// Unless required by applicable law or agreed to in writing, software   //
// distributed under the License is distributed on an "AS IS" BASIS,     //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or       //
// mplied. See the License for the specific language governing           //
// permissions and limitations under the License.                        //

#ifndef CLANGLITE_TOOL_H
#define CLANGLITE_TOOL_H

#ifdef BOOST_PYTHON_GENERATOR
#include <boost/python.hpp>
#endif
#ifdef PYBIND11_GENERATOR
#include <pybind11/pybind11.h>
#endif
#include <iostream>
#include <clang/ARCMigrate/ARCMT.h>
#include <clang/ARCMigrate/ARCMTActions.h>
#include <clang/ARCMigrate/FileRemapper.h>
#include <clang/AST/APValue.h>
#include <clang/AST/AST.h>
#include <clang/AST/ASTConsumer.h>
#include <clang/AST/ASTContext.h>
#include <clang/AST/ASTDiagnostic.h>
#include <clang/AST/ASTFwd.h>
#include <clang/AST/ASTImporter.h>
#include <clang/AST/ASTLambda.h>
#include <clang/AST/ASTMutationListener.h>
#include <clang/AST/ASTTypeTraits.h>
#include <clang/AST/ASTUnresolvedSet.h>
#include <clang/AST/ASTVector.h>
#include <clang/AST/Attr.h>
#include <clang/AST/AttrIterator.h>
#include <clang/AST/BaseSubobject.h>
#include <clang/AST/CXXInheritance.h>
#include <clang/AST/CanonicalType.h>
#include <clang/AST/CharUnits.h>
#include <clang/AST/Comment.h>
#include <clang/AST/CommentBriefParser.h>
#include <clang/AST/CommentCommandTraits.h>
#include <clang/AST/CommentDiagnostic.h>
#include <clang/AST/CommentLexer.h>
#include <clang/AST/CommentParser.h>
#include <clang/AST/CommentSema.h>
#include <clang/AST/CommentVisitor.h>
#include <clang/AST/Decl.h>
#include <clang/AST/DeclAccessPair.h>
#include <clang/AST/DeclBase.h>
#include <clang/AST/DeclCXX.h>
#include <clang/AST/DeclContextInternals.h>
#include <clang/AST/DeclFriend.h>
#include <clang/AST/DeclGroup.h>
#include <clang/AST/DeclLookups.h>
#include <clang/AST/DeclObjC.h>
#include <clang/AST/DeclOpenMP.h>
#include <clang/AST/DeclTemplate.h>
#include <clang/AST/DeclVisitor.h>
#include <clang/AST/DeclarationName.h>
#include <clang/AST/DependentDiagnostic.h>
#include <clang/AST/EvaluatedExprVisitor.h>
#include <clang/AST/Expr.h>
#include <clang/AST/ExprCXX.h>
#include <clang/AST/ExprObjC.h>
#include <clang/AST/ExprOpenMP.h>
#include <clang/AST/ExternalASTSource.h>
#include <clang/AST/GlobalDecl.h>
#include <clang/AST/LambdaCapture.h>
#include <clang/AST/Mangle.h>
#include <clang/AST/MangleNumberingContext.h>
#include <clang/AST/NSAPI.h>
#include <clang/AST/NestedNameSpecifier.h>
#include <clang/AST/OpenMPClause.h>
#include <clang/AST/OperationKinds.h>
#include <clang/AST/ParentMap.h>
#include <clang/AST/PrettyPrinter.h>
#include <clang/AST/RawCommentList.h>
#include <clang/AST/RecordLayout.h>
#include <clang/AST/RecursiveASTVisitor.h>
#include <clang/AST/Redeclarable.h>
#include <clang/AST/SelectorLocationsKind.h>
#include <clang/AST/Stmt.h>
#include <clang/AST/StmtCXX.h>
#include <clang/AST/StmtGraphTraits.h>
#include <clang/AST/StmtIterator.h>
#include <clang/AST/StmtObjC.h>
#include <clang/AST/StmtOpenMP.h>
#include <clang/AST/StmtVisitor.h>
#include <clang/AST/TemplateBase.h>
#include <clang/AST/TemplateName.h>
#include <clang/AST/Type.h>
#include <clang/AST/TypeLoc.h>
#include <clang/AST/TypeLocVisitor.h>
#include <clang/AST/TypeOrdering.h>
#include <clang/AST/TypeVisitor.h>
#include <clang/AST/UnresolvedSet.h>
#include <clang/AST/VTTBuilder.h>
#include <clang/AST/VTableBuilder.h>
#include <clang/ASTMatchers/ASTMatchFinder.h>
#include <clang/ASTMatchers/ASTMatchers.h>
#include <clang/ASTMatchers/ASTMatchersInternal.h>
#include <clang/ASTMatchers/ASTMatchersMacros.h>
#include <clang/ASTMatchers/Dynamic/Diagnostics.h>
#include <clang/ASTMatchers/Dynamic/Parser.h>
#include <clang/ASTMatchers/Dynamic/Registry.h>
#include <clang/ASTMatchers/Dynamic/VariantValue.h>
#include <clang/Analysis/Analyses/CFGReachabilityAnalysis.h>
#include <clang/Analysis/Analyses/Consumed.h>
#include <clang/Analysis/Analyses/Dominators.h>
#include <clang/Analysis/Analyses/FormatString.h>
#include <clang/Analysis/Analyses/LiveVariables.h>
#include <clang/Analysis/Analyses/PostOrderCFGView.h>
#include <clang/Analysis/Analyses/PseudoConstantAnalysis.h>
#include <clang/Analysis/Analyses/ReachableCode.h>
#include <clang/Analysis/Analyses/ThreadSafety.h>
#include <clang/Analysis/Analyses/ThreadSafetyCommon.h>
#include <clang/Analysis/Analyses/ThreadSafetyLogical.h>
#include <clang/Analysis/Analyses/ThreadSafetyTIL.h>
#include <clang/Analysis/Analyses/ThreadSafetyTraverse.h>
#include <clang/Analysis/Analyses/ThreadSafetyUtil.h>
#include <clang/Analysis/Analyses/UninitializedValues.h>
#include <clang/Analysis/AnalysisContext.h>
#include <clang/Analysis/AnalysisDiagnostic.h>
#include <clang/Analysis/CFG.h>
#include <clang/Analysis/CFGStmtMap.h>
#include <clang/Analysis/CallGraph.h>
#include <clang/Analysis/CodeInjector.h>
#include <clang/Analysis/DomainSpecific/CocoaConventions.h>
#include <clang/Analysis/DomainSpecific/ObjCNoReturn.h>
#include <clang/Analysis/FlowSensitive/DataflowValues.h>
#include <clang/Analysis/ProgramPoint.h>
#include <clang/Analysis/Support/BumpVector.h>
#include <clang/Basic/ABI.h>
#include <clang/Basic/AddressSpaces.h>
#include <clang/Basic/AllDiagnostics.h>
#include <clang/Basic/AttrKinds.h>
#include <clang/Basic/Attributes.h>
#include <clang/Basic/Builtins.h>
#include <clang/Basic/CapturedStmt.h>
#include <clang/Basic/CharInfo.h>
#include <clang/Basic/CommentOptions.h>
#include <clang/Basic/Diagnostic.h>
#include <clang/Basic/DiagnosticCategories.h>
#include <clang/Basic/DiagnosticIDs.h>
#include <clang/Basic/DiagnosticOptions.h>
#include <clang/Basic/ExceptionSpecificationType.h>
#include <clang/Basic/ExpressionTraits.h>
#include <clang/Basic/FileManager.h>
#include <clang/Basic/FileSystemOptions.h>
#include <clang/Basic/FileSystemStatCache.h>
#include <clang/Basic/IdentifierTable.h>
#include <clang/Basic/LLVM.h>
#include <clang/Basic/Lambda.h>
#include <clang/Basic/LangOptions.h>
#include <clang/Basic/Linkage.h>
#include <clang/Basic/MacroBuilder.h>
#include <clang/Basic/Module.h>
#include <clang/Basic/ObjCRuntime.h>
#include <clang/Basic/OpenMPKinds.h>
#include <clang/Basic/OperatorKinds.h>
#include <clang/Basic/OperatorPrecedence.h>
#include <clang/Basic/PartialDiagnostic.h>
#include <clang/Basic/PlistSupport.h>
#include <clang/Basic/PrettyStackTrace.h>
#include <clang/Basic/SanitizerBlacklist.h>
#include <clang/Basic/Sanitizers.h>
#include <clang/Basic/SourceLocation.h>
#include <clang/Basic/SourceManager.h>
#include <clang/Basic/SourceManagerInternals.h>
#include <clang/Basic/Specifiers.h>
#include <clang/Basic/TargetBuiltins.h>
#include <clang/Basic/TargetCXXABI.h>
#include <clang/Basic/TargetInfo.h>
#include <clang/Basic/TargetOptions.h>
#include <clang/Basic/TemplateKinds.h>
#include <clang/Basic/TokenKinds.h>
#include <clang/Basic/TypeTraits.h>
#include <clang/Basic/Version.h>
#include <clang/Basic/VersionTuple.h>
#include <clang/Basic/VirtualFileSystem.h>
#include <clang/Basic/Visibility.h>
#include <clang/CodeGen/BackendUtil.h>
#include <clang/CodeGen/CGFunctionInfo.h>
#include <clang/CodeGen/CodeGenABITypes.h>
#include <clang/CodeGen/CodeGenAction.h>
#include <clang/CodeGen/ModuleBuilder.h>
#include <clang/CodeGen/ObjectFilePCHContainerOperations.h>
#include <clang/Driver/Action.h>
#include <clang/Driver/Compilation.h>
#include <clang/Driver/Driver.h>
#include <clang/Driver/DriverDiagnostic.h>
#include <clang/Driver/Job.h>
#include <clang/Driver/Multilib.h>
//#include <clang/Driver/Options.h>
#include <clang/Driver/Phases.h>
#include <clang/Driver/SanitizerArgs.h>
#include <clang/Driver/Tool.h>
#include <clang/Driver/ToolChain.h>
#include <clang/Driver/Types.h>
#include <clang/Driver/Util.h>
#include <clang/Edit/Commit.h>
#include <clang/Edit/EditedSource.h>
#include <clang/Edit/EditsReceiver.h>
#include <clang/Edit/FileOffset.h>
#include <clang/Edit/Rewriters.h>
#include <clang/Format/Format.h>
#include <clang/Frontend/ASTConsumers.h>
#include <clang/Frontend/ASTUnit.h>
#include <clang/Frontend/ChainedDiagnosticConsumer.h>
#include <clang/Frontend/CodeGenOptions.h>
#include <clang/Frontend/CommandLineSourceLoc.h>
#include <clang/Frontend/CompilerInstance.h>
#include <clang/Frontend/CompilerInvocation.h>
#include <clang/Frontend/DependencyOutputOptions.h>
#include <clang/Frontend/DiagnosticRenderer.h>
#include <clang/Frontend/FrontendAction.h>
#include <clang/Frontend/FrontendActions.h>
#include <clang/Frontend/FrontendDiagnostic.h>
#include <clang/Frontend/FrontendOptions.h>
#include <clang/Frontend/FrontendPluginRegistry.h>
#include <clang/Frontend/LangStandard.h>
#include <clang/Frontend/LayoutOverrideSource.h>
#include <clang/Frontend/LogDiagnosticPrinter.h>
#include <clang/Frontend/MigratorOptions.h>
#include <clang/Frontend/MultiplexConsumer.h>
#include <clang/Frontend/PCHContainerOperations.h>
#include <clang/Frontend/PreprocessorOutputOptions.h>
#include <clang/Frontend/SerializedDiagnosticPrinter.h>
#include <clang/Frontend/SerializedDiagnosticReader.h>
#include <clang/Frontend/SerializedDiagnostics.h>
#include <clang/Frontend/TextDiagnostic.h>
#include <clang/Frontend/TextDiagnosticBuffer.h>
#include <clang/Frontend/TextDiagnosticPrinter.h>
#include <clang/Frontend/Utils.h>
#include <clang/Frontend/VerifyDiagnosticConsumer.h>
#include <clang/FrontendTool/Utils.h>
#include <clang/Index/CommentToXML.h>
#include <clang/Index/USRGeneration.h>
#include <clang/Lex/CodeCompletionHandler.h>
#include <clang/Lex/DirectoryLookup.h>
#include <clang/Lex/ExternalPreprocessorSource.h>
#include <clang/Lex/HeaderMap.h>
#include <clang/Lex/HeaderSearch.h>
#include <clang/Lex/HeaderSearchOptions.h>
#include <clang/Lex/LexDiagnostic.h>
#include <clang/Lex/Lexer.h>
#include <clang/Lex/LiteralSupport.h>
#include <clang/Lex/MacroArgs.h>
#include <clang/Lex/MacroInfo.h>
#include <clang/Lex/ModuleLoader.h>
#include <clang/Lex/ModuleMap.h>
#include <clang/Lex/MultipleIncludeOpt.h>
#include <clang/Lex/PPCallbacks.h>
#include <clang/Lex/PPConditionalDirectiveRecord.h>
#include <clang/Lex/PTHLexer.h>
#include <clang/Lex/PTHManager.h>
#include <clang/Lex/Pragma.h>
#include <clang/Lex/PreprocessingRecord.h>
#include <clang/Lex/Preprocessor.h>
#include <clang/Lex/PreprocessorLexer.h>
#include <clang/Lex/PreprocessorOptions.h>
#include <clang/Lex/ScratchBuffer.h>
#include <clang/Lex/Token.h>
#include <clang/Lex/TokenConcatenation.h>
#include <clang/Lex/TokenLexer.h>
#include <clang/Parse/ParseAST.h>
#include <clang/Parse/ParseDiagnostic.h>
#include <clang/Parse/Parser.h>
#include <clang/Rewrite/Core/DeltaTree.h>
#include <clang/Rewrite/Core/HTMLRewrite.h>
#include <clang/Rewrite/Core/RewriteBuffer.h>
#include <clang/Rewrite/Core/RewriteRope.h>
#include <clang/Rewrite/Core/Rewriter.h>
#include <clang/Rewrite/Core/TokenRewriter.h>
#include <clang/Rewrite/Frontend/ASTConsumers.h>
#include <clang/Rewrite/Frontend/FixItRewriter.h>
#include <clang/Rewrite/Frontend/FrontendActions.h>
#include <clang/Rewrite/Frontend/Rewriters.h>
#include <clang/Sema/AnalysisBasedWarnings.h>
#include <clang/Sema/AttributeList.h>
#include <clang/Sema/CXXFieldCollector.h>
#include <clang/Sema/CodeCompleteConsumer.h>
#include <clang/Sema/CodeCompleteOptions.h>
#include <clang/Sema/DeclSpec.h>
#include <clang/Sema/DelayedDiagnostic.h>
#include <clang/Sema/Designator.h>
#include <clang/Sema/ExternalSemaSource.h>
#include <clang/Sema/IdentifierResolver.h>
#include <clang/Sema/Initialization.h>
// #include <clang/Sema/LocInfoType.h>
#include <clang/Sema/Lookup.h>
#include <clang/Sema/LoopHint.h>
#include <clang/Sema/MultiplexExternalSemaSource.h>
#include <clang/Sema/ObjCMethodList.h>
#include <clang/Sema/Overload.h>
#include <clang/Sema/Ownership.h>
#include <clang/Sema/ParsedTemplate.h>
#include <clang/Sema/PrettyDeclStackTrace.h>
#include <clang/Sema/Scope.h>
#include <clang/Sema/ScopeInfo.h>
#include <clang/Sema/Sema.h>
#include <clang/Sema/SemaConsumer.h>
#include <clang/Sema/SemaDiagnostic.h>
#include <clang/Sema/SemaFixItUtils.h>
#include <clang/Sema/SemaInternal.h>
#include <clang/Sema/SemaLambda.h>
#include <clang/Sema/Template.h>
#include <clang/Sema/TemplateDeduction.h>
#include <clang/Sema/TypoCorrection.h>
#include <clang/Sema/Weak.h>
#include <clang/Serialization/ASTBitCodes.h>
#include <clang/Serialization/ASTDeserializationListener.h>
#include <clang/Serialization/ASTReader.h>
#include <clang/Serialization/ASTWriter.h>
#include <clang/Serialization/ContinuousRangeMap.h>
#include <clang/Serialization/GlobalModuleIndex.h>
#include <clang/Serialization/Module.h>
#include <clang/Serialization/ModuleFileExtension.h>
#include <clang/Serialization/ModuleManager.h>
#include <clang/Serialization/SerializationDiagnostic.h>
#include <clang/StaticAnalyzer/Checkers/ClangCheckers.h>
#include <clang/StaticAnalyzer/Checkers/LocalCheckers.h>
#include <clang/StaticAnalyzer/Checkers/ObjCRetainCount.h>
#include <clang/StaticAnalyzer/Core/AnalyzerOptions.h>
#include <clang/StaticAnalyzer/Core/BugReporter/BugReporter.h>
#include <clang/StaticAnalyzer/Core/BugReporter/BugReporterVisitor.h>
#include <clang/StaticAnalyzer/Core/BugReporter/BugType.h>
#include <clang/StaticAnalyzer/Core/BugReporter/CommonBugCategories.h>
#include <clang/StaticAnalyzer/Core/BugReporter/PathDiagnostic.h>
#include <clang/StaticAnalyzer/Core/Checker.h>
#include <clang/StaticAnalyzer/Core/CheckerManager.h>
#include <clang/StaticAnalyzer/Core/CheckerOptInfo.h>
#include <clang/StaticAnalyzer/Core/CheckerRegistry.h>
#include <clang/StaticAnalyzer/Core/IssueHash.h>
#include <clang/StaticAnalyzer/Core/PathDiagnosticConsumers.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/APSIntType.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/AnalysisManager.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/BasicValueFactory.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/BlockCounter.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/CallEvent.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/CheckerContext.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/CheckerHelpers.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/ConstraintManager.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/CoreEngine.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/DynamicTypeInfo.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/DynamicTypeMap.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/Environment.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/ExplodedGraph.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/ExprEngine.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/FunctionSummary.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/LoopWidening.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/MemRegion.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/ProgramState.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/ProgramStateTrait.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/ProgramState_Fwd.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/SValBuilder.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/SVals.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/Store.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/StoreRef.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/SubEngine.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/SummaryManager.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/SymbolManager.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/TaintManager.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/TaintTag.h>
#include <clang/StaticAnalyzer/Core/PathSensitive/WorkList.h>
#include <clang/StaticAnalyzer/Frontend/AnalysisConsumer.h>
#include <clang/StaticAnalyzer/Frontend/CheckerRegistration.h>
#include <clang/StaticAnalyzer/Frontend/FrontendActions.h>
#include <clang/StaticAnalyzer/Frontend/ModelConsumer.h>
#include <clang/Tooling/ArgumentsAdjusters.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Tooling/CompilationDatabase.h>
#include <clang/Tooling/CompilationDatabasePluginRegistry.h>
#include <clang/Tooling/Core/Lookup.h>
#include <clang/Tooling/Core/Replacement.h>
#include <clang/Tooling/FileMatchTrie.h>
#include <clang/Tooling/JSONCompilationDatabase.h>
#include <clang/Tooling/Refactoring.h>
#include <clang/Tooling/RefactoringCallbacks.h>
#include <clang/Tooling/ReplacementsYaml.h>
#include <clang/Tooling/Tooling.h>

#if defined WIN32 || defined _WIN32 || defined __CYGWIN__
  #ifdef BUILD_LIBCLANGLITE
    #ifdef __GNUC__
      #define CLANGLITE_API __attribute__ ((dllexport))
    #else
      #define CLANGLITE_API __declspec(dllexport)
    #endif
  #else
    #ifdef __GNUC__
      #define CLANGLITE_API __attribute__ ((dllimport))
    #else
      #define CLANGLITE_API __declspec(dllimport)
    #endif
  #endif
  #define DLL_LOCAL
#else
  #if __GNUC__ >= 4
    #define CLANGLITE_API __attribute__ ((visibility ("default")))
  #else
    #define CLANGLITE_API
  #endif
#endif

namespace clanglite
{
#ifdef BOOST_PYTHON_GENERATOR
    CLANGLITE_API clang::ASTUnit* build_ast_from_code_with_args(boost::python::object _code, boost::python::object _args);

    CLANGLITE_API boost::python::str get_comment(clang::Decl* decl);

    CLANGLITE_API boost::python::list get_children(clang::ASTUnit& ast);
    CLANGLITE_API boost::python::list get_children(clang::DeclContext& decl);
    CLANGLITE_API boost::python::list get_children(clang::ClassTemplateDecl& cls);
    CLANGLITE_API boost::python::list get_children(clang::FunctionDecl& cls);
    CLANGLITE_API boost::python::list get_constructors(clang::CXXRecordDecl& decl);

    CLANGLITE_API boost::python::list get_bases(clang::CXXRecordDecl& decl);
    CLANGLITE_API boost::python::list get_virtual_bases(clang::CXXRecordDecl& decl);

    CLANGLITE_API boost::python::str get_name(clang::NamedDecl * decl);
    CLANGLITE_API boost::python::str get_name(clang::ClassTemplateSpecializationDecl * decl);
    CLANGLITE_API boost::python::str get_name(clang::TemplateArgument* ta);

    CLANGLITE_API boost::python::str str(clang::StringRef* sref);

    CLANGLITE_API boost::python::str get_mangling(clang::FunctionDecl * decl);
#endif
#ifdef PYBIND11_GENERATOR
    CLANGLITE_API clang::ASTUnit* build_ast_from_code_with_args(pybind11::object _code, pybind11::object _args);

    CLANGLITE_API pybind11::str get_comment(clang::Decl* decl);

    CLANGLITE_API pybind11::list get_children(clang::ASTUnit& ast);
    CLANGLITE_API pybind11::list get_children(clang::DeclContext& decl);
    CLANGLITE_API pybind11::list get_children(clang::ClassTemplateDecl& cls);
    CLANGLITE_API pybind11::list get_children(clang::FunctionDecl& cls);
    CLANGLITE_API pybind11::list get_constructors(clang::CXXRecordDecl& decl);

    CLANGLITE_API pybind11::list get_bases(clang::CXXRecordDecl& decl);
    CLANGLITE_API pybind11::list get_virtual_bases(clang::CXXRecordDecl& decl);

    CLANGLITE_API pybind11::str get_name(clang::NamedDecl * decl);
    CLANGLITE_API pybind11::str get_name(clang::ClassTemplateSpecializationDecl * decl);
    CLANGLITE_API pybind11::str get_name(clang::TemplateArgument* ta);

    CLANGLITE_API pybind11::str str(clang::StringRef* sref);

    CLANGLITE_API pybind11::str get_mangling(clang::FunctionDecl * decl);
#endif
    CLANGLITE_API clang::TemplateArgumentList* get_template_args(clang::ClassTemplateSpecializationDecl& cls);
    

    CLANGLITE_API clang::TypedefNameDecl * get_as_typedef_name_decl(clang::Type& type);

    CLANGLITE_API clang::TranslationUnitDecl * as_translation_unit(clang::DeclContext * decl);
    CLANGLITE_API clang::NamespaceDecl * as_namespace(clang::DeclContext * decl);
    CLANGLITE_API clang::RecordDecl * as_record(clang::DeclContext * decl);
    CLANGLITE_API clang::EnumDecl * as_enum(clang::DeclContext * decl);

    namespace detail
    { CLANGLITE_API bool invalid_char(char c); }

}

#endif
