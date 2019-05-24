#include<stdio.h>
#include<math.h>
#include<time.h> 

int rsa(int p,int q,int e,int m_c,int mode);
int candp(int a,int b,int c);//进行加密或解密处理
int sushu(int m,int n); //得到一个素数
int is(int n);//判断是不是素数
bool judge(int a,int P);//判断是不是本源根
int random(int m,int n);//随机数产生器 //产生m~n之间的一个随机数
int huzhi(int a,int b);