//
//  main.c
//  3052
//
//  Created by SeongBinYoon on 2020/07/18.
//  Copyright © 2020 SeongBinYoon. All rights reserved.


#include <stdio.h>

int main(void){
    int a, r;
    int cnt = 0;
    int arr[44] = {0};
    for(int i = 0; i < 10; i++){
        scanf("%d", &a);
        r = a % 42;
        if(arr[r] == 0){
            arr[r] = 1; //채우면 1, 비어있으면 0
            cnt += 1;
        }
    }
    printf("%d\n" ,cnt);
}
