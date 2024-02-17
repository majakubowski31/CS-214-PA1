#define _mymalloc_h_

#include <stdlib.h>
#include <stdio.h>

#define malloc(s) mymalloc(s, __FILE__, __LINE__);
#define free(p) free(p, __FILE__, __LINE__);

void *mymalloc(unsigned int size, char *file, int line);
void myfree(void *p, char *file, int line);