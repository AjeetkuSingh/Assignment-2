//Assignment 2 Sol 1//
/*
#include<stdio.h>
int main()
{
int x=123;
printf("%d",x%10);
return 0;
}
*/

//Sol 2//
/*
#include<stdio.h>
int main()
{
    int x=123;
    printf("%d",x/10);
    return 0;
}
*/

//Sol 3//
/*
#include<stdio.h>
 int main()
{
int a=10, b=20;
printf("Before swap a=%d b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swap a=%d b=%d",a,b);
return 0;
}
*/

//Sol 4//
/*
#include<stdio.h>
 int main()
{
int a=10, b=20;
printf("Before swap a=%d b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swap a=%d b=%d",a,b);
return 0;
}
*/

//Sol 5//
/*
#include<stdio.h>
int main()
{
    int x=123;
    int rem=0, sum=0;
    rem=x%10;
    x=x/10;
    sum=sum+rem;
    rem=x%10;
    x=x/10;
    sum=sum+rem;
    rem=x%10;
    x=x/10;
    sum=sum+rem;
    printf("%d",sum);
    return 0;
}
*/

//Sol 6//
/*
#include<stdio.h>
int main()
{
    char a='A';
    printf("%d",a);
    return 0;
}
*/

//Sol 7//
/*
#include <stdio.h>

int main()
{
    int num;


    printf("Enter any number: ");
    scanf("%d", &num);


    if(num & 1)
        printf("LSB of %d is set (1).", num);
    else
        printf("LSB of %d is unset (0).", num);

    return 0;
}
*/

//Sol 8//
/*
#include<stdio.h>

int main()
{
   int n;

   printf("Enter an integer\n");
   scanf("%d",&n);

   if ( n & 1 == 1 )
      printf("Odd\n");
   else
      printf("Even\n");

   return 0;
}
*/

//Sol 9//
/*
#include <stdio.h>

int main()
{
    int integerType;
    char charType;
    float floatType;
    double doubleType;
    printf("Size of int is: %ld\n",
           sizeof(integerType));
    printf("Size of char is: %ld\n",
           sizeof(charType));
    printf("Size of float is: %ld\n",
           sizeof(floatType));
    printf("Size of double is: %ld\n",
           sizeof(doubleType));

    return 0;
}
*/

//Sol 10//
/*
#include<stdio.h>
int main()
{
    int x=2345;
    x=x/10;
    x=x*10;
    printf("%d",x);
    return 0;
}
*/

//Sol 11/
/*
#include<stdio.h>
int main()
{
    int x=234;
    int n=9;
    x=x*10;
    x=x+n;
    printf("%d",x);
    return 0;
}
*/

//Sol 12//
/*
#include<stdio.h>
int main(void){


	float dollars;

	printf("Please enter dollars:");
	scanf("%f", &dollars);

	float rupees = dollars * 76.23;

	printf("%f Rupees", rupees);
	return 0;
}
*/

//Sol 13//
#include<stdio.h>
int main()
{
    int x=123,q,r
    q= x/10;
    r= x%10;
    x= r*100+q;
    printf("%d",x);
    return 0;
}
