#include <Rcpp.h>
using namespace Rcpp;
using namespace std;

RcppExport SEXP Eccentricity(SEXP JD)
{
  double JD3  = Rcpp::as<double>(JD);
  double T = (JD3 - 2451545.0) / 36525.0;
  double Tsquared = T*T;
  return (wrap(1 - 0.002516*T - 0.0000074*Tsquared));
}
