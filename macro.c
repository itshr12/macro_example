#include<stdio.h>
#define UPPER(x)(x>=65&&x<=90?1:0)
#define LOWER(x)(x>=97&&x<=122?1:0)
#define ALPHAP(x)(UPPER(x)&&LOWER(x))
#define BIG(x,y)(x>y?x:y)
int main()
{
    char ch;
    int q,w,e;
    printf("enter alphabate :");
    scanf("%c",&ch);
    if(UPPER(ch)==1)
    printf("upper letter\n");
    if(LOWER(ch)==1)
    printf("lower letter\n");
    if(ALPHAP(ch)!=0)
    printf("Other then alphabate\n");
    printf("enter two number :");
    scanf("%d %d",&q,&w);
    e=BIG(q,w);
    printf("big number is %d",e);

}