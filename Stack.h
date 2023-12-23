#ifndef _STACK_H_
#define _STACK_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *ptr;
}Node;

Node *TOP = NULL, *Head;

void Push(int data);
void Pop(void);
void Print_Stack(void);

#endif