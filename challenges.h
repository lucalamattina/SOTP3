#ifndef challenges_h
#define challenges_h

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>


#define CHALLENGE_COUNT 12

typedef struct challenge{
  char * question;
  char * investigate;
  char * answer;
  void (*aux)(void);
} challenge;


void printChallenge(int index);

char * getAnswer(int index);

void badFD();


void mixedFDS();

void quine();

void gdbme();
#endif
