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

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("Hello, World! %lu\n", sizeof(int));
//    int fact = 0;
//    fact = factorial(5);
//    printf("Factorial Value is %d\n", fact);
    fibonacci(100);
    return 0;
}
