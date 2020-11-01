#include<iostream>

using namespace std;

void Swap(int & a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Reverse( int arr[], int length)
{
    int i, j;
    for(i=0,j= length -1; i<j; i++,j--)
    {
        Swap(arr[i], arr[j]);
    }

    for(int i =0; i< length; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = { 1,2,3,4,5,6};
    Reverse(arr, 6);

    return 0;
}