//Find max and min element from the array with single scan
#include<iostream>

using namespace std;

int main()
{
    int array[10] = {1, 2, 4, 6, 8,3, 5,7, 10, -9};
    int max = array[0];
    int min = array[0];
    
    for (int i = 0; i < 10; i++)
    {
        if(array[i]<min)
        {
            min = array[i];
        }
        else if(array[i]>max)
        {
            max= array[i];
        }
    }

    cout<<"Max = "<<max<<endl<<"Min ="<<min<<endl;
    
    return 0;
}