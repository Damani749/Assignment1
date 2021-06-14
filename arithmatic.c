#include<stdio.h>
int main()
{
float a,b,add,diff,prod;
printf("Enter any two numbers: \n");
scanf("%f %f",&a,&b);
add = a+b;
diff= a-b;
prod= a*b;
printf("addition of %f and %f is %f \n",a,b,add);
printf("difference of %f and %f is %f \n",a,b,diff);
printf("product of %f and %f is %f \n",a,b,prod);
return 0;
}
