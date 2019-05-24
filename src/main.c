#include<stdio.h>
#include"rsa.h"
#include<time.h> 
int main()
{
    srand((int)time(NULL));
    int p,q,e,m_c,mode,t;
    while(1){
    p=sushu(10,100);
    q=sushu(10,100);
    e=sushu(10,100);
    t=(p-1)*(q-1);
    if(e<t&&huzhi(e,t))
    break;
    }
    

    printf("两个素数是：%d,%d\n他们的乘积n是：%d\n(p-1)*(q-1)是：%d\ne是：%d\n",p,q,p*q,t,e);
    for (int i = 2;;++i)
		{
			if (judge(i,p))
			{
				printf("%d的最小本源根a：%d\n",p,i);
				break;
			}
		}
    return 0;
}