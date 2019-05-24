#include"rsa.h"

int rsa(int p,int q,int e,int m_c,int mode)
{
    int n=p*q;
    int t=(p-1)*(q-1);
    int M_C;
    if(e<1||e>t)
    {
        printf("e is error;\n");
        return -1;
    }
    int d=1;
    while(((e*d)%t)!=1)
    d++;
    switch(mode)
    {
        case 1://加密
            M_C=candp(m_c,e,n);
            break;
        case 2://解密
            M_C=candp(m_c,d,n);
            break;
    }
    return M_C;
}

int candp(int a,int b,int c)
{
    int r=1;
    while(b!=0)
    {
        r=r*a;
        r=r%c;
        b--;
    }
    
    return r;
}

int sushu(int m,int n)
{
    int rand=random(m,n);
    while(!is(rand))rand++;
    return rand;
}

int is(int n)
{
    if(n<=1)return 0;
    for(int i=2;i<=(double)sqrt(n);i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}

bool judge(int a,int P)//
{
    int j=2;
    int elem[1000];
	int elemNum = 0;
    while(P!=1) {
    if(P%j==0)
    {
    P =P / j;
    elem[elemNum ++] =j;
    // printf(" %d ",j);
    }
    else
    break;
    // if(P!=1)
    // printf("*");
    j++;
    }
	bool flag = true;
	for (int i = 0; i < elemNum; ++ i)
	{
		if (candp(a,(P-1)/elem[i],P) == 1)
		{
			flag = false;
			break;
		}
	}
	return flag;
}


int random(int m,int n) 
{  
return(int)(m+rand()%n); 
} 

int huzhi(int a,int b)
{
    int t;
    if(a<b){
        t=a;
        a=b;
        b=t;
    }
    while(t=a%b)
    {
        a=b;
        b=t;
    }
    if(b==1)
    return 1;
    else 
    return 0;
}