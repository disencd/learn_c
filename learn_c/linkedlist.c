//
//  linkedlist.c
//  learn_c
//
//  Created by Disen Devassy on 06/04/19.
//  Copyright © 2019 Disen Devassy. All rights reserved.
//

#include "linkedlist.h"

int list_options() {
    int MAX = 10, choice = 0, num = 0;
    char buf[MAX];
    node head = NULL;
    while (1) {
        printf("\n-------------------------------------------------\n"
               "-------------- Linked List Program --------------\n"
               "-------------------------------------------------\n"
               "1) Insert\n2) Display\n"
               "Enter your choice :");
        fgets(buf, MAX, stdin);
        choice = atoi(buf);
        
        switch(choice) {
            case 1:
                printf("\nInsert into list : ");
                fgets(buf, MAX, stdin);
                num = atoi(buf);
                head = insert_list(head, num);
                break;
            case 2:
                display_list(head);
                break;
            default:
                printf("\nExiting .........\n");
                return 0;
        }
        
    }
    return 0;
}

void display_list(node head) {
    node temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}

node create_node(int data) {
    node temp;
    temp = (node)malloc(10);
    temp->data = data;
    temp->next = NULL;
    return temp;
}

node insert_list(node head, int num) {
    node temp, new_node;
    new_node = create_node(num);
    if (head == NULL){
        head = new_node;
        printf("HEAD Data is %d \n", head->data);
    } else {
        temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    return head;
}


