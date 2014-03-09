#include <Rcpp.h>
#include "pthread_hello.h"

using namespace Rcpp;

RcppExport SEXP hello() {
  BEGIN_RCPP
   pthread_t threads[NUM_THREADS];
   int rc;
   long t;
   for(t=0; t<NUM_THREADS; t++){
      Rprintf("In main: creating thread %ld\n", t);
      rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
      if (rc){
         Rprintf("ERROR; return code from pthread_create() is %d\n", rc);
         throw std::runtime_error("");
      }
   }

   /* Last thing that main() should do */
//   pthread_exit(NULL);
   Rprintf("pthread_exit\n");
   return R_NilValue;
   END_RCPP
}
