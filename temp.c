#include<stdio.h>
#include<math.h>

//celsius to farenheit//

int main()
{
float F,C,R,T;
printf("Enter temperature in degree celsius that you want to convert into Farenheit: ");
scanf("%f",&C);
F = (1.8 * C) + 32;
printf("The temperature in Farenheit will be: %f\n",F);

//farenheit to celsius//

printf("Enter temperature in degree Farenheit that you want to convert into Celsius: ");
scanf("%f",&R);
T = 0.556 * (R - 32);
printf("The temperature in celsius will be: %f\n",T);
return 0;
}
