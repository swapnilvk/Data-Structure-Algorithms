//Template arithametic operations
#include<iostream>

using namespace std;
template <class T>
class Arithametic {
	T a;
	T b;
public:
	void get(const T & x, const T & y);
	T add();
	T sub();
};

template <class T>
void Arithametic <T> :: get(const T & x, const T & y){
	a=x;
	b=y;
}

template <class T>
T Arithametic <T> :: add() {
	T z = a+b;
	return z;
}

template <class T>
T Arithametic <T> :: sub() {
	T z = a-b;
	return z;
}

int main() {
	Arithametic<int> obj;
	obj.get(10, 20);
	cout<<obj.add()<<endl;
	cout<<obj.sub()<<endl;

	Arithametic<float> objf;
	objf.get(3.14, 3.14);
	
	cout<<objf.add()<<endl;
	cout<<objf.sub()<<endl;
}
