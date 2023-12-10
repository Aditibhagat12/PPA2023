#include<iostream>
using namespace std;

template<class T>
T Addition(T no1, T no2)
{
    T ans;
    ans = no1+no2;
    return ans;
}


int main()
{
    int iRet = Addition(10,11);
   float fRet = Addition(10.0f,11.0f);
   double dRet = Addition(10.0,11.0);

   cout<<iRet<<"\n";
   cout<<fRet<<"\n";
   cout<<dRet<<"\n";


    return 0;
}