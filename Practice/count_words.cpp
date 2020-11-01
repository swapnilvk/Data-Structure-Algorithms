#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int CountWords(string str)
{
    stringstream s(str);

    int count = 0;
    string word;

    while(s>>word)
    {
        count++;
    }

    return count;

}

int main()
{
    string str;
    str = "I am Swapnil Vivek Kulkarni";
    cout<<"Number of Words = "<<CountWords(str)<<endl;
    return 0;
}