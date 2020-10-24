//C(n,r)=n!/(n−r)!*r!
//For more information refer: https://www.mathplanet.com/education/algebra-2/discrete-mathematics-and-probability/permutations-and-combinations
#include<iostream>

using namespace std;

int Fact(int n)
{
    if(n==0)
        return 1;
    else
        return Fact(n-1) * n;
    
}

int nCr(int n, int r) //Using factorial recurrion
{
    int num = 0;
    int den =0;
    num = Fact(n);
    den = Fact(r) * Fact(n-r);
    return num/den;
}

int NCR(int n, int r) //Using Pascals traingle method 
{
    if(r==0 || n == r)
        return 1;
    else
        return NCR(n-1, r-1) + NCR(n-1, r);
}

int main()
{
    cout<<nCr(7,3)<<endl;
    cout<<NCR(7,3)<<endl;
    return 0;
}