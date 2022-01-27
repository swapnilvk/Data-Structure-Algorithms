#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

void f()
{
  uint v[10];
uint i = 0;
while (i < 10){
	  v[i] = i++;
	  cout<<v[i] <<endl;
}
}

int main(){

	f();
	return 0;
}
