//Write an efficient program to count number of 1s in binary representation of an integer.
#include<iostream>

using namespace std;

int CountBitsOfUInteger(const int & number)
{
    int count =0;
    int n = 1;

    if(number & 0)
    {
        count++;
    }

    for(int i=1;i<32;i++)
    {
        if(number & n)
        {
            count++;
        }
        n = n*2;
    }
    return count;
}

int main()
{
    int number = 14;
    int count =  CountBitsOfUInteger(number);

    cout<<count<<endl;
}