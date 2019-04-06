//
//  fibonacci.c
//  learn_c
//
//  Created by Disen Devassy on 06/04/19.
//  Copyright © 2019 Disen Devassy. All rights reserved.
//

#include "fibonacci.h"

int fibonacci(int num) {
    int i = 0, temp = 0;
    int j = 1;
    printf("%d %d ", i,j);
    
    while(j <= num) {
        temp = i;
        i = j;
        j = temp + i;
        printf("%d ", j);
    }
    return 0;
}
