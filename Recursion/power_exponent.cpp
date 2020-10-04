#include<iostream>

using namespace std;

//Time complexity  = O(n+1) +1 +1 = O(n)
long Power(const int &m, const int & n)
{
    if(n==0)                        //1
        return 1;                  //1
    else
        return Power(m,n-1)*m;    // n-1
}

//Time complexity  = O(n+1) +1 +1 = O(n)
long PowerOptimized(const int &m, const int & n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)
        return PowerOptimized(m*m,n/2); 
    else
        return m * PowerOptimized(m*m, n/2);
}

int main()
{
    int n = 0;
    int m = 0;
    cin>>m>>n;

    cout<< "Power= "<<Power(m,n)<<endl;
    cout<< "PowerOptimized= "<<PowerOptimized(m,n)<<endl;

    return 0;
}