//Canculate the sum of natural numbers in three ways
#include<iostream>

using namespace std;
//Time complexity  = O(1)
int SumOfNaturalNum(const int & n)
{
    return n*(n+1)/2;           //1
}
//Time complexity  = O(n+1) +1 +1 = O(n)
int SumOfNaturalNumLoop(const int & n)
{
    int sum = 0;                  //1                  
    for(int i =1; i<=n; i++)      // n+1
        sum+=i;

    return sum;                  //1
}

//Time complexity  = O(n-1) +1 +1 = O(n)
//Space complexity is more as stack is used here 
int SumOfNaturalNumRecur(const int & n)
{
    if(n==0)                                //1
        return n;                           //1
    else
        return SumOfNaturalNumRecur(n-1)+n; // n-1
      
}

int main()
{
    int n =0;

    cin>>n;
    cout<<"Sum = "<<SumOfNaturalNum(n)<<endl;
    cout<<"Sum = "<<SumOfNaturalNumLoop(n)<<endl;
    cout<<"Sum = "<<SumOfNaturalNumRecur(n)<<endl;

    return 0;
}