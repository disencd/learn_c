//
//  binary_search.c
//  learn_c
//
//  Created by Disen Devassy on 06/04/19.
//  Copyright © 2019 Disen Devassy. All rights reserved.
//

#include "binary_search.h"

int binary_search(int *arr, int l, int r, int search)
{
    while (l <= r) {
        int mid = (l + r) / 2;
        if (*(arr+mid) == search) {
            return mid;
        }
        if (*(arr+mid) < search) {
            l = mid + 1;
        }
        if (*(arr+mid) > search) {
            r = mid - 1;
        }
    }
    return -1;
}
