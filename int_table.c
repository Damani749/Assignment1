#include<stdio.h>
#include<math.h>
int main()
{
int a,z,s;
printf("Enter the integer whose table you want to see: ");
scanf("%d",&a);
for(z=1;z<=10;z++)
	{
	s = a * z;
	printf("%d * %d = %d\n",a,z,s);
	}
return 0;
}
	
