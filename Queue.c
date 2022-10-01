#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int Queue[MAX_SIZE];
int top = 0;
int bottom = 0;

int isEmpty();
int isFull();
void insert(int ele);
void delete ();
void travers();

void main()
{
    while (1)
    {
        printf("\n\nFor Insert Enter 1.\n");
        printf("For Delete Enter 2.\n");
        printf("For Travers Enter 3.\n");
        printf("For Exit press 4.\n");
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
            insert(ele);
        }
        break;
        case 2:
            delete ();
            break;
        case 3:
            travers();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Enter valid selection");
            break;
        }
    }
}

int isFull()
{
    if (bottom == MAX_SIZE - 1)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if (bottom == top)
        return 1;
    else
        return 0;
}

void insert(int ele)
{
    /*
     User input 1,2,3,4
     So data will be added like :- 4,3,2,1
     on calling delete -> 4 will be deleted and the queue will be 3,2,1
    */
    if (isFull())
    {
        printf("Queue is full.");
    }
    else
    {
        Queue[bottom] = ele;
        bottom++;
    }
}

void delete ()
{
    if (isEmpty())
    {
        printf("Queue is empty.");
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            Queue[i] = Queue[i + 1];
        }
        bottom--;
    }
}

void travers()
{
    for (int i = 0; i < bottom; i++)
        printf("%d\n", Queue[i]);
}