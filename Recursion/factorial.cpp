//Canculate the Factorial of number
#include<iostream>

using namespace std;

//Time complexity  = O(n+1) +1 +1 = O(n)
long Factorial(const long & n)
{
    long fact = 1
    ;                  //1                  
    for(long i =1; i<=n; i++)      // n+1
        fact*=i;

    return fact;                  //1
}

//Time complexity  = O(n-1) +1 +1 = O(n)
//Space complexity is more as stack is used here 
long FactorialRecur(const long & n)
{
    if(n==0)                                //1
        return 1;                           //1
    else
        return FactorialRecur(n-1)*n; // n-1     
}

int main()
{
    long n = 0;

    cin>>n;
    cout<<"Factorial = "<<Factorial(n)<<endl;
    cout<<"Factorial = "<<FactorialRecur(n)<<endl;

    return 0;
}