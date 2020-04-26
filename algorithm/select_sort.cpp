//
//  select_sort.cpp
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
    int min = 0;
    int index = 0;
    int temp = 0;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    
    for(i=0; i< 10; i++){
        min = 999;
        for(j=i; j < 10; j++) {
            if(min > array[j]) {
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
    for(i=0; i < 10; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}
