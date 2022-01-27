#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

void f( )
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
	// string str;
	// cout<<"Enter string: ";
	// getline(cin,str);

	// stringstream ss(str);
	// string token;
	// vector<string> tokens;
	// while(getline(ss, token, ' ')) {
	// 	tokens.push_back(token);
	// }

	// for(auto iter : tokens) {
	// 	cout<<iter<<", ";
	// }
	// cout<<endl;

	return 0;
}