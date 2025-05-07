//week12-3.cpp
//fibonacci數列 (前2項相加 等於下一項)
//要把她列出來 用for迴圈 陣列
#include<stdio.h>
int main()
{
    int a[30]={0,1};///陣列宣告 有前2項 後面補0
    printf("1 ");///最前面那項
    for(int i=2;i<30;i++){
        a[i]=a[i-1]+a[i-2];
        printf("%d ",a[i]);
    }
}
