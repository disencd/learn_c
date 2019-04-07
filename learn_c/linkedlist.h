//
//  linkedlist.h
//  learn_c
//
//  Created by Disen Devassy on 06/04/19.
//  Copyright © 2019 Disen Devassy. All rights reserved.
//

#ifndef linkedlist_h
#define linkedlist_h

#include <stdio.h>
#include <stdlib.h>

struct LinkedList{
    int data;
    struct LinkedList *next;
};

typedef struct LinkedList *node;

int list_options(void);
node insert_list(node, int);
void display_list(node);

#endif /* linkedlist_h */

