#include <iostream>
using namespace std;

class Cls{
	public:
//give the data member is constant an initial value
		Cls():x(3){}
		const int x;
};
int main(){
	Cls test;
	cout<<"Print the const data member x ="<<test.x<<endl;
	return 0;
}
