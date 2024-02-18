#ifndef _mymalloc_h_
#define _mymalloc_h_

#include <stdlib.h>
#include <stdio.h>

#define MEMLENGTH 512

#define malloc(s) mymalloc(s, __FILE__, __LINE__);
#define free(p) free(p, __FILE__, __LINE__);

void *mymalloc(unsigned int size, char *FILE, int LINE);
void myfree(void *z, char *FILE, int LINE);
