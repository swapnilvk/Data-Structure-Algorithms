#include<iostream>
#include<fstream>

using namespace std;

class Student
{
public:
	int roll = 0;
	string name;
	string branch;

	friend ofstream & operator <<(ofstream & ofs, Student & s);
	friend ifstream & operator >>(ifstream & ifs, Student & s);
};

ofstream & operator <<(ofstream & ofs, Student &s)
{
	ofs<<s.name<<endl;
	ofs<<s.roll<<endl;
	ofs<<s.branch<<endl;

	return ofs;
}

ifstream & operator >> (ifstream &ifs, Student & s)
{
	ifs>>s.name>>s.roll>>s.branch;
	return ifs;
}
int main()
{
	Student s1;
	ofstream ofs("student.txt", ios::trunc);

	s1.name="Swapnil";
	s1.roll = 100;
	s1.branch="Computer";

	ofs<<s1;
	ofs.close();

	ifstream ifs("student.txt");
	ifs>>s1;

	cout<<"Name "<<s1.name<<endl;
	cout<<"Roll "<<s1.roll<<endl;
	cout<<"Branch "<<s1.branch<<endl;

	ifs.close();
	return 0;
}

