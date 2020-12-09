#include "lla.h"


struct lheader *makelist( )
{
    struct lheader *alist;
    alist = malloc( sizeof( struct lheader ) );
    alist->len = 0;
    alist->start = NULL;
    return alist;
}

struct lnode *makenode( int val )
{
    struct lnode *box;
    box = malloc( sizeof( struct lnode ) );
    box->data = val;
    box->next = NULL;
    return box;
}


void insertFront( struct lheader *L, int val )
{
    struct lnode * tmp;
    tmp = makenode(val);
    tmp->next = L->start;
    L->start = tmp;
    L->len++;
}

void insertBack( struct lheader *L, int val )
{
    struct lnode * tmp,*newnode;
    newnode = makenode(val);
    if(L->len > 0){
        tmp = L->start;
        while(tmp->next!= NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newnode;
    }
    else{
        L->start = newnode;
    }
    L->len++;
}
int removeFront( struct lheader *L )
{
    struct lnode * tmp;
    int val;
    tmp = L->start;
    val = tmp->data;
    L->start = tmp->next;
    free(tmp);
    L->len--;
    return val;
}

int isInList( struct lheader *L, int val )
{
    struct lnode *tmp;
    tmp = L->start;
    while ( tmp != NULL)
    {
        if (tmp->data == val)
            return 1;
        tmp = tmp->next;
    }
    return 0;
}

struct lnode *findNode( struct lheader *L, int val )
{
    struct lnode *tmp;
    tmp = L->start;
    while ( tmp != NULL)
    {
        if (tmp->data == val)
        return tmp;
        tmp = tmp->next;
    }
    return NULL;
/*  struct lnode *find;
    find = L->start;
    while(find !=NULL)

    if(find->data == val){
        return find;
    }
    else{
            return NULL;
        }*/
}
void insertAfter( struct lheader *L, int val, struct lnode *p )
{   struct lnode *tmp;

    tmp->next = p->next;
    p->next=tmp;
    L->len++;

}


void insertBefore( struct lheader *L, int val, struct lnode *p )
{
    struct lnode *place;
    struct lnode *tmp;
    if(p==L->start)
        insertFront(L,val);

    else
        {
    tmp = makenode(val);
        place = L->start;
        while(place->next != p)
            place=place->next;

        place->next = tmp;
        tmp->next = p;
        L->len++;
        }
}


void printlist( struct lnode *front )
{
    struct lnode *mov;
    mov = front;
    while (mov != NULL)
    {
        printf("%d  ", mov->data);
        mov = mov->next;
    }
    printf("\n");
}


void printer( struct lheader *alist )
{
    struct lnodev *mov;
    printf("--------------------------\n");
    printf("List print, len %d\n", alist->len);
    printlist( alist->start );
    printf("--------------------------\n");
}