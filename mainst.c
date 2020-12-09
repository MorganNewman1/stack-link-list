
#include "stack.h"

int main()
{
 stack s;
 stack t;
 s = makestack();
 t = makestack();
// printf("before push\n");
 int x;
 push(s, 4);
 push(s, 6);
 push(t, 7);
 push(t, 5);
 push(t, 3);
 push(s, 8);
 printf("s before pop\n");
 printstack(s);
 printf("t before pop\n");
 printstack(t);
 x = pop(s);
 printf("%d popped from s\n", x);
 printf("s after pop\n");
 printstack(s);
 
 printf("t after pop\n");
 printstack(t);
 return 0;
}
