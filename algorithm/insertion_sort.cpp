//
//  insertion_sort.cpp
//  algorithm
//
//  Created by 황준희 on 2020/04/27.
//  Copyright © 2020 황준희. All rights reserved.
//

// 실행속도 O(N ^ 2)
#include <stdio.h>

int main(void){
    int i = 0;
    int j = 0;
    int temp = 0;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    
    for (i = 0; i < 9; i++) {
        j = i;
        while(array[j] > array[j + 1]) {
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            j--;
        }
    }
    
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i] );
    }
    
    return 0;
}
