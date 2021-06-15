#include<stdio.h>
#include<math.h>
int main()
{
int a,p,q,r,w,x,y,z,rev,temp=0;
printf("Enter any four digit number: ");
scanf("%d",&a);
w=a/1000;
printf("The face value of %d is %d\n",a,w);
p=a%1000;
x=p/100;
printf("The second digit face value of %d is %d\n",a,x);
q=p%100;
y=q/10;
printf("The third digit face value of %d is %d\n",a,y);
r=q%10;
z=r/1;
printf("The fourth digit face value of %d is %d\n",a,z);
printf("The reverse of entered digit is %d%d%d%d\n",z,y,x,w); // galat fayda uthaya program ka :-)//
//legal way to get reverse//
while (a>=1)
{
rev = a%10;
temp = temp * 10 +rev;
a=a/10;
}
printf("The reverse of the entered number is :%d\n",temp);
return 0;
}

