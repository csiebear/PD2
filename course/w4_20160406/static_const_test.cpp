#include <iostream>
using namespace std;
class Cls {
public:
	static const int x = 3;
//the public static data member can also be accessed outside of the class
};


int main()
{
	Cls obj;
	cout << "sizeof(Cls) = " << sizeof(Cls) << endl;
	cout << "sizeof(obj) = " << sizeof(obj) << endl;
	cout <<"The member data of obj x= "<<obj.x<<endl;
//using the class name and binary scope resolution operator for accessing
	cout <<"Access out side of the class,x= "<<Cls::x<<endl;
	return 0;
 }
