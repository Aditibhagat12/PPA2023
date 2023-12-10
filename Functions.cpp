#include<stdio.h>
void Fun_Value(int No)
{  No++; }
void Fun_Address(int *ptr)
{  (*ptr)++;  }
void Fun_Reference(int &ref)
{   ref++;    }

int main()
{
    int i = 10 , k = 10, j = 10;

    Fun_Value(i);
    Fun_Address(&k);
    Fun_Reference(j);
   
   printf("Call by Value : i %d\n",i);
   printf("Call by address : k %d\n",k);
   printf("Call by reference : j %d\n",j);

    return 0;
}