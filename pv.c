#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("Enter a four digit number: \n");
scanf("%d",&a);
b=a/1000;
a=a%1000;
b=b*1000;
c=a/100;
a=a%100;
c=c*100;
d=a/10;
a=a%10;
e=a;
d=d*10;
printf("Place value of %d is = %d\n",b,b);
printf("Place value of %d is = %d\n",c,c);
printf("Place value of %d is = %d\n",d,d);
printf("Place value of %d is = %d\n",e,e);
return 0;
}
