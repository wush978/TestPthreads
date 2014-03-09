#'@export
hello <- function() {
  .Call('TestPthreads_hello', PACKAGE = 'TestPthreads')
}

