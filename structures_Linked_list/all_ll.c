#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node *link;
} node;

void insert_beginning(int a);
void insert_ending(int a);
void display();
void insert_n(int info, int n);
void delete_n(node *p);
void middle_node(node *head);

node *front;

int main()
{
    front = NULL;
    int a = 10;
    int b = 11;
    int c = 12;
    int d = 13;
    int e = 14;
    node *ptr1;
    int f = 8;
    int j = 9;
    ptr1->data = 11;

    insert_beginning(a);
    insert_beginning(b);
    insert_beginning(c);
    insert_ending(d);
    display();
    // insert_n(e, 3);
    // display();
    // delete_n(ptr1);
    // display();
    // insert_beginning(f);
    // insert_ending(j);
    // display();
    // // middle_node(front);
}

void insert_beginning(int a)
{

    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->data = a;

    if (front == NULL)
    {
        front = temp;
        temp->link = NULL;
    }
    else
    {
        temp->link = front;
        front = temp;
    }
}

void insert_ending(int a)
{
    node *p = front;
    node *temp = (node *)malloc(sizeof(node));
    temp->data = a;
    temp->link = NULL;

    if (front == NULL)
    {
        front = temp;
        temp->link = NULL;
    }
    else
    {
        while (p->link != NULL) //keep the pointer p pointing to the node and not turning it into the link
        {
            p = p->link;
        }
        p->link = temp;
    }
}

void display()
{
    node *ptr;
    int index = 0;
    ptr = front;
    printf("\n------------\n");
    if (front == NULL)
        printf("Queue is empty\n");
    else
    {
        printf("Queue is :\n");
        printf("Name\tValues\n");
        while (ptr != NULL)
        {
            index++;
            printf("%d\t%d\n", index, ptr->data);
            ptr = ptr->link;
        }
    }
    printf("------------\n");
}

void insert_n(int info, int n)
{
    node *p = front;

    node *temp = (node *)malloc(sizeof(node));
    temp->data = info;
    node *prev = NULL;
    node *pres = front;

    if (front == NULL)
    {
        front = temp;
        temp->link = NULL;
    }

    else
    {
        n--;
        while (n)
        {
            prev = pres;
            pres = pres->link;
            n--;
        }
        prev->link = temp;
        temp->link = pres;
    }
}

void delete_n(node *p)
{
    node *ptr = front;
    node *q;
    node *r;
    if (front == NULL)
    {
        printf("no node to be deleted");
    }

    else
    {
        while (ptr->data != p->data)
        {
            q = ptr;
            ptr = ptr->link;
        }
        r = ptr->link;
        free(ptr);
        q->link = r;
    }
}

int no_of_nodes(node *head)
{
    node *p = head;
    if (head == NULL)
    {
        return 0;
    }
    else
    {
        int count = 0;
        while (p->link != NULL)
        {
            count++;
            p = p->link;
        }
        count++;
        return count;
    }
}

void middle_node(node *head)
{
    node *p = head;
    node *prev = NULL;
    node *pres = p;
    int count = no_of_nodes(head);
    int mid = count / 2;
    while (mid)
    {
        prev = pres;
        pres = pres->link;
        mid--;
    }
    printf("middle node: %d\n%d", prev->data, pres->data);
    // if (count % 2 == 0)
    // {
    //     int mid = count / 2;
    //     while (mid)
    //     {
    //         prev = pres;
    //         pres = pres->link;
    //     }
    //     printf("%d\n%d", prev->data, pres->data);
    // }
    // else
    // {
    //     int mid = (count / 2) + 1;
    //     while (mid)
    //     {
    //         prev = pres
    //     }
    // }
}

void is_palin()
{
    node *p2 = front;
    int count = no_of_nodes(front);
    int arr[count + 1];
    int index = 0;
    while (p2->link != NULL)
    {
        arr[index] = p2->data;
        p2 = p2->link;
        index++;
    }
    arr[index] = p2->data;

    int *pa = arr;
    int *pb = arr;
    int index2 = index - 1;
    while (index2)
    {
        pb++;
    }

    int flag = 1;
    for (; (pa != pb) && flag; pa++, pb--)
    {
        if ((*pa) != (*pb))
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        printf("%d", 0);
    }
    else
    {
        printf("%d", 1);
    }
}

void sorted_entry(int a)
{
    node *p = front;
    node *temp = (node *)malloc(sizeof(node));
    temp->data;
    temp->link = NULL;
    if (front == NULL || front->data > temp->data)
    {
        temp->link = front;
        front = temp;
    }
    else
    {
        node *prev = NULL;
        node *pres = front;
        while (pres->link != NULL && pres->data < temp->data)
        {
            prev = pres;
            pres = pres->link;
        }
    }
}