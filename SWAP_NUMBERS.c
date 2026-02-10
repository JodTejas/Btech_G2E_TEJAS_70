#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("enter the value of two variables\n");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Swapped values\n a=%d & b=%d",a,b);
    return 0;
}