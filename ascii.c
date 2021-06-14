#include<stdio.h>
int main()
{
char a;
int z;
printf("Enter a character: \n");
scanf("%c",&a);
printf("The character is: %c\n",a);
printf("The ASCII value of is %d\n",a);
printf("The Octal of ASCII value is %o\n",a);
printf("The hexadecimal of ASCII value is %x\n",a);

printf("enter any ASCII value: ");
scanf("%d",&z);
printf("The character of entered ASCII value is %c\n",z);
return 0;
}
