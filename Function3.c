#include<stdio.h>

int Addition (int No1,int No2)

 {
  int Sum = (No1 + No2);
  Sum = 0;
  return Sum;
  

 }





int main()
{
  int Value1 = 4;
  int Value2 = 9;
  int Ans = 0;
   
   Ans= Addition(Value1,Value2);

   printf ("%d",Ans);

   return 0;
}