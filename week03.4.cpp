///week03.4.cpp
///M90H044
#include <stdio.h>
int main()
{
    int ans=0;///���ץ[��o�̭�
    int N;///���@�Ӿ��N
    scanf("%d", &N);///Ū�JN
    ///�H�����j��A�q1�}�l�A<=
    for(int i=1; i<=N; i++){
        ans += i;///�j�餤�� �ק� ans
    }
    printf("%d",ans);
}///�j��᭱�A�L�X ans
