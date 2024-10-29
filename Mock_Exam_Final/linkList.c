#include "stdio.h"
#include "stdlib.h"

typedef struct node
{
    int number;
    struct node* nextNode;
} node;

typedef struct head
{
    int amount;
    node* firstNode;
} head;

node* createNode(int data) {
    node* tmp = (node*) malloc(sizeof(node));
    tmp->number = data;
    tmp->nextNode = NULL;
    return tmp;
}

head* createHead() {
    head* tmp = (head*) malloc(sizeof(head));
    tmp->amount = 0;
    tmp->firstNode= NULL;
    return tmp;
}

void insertLast(head* list, int data) {
    node* inserting = createNode(data);
    if (list->amount == 0) { list->firstNode = inserting; }
    else {
        node* through = list->firstNode;
        while (through->nextNode != NULL) { through = through->nextNode; }

        through->nextNode = inserting;
    }
    list->amount++;
}

void replace(head* list, int place, int data) {
    node* replace = createNode(data);
    if (list->amount < place) { printf("ERROR"); return; }

    node* front = list->firstNode;
    if (place == 0) {
        replace->nextNode = front;
        list->firstNode = replace;
    } else {
        for (int i = 0; i < place - 1; i++) {
            front = front->nextNode;
        }
        replace->nextNode = front->nextNode;
        front->nextNode = replace;
    }
}

void print(head* list) {
    node* through = list->firstNode;
    while (through->nextNode != NULL) {
        printf("%d ", through->number);
        through = through->nextNode;
    }
    printf("%d", through->number);
}

int main() {
    int number;
    scanf("%d\n", &number);

    head* list = createHead();
    for (int i = 0; i < number; i++) {
        int tmp;
        scanf("%d\n", &tmp);

        insertLast(list, tmp);
    }

    int place, data;
    scanf("%d\n%d", &place, &data);
    replace(list, place, data);

    print(list);

    node* current = list->firstNode;
    while (current != NULL) {
        node* temp = current;
        current = current->nextNode;
        free(temp);
    }
    free(list);

    return 0;
}