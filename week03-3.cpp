///week03-3.cpp
#include<stdio.h>
int main()
{///從0開始，不要超過<15就跑15次
    for(int i=0;i<15;i++){
        printf("%d ",i);
    }///電腦的for迴圈，從0開始

    printf("\n"); ///跳行

    ///人類麻煩，從1開始數
    ///問寫多少，就跑幾次
    for(int i=1;i<=5;i++){
        printf("%d ",i);
    }
}
