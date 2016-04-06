#include <iostream>
using namespace std;
class Cls {
public: Cls():y(4){}
	static const int x = 3;
	const int y;
};
int main()
{
	Cls obj;
	cout << "sizeof(Cls) = " << sizeof(Cls) << endl;
	cout << "sizeof(obj) = " << sizeof(obj) << endl;
	cout << "The const int y = "<<obj.y<<endl;
	
	return 0;
}
