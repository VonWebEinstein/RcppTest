EccentricityR <- function(JD) {

  .Call('Eccentricity', JD, PACKAGE = 'RcppTest')

}
