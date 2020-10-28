#include<iostream>
using namespace std;

void TowerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if(n==1)
    {
        cout << "Move disk " << n << " from rod " << from_rod << 
                                " to rod " << to_rod << endl;
    }
    else
    {
        TowerOfHanoi(n-1,from_rod, aux_rod, to_rod);
         cout << "Move disk " << n << " from rod " << from_rod << 
                                " to rod " << to_rod << endl;
         TowerOfHanoi(n-1,aux_rod, to_rod,from_rod );

    }
}
int main()
{
    int n;
    cin>>n;
    TowerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}