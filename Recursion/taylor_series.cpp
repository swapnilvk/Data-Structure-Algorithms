/*The Taylor Series for e^x

ex = 1 + x + (x^2/2!) + (x^3/3!) + (x^4/4!) + (x^5/5!) + ...
says that the function:e^x */

#include<iostream>

using namespace std;

double Taylor(const int & x, const int & n)
{
    static double power = 1;
    static double factorial = 1;

    if(n==0)
        return 1;
    else
    {
        double returnVal = Taylor(x, n-1);
        power = power * x;
        factorial = factorial* n;

        return returnVal+(power/factorial);
    }
}

int main()
{
    int x =0;
    int n = 0;
    cin>>x>>n;
    cout<<"Taylor = "<<Taylor(x, n)<<endl;

    return 0;
}