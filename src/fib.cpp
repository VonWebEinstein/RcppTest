#include <Rcpp.h>
using namespace Rcpp;
using namespace std;

// RcppExport SEXP Eccentricity(SEXP JD)
// {
//   double JD3  = Rcpp::as<double>(JD);
//   double T = (JD3 - 2451545.0) / 36525.0;
//   double Tsquared = T*T;
//   return (wrap(1 - 0.002516*T - 0.0000074*Tsquared));
// }
int f(int);
RcppExport SEXP fib(SEXP n){
  int x = Rcpp::as<int>(n);
  return(wrap(f(x)));
}

int f(int x){

    if (x == 0) return(0);
    if (x == 1) return(1);
    return (f(x - 1)) + f(x - 2);
  }

