//
//  reverseArray.c
//  algorithm
//
//  Created by 황준희 on 2020/05/03.
//  Copyright © 2020 황준희. All rights reserved.
//

#include <stdio.h>

void inputArray(int *pa, int size);
void reverseArray(int *pa, int size);
void outputArray(int *pa, int size);

int main(void){
    int const size = 7;
    int array[size];
    
    printf("%d개의 정수를 입력하세요 : ", size);
    inputArray(array, size);
    printf(" - 배열의 내용을 뒤집는 중 - \n");
    reverseArray(array, size);
    outputArray(array, size);
    printf("\n");
    return 0;
}

void inputArray(int *pa, int size){
    int i = 0;
    for (i = 0; i < size; i++) {
        scanf("%d", (pa + i));
    }
}

void reverseArray(int *pa, int size){
    int i = 0;
    for (i = 0; i < size/2; i++){
        int temp = 0;
        int sizeM = size - (i+1);
            temp = *(pa + i);
            *(pa + i) = *(pa + sizeM);
            *(pa + sizeM) = temp;
    }
}

void outputArray(int *pa, int size){
    int i = 0;
    printf("최종 배열의 내용 : ");
    for (i = 0; i < size; i++) {
        printf("%d ", *(pa + i));
    }
}
