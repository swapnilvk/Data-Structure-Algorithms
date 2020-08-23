#include <iostream>

using namespace std;

bool BinarySearch(const int list[], const int & key)
{
    int low = 0;
    int high = 5;

    while(low<=high)
    {
        int mid = (high + low) / 2;

        if(key == list[mid])
        {
            cout << key<<" is found at location "<<mid<<endl;
            return true;
        }
        else if (key< list[mid])
        {
            high = mid -1;
        }
        else if(key>list[mid])
        {
            low = mid +1; 
        }      
    }
    cout <<key <<" not found in list"<<endl;
    return false;
}

int main()
{
    int list[] = {10, 20, 30 ,40, 50, 60, 70};
    int key = 0;

    cout<<"\n Enter number to search "<<endl;
    cin>>key;

    BinarySearch(list, key);
    
    return 0;
}