#'@export
hello <- function() {
  .Call('hello', PACKAGE = 'TestPthreads')
}

