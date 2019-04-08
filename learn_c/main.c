//
//  main.c
//  learn_c
//
//  Created by Disen Devassy on 06/04/19.
//  Copyright © 2019 Disen Devassy. All rights reserved.
//

#include <stdio.h>
#include "factorial.h"
#include "fibonacci.h"
#include "linkedlist.h"
#include "binary_search.h"
#include "string_operations.h"

int main(int argc, const char * argv[]) {
    
//    printf("Hello, World!\n");
//    printf("Hello, World! %lu\n", sizeof(int));
    
//    int fact = 0;
//    fact = factorial(5);
//    printf("Factorial Value is %d\n", fact);
    
//    fibonacci(100);
    
//    list_options();
    
//    int arr[] = {0, 1, 12, 23, 45, 56, 67, 78, 89, 90};
//    int a = 1;
//    a = binary_search(arr, 0, 10, 45);
//    printf("Found 45 at %d \n", a);
    
    char str[] = "Disencd", *rev;
    int len = 0;
    rev = string_reverse(str);
    printf("Reverse is %s \n",rev);
    
    len = str_len(str);
    printf("Len is %d \n",len);
    
    return 0;
}
