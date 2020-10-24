#include<iostream>

using namespace std;
//Reccursion
int FibonancciRecu(int number) //Time complexity is O(2^n)
{
    if(number <2)
        return number;
    else
        return FibonancciRecu(number-2)+FibonancciRecu(number-1);
}
//Usning loop
int FibonancciLoop(int number) //Time complexity is O(n)
{
    if(number< 2)
        return number;

    int sum =0;
    int t0 =0;
    int t1 =1;

    for(int i=2;i<=number; i++)
    {
        sum = t0 + t1;
        t0 = t1;
        t1 = sum;
    }

    return sum;
}

int arr[10];
//Using memorization and hashing
int FibonancciMemo(int number) //Time complexity is O(n)
{

    for(int i=0; i<10; i++)
        arr[i] = -1;

    if(number <2)
    {   arr[number] = number;
        return number;
    }
    if(arr[number -2] == -1)
    {
        arr[number -2] = FibonancciRecu(number-2);
    }
    if(arr[number -1] == -1)
    {
        arr[number -1] = FibonancciRecu(number-1);
    }
    return arr[number -2] + arr[number -1];
}

int main()
{
    cout<<FibonancciRecu(7)<<endl;
    cout<<FibonancciLoop(7)<<endl;
    cout<<FibonancciMemo(7)<<endl;
}