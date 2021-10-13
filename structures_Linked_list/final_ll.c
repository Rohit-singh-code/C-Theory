
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int priority;
    char name[20];
    struct node *link;
} NODE;

NODE *front;

void enqueue(char item[], int priority);
void dequeue();
void display();

int main()
{
    front = NULL;
    int choice, priority;
    char item[20];
    do
    {
        printf("1.EnQueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Input the item name to be added in the queue : ");
            scanf("%s", item);
            printf("Enter its priority : ");
            scanf("%d", &priority);
            enqueue(item, priority);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            //break;
        default:
            printf("Wrong choice\n");
        }
    } while (choice != 4);

    return 0;
}

void enqueue(char item[], int priority)
{
    NODE *tmp;
    tmp = (NODE *)malloc(sizeof(NODE));
    //tmp->name = item;
    strcpy(tmp->name, item);
    tmp->priority = priority;
    if (front == NULL || priority < front->priority)
    {
        tmp->link = front;
        front = tmp;
    }
    else
    {
        NODE *pres = front;
        NODE *prev = NULL;
        while (pres != NULL && pres->priority <= priority)
        {
            prev = pres;
            pres = pres->link;
        }
        tmp->link = pres;
        prev->link = tmp;
    }
}

void dequeue()
{
    NODE *tmp;
    if (front == NULL)
        printf("Queue Underflow\n");
    else
    {
        tmp = front;
        printf("Dequeued item is %s\n", tmp->name);
        front = front->link;
        free(tmp);
    }
}

void display()
{
    NODE *ptr;
    ptr = front;
    printf("\n------------\n");
    if (front == NULL)
        printf("Queue is empty\n");
    else
    {
        printf("Queue is :\n");
        printf("Name\tPriority\n");
        while (ptr != NULL)
        {
            printf("%s\t%d\n", ptr->name, ptr->priority);
            ptr = ptr->link;
        }
    }
    printf("------------\n");
}