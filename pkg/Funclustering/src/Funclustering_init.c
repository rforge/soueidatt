#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP mfpcaCpp(SEXP, SEXP, SEXP);
extern SEXP RfunclustMain(SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"mfpcaCpp",      (DL_FUNC) &mfpcaCpp,      3},
    {"RfunclustMain", (DL_FUNC) &RfunclustMain, 2},
    {NULL, NULL, 0}
};

void R_init_Funclustering(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
