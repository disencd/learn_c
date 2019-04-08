//
//  string_operations.c
//  learn_c
//
//  Created by Disen Devassy on 07/04/19.
//  Copyright © 2019 Disen Devassy. All rights reserved.
//

#include "string_operations.h"

char * string_reverse(char *str) {
    int64_t len = strlen(str);
    int64_t i, j;
    char temp;

    for(i = 0, j = len - 1; i <= j; i++, j--) {
        temp = *(str + i);
        *(str + i) = *(str + j);
        *(str + j) = temp;
    }

    return str;
}

int str_len(char *str) {
    int len = 0;
    while(*str++){
        len++;
    }
    printf("Len is %d", len);
    return len;
}
