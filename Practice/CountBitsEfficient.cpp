//Write an efficient program to count number of 1s in binary representation of an integer.
#include<iostream>
using namespace std;

int CountBitsOfUInteger(int  n)
{
    int count =0;

   while(n)
   {
       count += n&1;
       n>>=1;
   }

    return count;
}

int main()
{
    int number = 14;
    int count =  CountBitsOfUInteger(number);

    cout<<count<<endl;
}