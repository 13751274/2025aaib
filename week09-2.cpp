//week09-3.cpp
//yeh001_star
#include<stdio.h>
int main()
{
	printf("�п�J�j�p:");
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf(":%d\n",i);
	}
	for(int i=n-1;i>=0;i--){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf(":%d\n",i);
	}
}
