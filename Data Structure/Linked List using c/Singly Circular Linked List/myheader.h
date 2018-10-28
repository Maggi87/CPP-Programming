#include<stdio.h>
#include<malloc.h>


typedef int BOOL;

#define TRUE 1
#define FALSE 0

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE,int);
void InsertLast(PPNODE,int);
void InsertAtPos(PPNODE,int,int);

void DeleteFirst(PPNODE);
void DeleteLast(PPNODE);
void DeleteAtPos(PPNODE,int);

void Displayf(PNODE);
void Displayb(PNODE);
int Count(PNODE);