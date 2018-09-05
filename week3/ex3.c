//
// Created by Daria Miklashevskaya on 05/09/2018.
//

#include <stdio.h>
#include <stdlib.h>

struct LinkedListNode {
    int value;
    struct LinkedListNode *next;

};

struct LinkedListNode *head = NULL;

void print_list();

void insert_node(int value, int index) {
    struct LinkedListNode *new =(struct LinkedListNode*) malloc (sizeof(struct LinkedListNode));

    new->value = value;
    if (head==NULL){
        new->next = NULL;
        head = new;
    }
    else
    {
        struct LinkedListNode *temp =(struct LinkedListNode*) malloc (sizeof(struct LinkedListNode));
        temp  = head;
        int i = 0;
        while(i<index) {
            temp = temp->next;
            i++;
        }
        new->next = temp->next;
        temp->next = new;

    }

    printf("Node inserted at index %d \n", index);
   print_list();

}

void print_list(){
    if (head==NULL){
        printf("No elements");
    }

    else
    {
        struct LinkedListNode *temp = head;
        int index = 0;
        printf("The list now looks like this:\n");
        while(temp->next != NULL){
            printf("%d (%d) ->", temp->value, index);
            temp = temp->next;
            index++;
        }
        printf("%d (%d)-> NULL", temp->value, index);
        printf("\n");

    }
}
int main() {

    insert_node(10, 0);
    insert_node(12, 0);
    insert_node(16, 1);



}