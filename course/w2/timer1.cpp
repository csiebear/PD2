#include <iostream>
using namespace std;

class Timer{
	public:
	void hello()
	{
		cout<<"Hello C++!"<<endl;
	}
};//end the class with semicolon

int main()
{
	Timer tmr;	//create object timr
	tmr.hello();	//call member function hello()
	return 0;
}

