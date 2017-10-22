// This is a classic turing machine. Each function is a different kind of operation that can be done.
// The inputs are: whatever function you want to do, and the tape.

#include <stdio.h>
#include <stdlib.h>

int tapeLen;

int * formatTape (char *argv[]);
void printTape (int *tape);

int main (int argc, char *argv[]) {

  int *tape = formatTape(argv);

  printTape(tape);

  return 0;

}

int * formatTape (char *argv[]) {

  // find length of turing tape
  for (int i = 0; argv[2][i] != '\0'; ++i) {
    ++tapeLen;
  }

  int *tape = malloc(tapeLen * sizeof(int));

  for (int i = 0; i < tapeLen; ++i) {
    tape[i] = argv[2][i] - 48;
  }

  return *tape;

}

void printTape (int *tape) {

  for (int i = 0; i < tapeLen; ++i) {
    printf("| %d | ", tape[i]);
  }

  printf("\n");

}
