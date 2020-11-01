#include<iostream>

using namespace std;

#define out 0
#define in 1

int CountWords(string str)
{
    unsigned int length = str.length();
    unsigned int words = 0;
    unsigned int i =0;
    unsigned int state = out;

    while( i < str.length())
    {
        if(str[i]==' ' || str[i] == '\t' || str[i]=='\n')
            state = out;
        else if(state == out)
        {
            state = in;
            words++;
        }
        i++;
    }
    return words;
}

int main()
{
    string str;
    str = "I am Swapnil   Vivek \n Kulkarni";
    cout<<"Number of Words = "<<CountWords(str)<<endl;
    return 0;
}