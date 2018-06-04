fib <- function(n) {
  .Call('fib', n,PACKAGE = 'RcppTest')
}
