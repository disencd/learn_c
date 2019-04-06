//
//  factorial.c
//  learn_c
//
//  Created by Disen Devassy on 06/04/19.
//  Copyright © 2019 Disen Devassy. All rights reserved.
//

#include "factorial.h"

int factorial(int number) {
    
    if (number<=0) {
        return 1;
    }
    return number * factorial(number - 1);
}
