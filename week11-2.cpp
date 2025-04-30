///week11-2.cpp
///函式宣告 函式定義 函式呼叫
#include<stdio.h>
int addnum(int a,int b)
{
    printf("現在進入addnum()函式裡a:%d b:%d\n",a,b);
    int x;
    x=a+b;
    printf("兩數相加後，得到數值%d將return回傳\n",x);
    return x;///回傳給剛剛較用的地方
}

int main()
{
    int ans=addnum(10,30);
    printf("%d",ans);
}
