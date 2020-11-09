//Given two sorted arrays, the task is to merge them in a sorted manner.
#include<iostream>

#define size 5 
using namespace std;

void Merge(int (&arr1)[5], int (&arr2)[5]) //send array as referance argument 
{
    int arr3[10]={0};

    int i =0;
    int j=0;
    int k=0;

    while(i<size && j<size)
    {
        if(arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    for(;i<10; i++)
        arr3[k++] = arr1[i];
    for(;j<10; j++)
            arr3[k++] = arr2[j];

    for(int n=0; n<10; n++)
    {
        cout<<arr3[n]<<endl;
    }
}

int main()
{
    int arr1[5] = {2,4,6,8,10};
    int arr2[5] = {1,3,5,7,9};

    Merge(arr1, arr2);

    return 0;
}

//Time complexity is = Thita(m+n) 