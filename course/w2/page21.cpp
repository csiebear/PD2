class Cls{
	int x1,x2,x3;
	int fun(int a,int b)
	{
		int y,z;
		return 1;
	}
};//end of class

#include <iostream>

using namespace std;

int main()
{
	 Cls obj;//create an object named obj and its type is Cls
	 cout<<sizeof(Cls)<<endl;//output the size of class Cls
	 //In result,it only counts the variable x1,x2,x3
	 cout<<sizeof(obj)<<endl;//output the size of class Cls
	 //In result,it only counts the variable x1,x2,x3
	 return 0;
}
