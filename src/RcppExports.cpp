// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "tensorflow_types.hpp"
#include <Rcpp.h>

using namespace Rcpp;

// py_initialize
void py_initialize();
RcppExport SEXP tensorflow_py_initialize() {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    py_initialize();
    return R_NilValue;
END_RCPP
}
// py_finalize
void py_finalize();
RcppExport SEXP tensorflow_py_finalize() {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    py_finalize();
    return R_NilValue;
END_RCPP
}
// py_run_string
void py_run_string(const std::string& code);
RcppExport SEXP tensorflow_py_run_string(SEXP codeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type code(codeSEXP);
    py_run_string(code);
    return R_NilValue;
END_RCPP
}
// py_run_file
void py_run_file(const std::string& file);
RcppExport SEXP tensorflow_py_run_file(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type file(fileSEXP);
    py_run_file(file);
    return R_NilValue;
END_RCPP
}
// py_main_module
PyObjectPtr py_main_module();
RcppExport SEXP tensorflow_py_main_module() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(py_main_module());
    return __result;
END_RCPP
}
// py_import
PyObjectPtr py_import(const std::string& module);
RcppExport SEXP tensorflow_py_import(SEXP moduleSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type module(moduleSEXP);
    __result = Rcpp::wrap(py_import(module));
    return __result;
END_RCPP
}
// py_object_print
void py_object_print(PyObjectPtr pObject);
RcppExport SEXP tensorflow_py_object_print(SEXP pObjectSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< PyObjectPtr >::type pObject(pObjectSEXP);
    py_object_print(pObject);
    return R_NilValue;
END_RCPP
}