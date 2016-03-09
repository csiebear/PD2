#include <iostream>
#include <string>
using namespace std;

class Timer{
	public:
	//the member function hello with parameter name
	void hello(string name)
	{
		cout<<"Hello"<<name<<"!"<<endl;
	}

};

int main()
{
	Timer tmr;//create the object
	string username;//the variable temporarily storing the username
	cout<<"Please enter your name:";
	getline(cin,username);
	tmr.hello(username);
	return 0;
}
