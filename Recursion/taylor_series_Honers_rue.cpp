#include<iostream>

using namespace std;

//Time complexity is O(n)
double TaylorUsingRecu(int x, int n)
{ 
    static double s;

        if(n==0)
            return s;

        s = 1+ x*s/n;
        
        return TaylorUsingRecu(x, n-1);
}

int main()
{
    int x =0;
    int n = 0;
    cin>>x>>n;

    cout<<"Taylor = "<<TaylorUsingRecu(x,n)<<endl;

    return 0;

}