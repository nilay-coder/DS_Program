#include <stdio.h>
#include <stdlib.h>

/*

Array : - Continues memory block

1. Stactic memory allocation :- stack,queue // FIXED SIZE
2. Dynamic memory allocation :- stack,queue // UNFIXED SIZE


1. stack
2. Queue
3. Linked List
4. Tree


Stack Function :-
 1. Push(ele)
 2. Pop -> deleteing the last element
 3. Traverse
 4. Peek -> printing the last element
 // Opetional
 4. size

 // Util for stactic stack
 1. IsEmpty
 2. IsFull
*/

#define MAX_SIZE 10

int stack[MAX_SIZE]; // declaring array of size 10 // MAIN_STACK
int top = -1;        // point to the upper most element

int isEmpty();
int isFull();
void push();
void traverse();
void peek();
void pop();
void size();

void main()
{
    while (1)
    {
        printf("\n\nFor Push Enter 1.\n");
        printf("For Travers Enter 2.\n");
        printf("For Peek Enter 3.\n");
        printf("For Pop Enter 4.\n");
        printf("For Size Enter 5.\n");
        printf("For Exit press 6.\n");
        printf("Enter your selection :- ");

        int selection;
        scanf("%d", &selection);

        switch (selection)
        {
        case 1:
        {
            int ele;
            printf("Enter value :- ");
            scanf("%d", &ele);
            push(ele);
        }
        break;
        case 2:
            travers();
            break;
        case 3:
            peek();
            break;
        case 4:
            pop();
            break;
        case 5:
            size();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Enter valid selection");
            break;
        }
    }
}

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (top == MAX_SIZE - 1)
        return 1;
    else
        return 0;
}

void push(int ele)
{

    if (isFull())
    {
        printf("Stack is full");
    }
    else
    {
        top++; // 0
        stack[top] = ele;
    }
}

void travers()
{
    if (isEmpty())
    {
        printf("Stack is empty !!");
    }
    else
    {
        printf("Value of stack is :- \n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\t", stack[i]);
        }
    }
}

void peek()
{
    if (isEmpty())
        printf("Stack is empty !!!");
    else
        printf("Peek is %d", stack[top]);
}
void pop()
{
    if (isEmpty())
        printf("Stack is empty !!!");
    else
    {
        printf("%d", stack[top]);
        top--;
    }
}

void size()
{
    if (isEmpty())
        printf("Stack is empty !!!");
    else
        printf("Size of stack is %d", top + 1);
}