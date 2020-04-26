//
//  main2.c
//  algorithm
//
//  Created by 황준희 on 2020/04/26.
//  Copyright © 2020 황준희. All rights reserved.
//

#include <stdio.h>

int main(){
    int array[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
     int min = 99;
     int max = 0;
     int i = 0;
     int indexm = 0;
     int indexM = 0;
     
     for (i = 0; i < 10; i++) {
         if(min > array[i]) {
             min = array[i];
             indexm = i;
         } else if(max < array[i]){
             max = array[i];
             indexM = i;
         }
     }
     
    
    return 0;
}
