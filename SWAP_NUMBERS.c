#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter both variables :- ");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Values After Swapping a=%d and b=%d",a,b);
    return 0;
}