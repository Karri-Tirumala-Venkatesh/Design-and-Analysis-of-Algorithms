#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(struct node *head, int data)
{
    struct node *ptr = malloc(sizeof(struct node));
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        return temp;
    }
    ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return head;
}

int no_of_digits(struct node *head)
{
    int largest = 0;
    int digits = 0;
    while (head != NULL)
    {
        if (head->data > largest)
        {
            largest = head->data;
        }
        head = head->next;
    }
    while (largest != 0)
    {
        digits++;
        largest = largest / 10;
    }
    return digits;
}

int main()
{
    int data;
    int num;
    struct node *head = malloc(sizeof(struct node));
    head = NULL;
    printf("Enter the no. of Numbers to be Sorted : ");
    scanf("%d", &num);
    printf("Enter Numbers :\n");

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &data);
        head = create(head, data);
    }

    int digits = no_of_digits(head);
    int digit1 = digits;

    struct node *bucket[10];
    for (int i = 0; i < 10; i++)
    {
        bucket[i] = NULL;
    }

    while (digits != 0)
    {
        while (head != NULL)
        {
            int digit = head->data / pow(10, digit1 - digits);
            digit = digit % 10;
            bucket[digit] = create(bucket[digit], head->data);
            head = head->next;
        }
        for (int i = 0; i < 10; i++)
        {
            if (bucket[i] == NULL)
            {
                continue;
            }
            while (bucket[i] != NULL)
            {
                head = create(head, bucket[i]->data);
                bucket[i] = bucket[i]->next;
            }
        }
        digits--;
    }

    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    return 0;
}