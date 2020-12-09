
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lla.h"
struct stacktype
{
    //int data;
    //int top;
    struct lheader *top;
};

typedef struct stacktype *stack;

void push( stack st, int num );
int pop( stack st );
void printstack( stack st );
stack makestack( );
// stack makestack( int sz); // use this for assignment dynamic