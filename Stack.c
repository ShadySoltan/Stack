#include "Stack.h"

void Push(int data)
{
    //Create new node
    Node *current = (Node*)malloc(sizeof(Node));
    //check if stack is empty
    if(TOP == NULL)
    {
        Head = current;
        current->data = data;
        TOP = current;
        TOP->ptr = NULL;
    }
    else
    {
        TOP->ptr = current;
        current->data = data;
        TOP = current;
        TOP->ptr = NULL;
    }
}

void Pop(void)
{
    if (Head->ptr == NULL) {
        free(Head);
        Head = NULL; // Update Head to NULL after freeing
    } else {
        Node *temp_prev = Head, *temp = Head->ptr;
        while (temp != NULL) {
            if (temp->data == TOP->data) {
                break;
            }
            temp = temp->ptr;
            temp_prev = temp_prev->ptr;
        }
        free(temp);
        TOP = temp_prev;
        TOP->ptr = NULL;
    }
}

void Print_Stack(void)
{
    int i = 1;
    Node *temp = Head;
    while(temp != NULL)
    {
        printf("Node%d: %d\n\n",i,temp->data);
        i++;
        temp = temp->ptr;
    }
}

int main()
{
    Push(10);
    Push(20);
    Push(30);
    Push(40);
    Pop();
    Pop();
    Print_Stack();
    return 0;
}