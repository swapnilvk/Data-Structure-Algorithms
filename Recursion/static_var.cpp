#include <iostream>

using namespace std;

int fun(int n)
{
    static int x = 0;
    if(n>0)
    {
        x++;
        return fun(n-1) + x;
    }
    return 0;
}

int main()
{
    int n =5;
    cout<<fun(n)<<endl;
    
    return 0;
}

/*
X is static variable and will be added while returning from the function call so X  is always 5
                    f(5) = 25
                    /
                f(4) + 5 = 25
                /
            F(3)+ 5 = 20
            /
        f(2) + 5 = 15
         /
    F(1) + 5 = 10
    /
F(0) + 5  = 5

Time complexty is O(n)

[
    1              n=0
    T(n-1) + 1     n>0
]


Output is 25
*/