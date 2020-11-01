//Program to identify array is sorted or not, if it is sorted then insert element at appropriate location

#include<iostream>

using namespace std;

bool IsSorted(int arr[], int length) //Time complexity O( n)
{
    for(int i=0;i<length-1; i++)
    {
        if(arr[i]>arr[i+1])
            return false;
    }

    return true;
}

void InsertSort(int(& arr)[10], int & length, const int & no)
{
    int j = length -1;

    while(j>=0 && arr[j] > no)
    {
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = no;
    length++; 

    for(int i =0; i<length; i++)  
        cout<<arr[i]<< " "; 
}

int main()
{
    int length = 6;
    int arr[10] = { 1,3,5,7,9,11};
    cout<<IsSorted(arr,6)<<endl;
    InsertSort(arr,length, 6);

    return 0;
}