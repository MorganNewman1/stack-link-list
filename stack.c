
#include "stack.h"
//#include "lla.h"

void push( stack st, int num )
{
    insertFront(st->top, num);
}

int pop( stack st )
{
    removeFront(st->top);
/*
    int num;
    num = st->data[st->top-1];
    st->top--;
    return num;
*/
}

void printstack( stack st )
{
    printer(st->top);
/*
    int k;
    for (k = 0; k < st->top; k++)
        printf("%d ", st->data[k]);
    printf("\n");
*/
}
/*
stack makestack( )
{
    stack ns;
    ns = malloc( sizeof( struct stacktype ) );
    ns->top = 0;
    return ns;
}
*/

stack makestack( )
{
    //printf("here1\n");

    stack test;

    test = malloc(sizeof(struct stacktype));

     struct lheader *L;
    L=makelist();
    //L->data = malloc(sizeof(int)*sz)
    //L = makelist();

    test->top = L;

    return test;
}
