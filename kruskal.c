#include <stdio.h>
#include <stdlib.h>
struct node
{
    int weight;
    int element1;
    int element2;
    struct node *next;
};

struct node *insert(struct node *head, int i, int j, int edge)
{
    if (edge == 0)
    {
        return head;
    }
    struct node *temp = malloc(sizeof(struct node));
    temp->weight = edge;
    temp->element1 = i;
    temp->element2 = j;
    temp->next = NULL;

    if (head == NULL)
    {
        return temp;
    }
    else
    {
        if (temp->weight <= head->weight)
        {
            temp->next = head;
            return temp;
        }
        struct node *ptr = malloc(sizeof(struct node));
        ptr = head;
        struct node *old_ptr = malloc(sizeof(struct node));
        old_ptr = ptr;
        while (ptr != NULL && ptr->weight <= temp->weight)
        {
            old_ptr = ptr;
            ptr = ptr->next;
        }
        old_ptr->next = temp;
        temp->next = ptr;
        return head;
    }
}

int main()
{
    int graph[4][4] = {{0, 2, 0, 1}, {2, 0, 3, 2}, {0, 3, 0, 3}, {1, 2, 3, 0}};
    int cost = 0;
    int visited[4] = {0, 0, 0, 0};
    int n = 4;
    struct node *head = malloc(sizeof(struct node));
    head = NULL;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            head = insert(head, i, j, graph[i][j]);
        }
    }
    while (head != NULL)
    {
        if (visited[head->element1] == 0 || visited[head->element2] == 0)
        {
            printf("%d > %d < %d\n", head->element1, head->weight, head->element2);
            cost = cost + head->weight;
            visited[head->element1] = 1;
            visited[head->element2] = 1;
        }
        head = head->next;
    }
    printf("Cost : %d", cost);
    return 0;
}