#include <vector>
#include <iomanip>
//manipulate the presentation of input/output
#include <iostream>
using namespace std;
int main()
{
	const int size = 8;
	int init_array[size] ={64, 24, 13, 9, 7, 23, 34, 47};
	vector<int> v(size);
	int insert, moveItem,move_times;
	cout << "Unsorted array:\n";
	for(int i=0; i<size; ++i)
	{
		v.at(i) = init_array[i];
		cout << setw(4) << v.at(i);
	}
	cout << endl;
	move_times=1;
	cout << "Step-by-step:\n";
	for(int next=1;next<size;++next)
	{
		insert = v.at(next);
		//get the number for insert
		//Its position is the next(from the head(1) to tail(size)).
		moveItem = next;
		//record the position we move now
		//test the two condition
		//1.is the moveItem bigger than 0(in this case always true
		//2.the the previous position(next-1)is bigger than insert
		//then we exchange the next and previous position
		while((moveItem>0) &&(v.at(moveItem-1) > insert))
		{
			cout<<"	The "<<move_times<<" times move the number"<<endl;
			cout<<"	Exchage the number in position"<<moveItem-1<<" "<<moveItem<<endl;
			cout<<"	The number is "<<v.at(moveItem-1)<<" "<<v.at(moveItem)<<endl;
			v.at(moveItem) = v.at(moveItem-1);
			--moveItem;
			move_times++;
		}
		v.at(moveItem) = insert;
		cout<<"The array after moving:";
		for(int i=0; i<size; ++i)
			cout << setw(4) << v.at(i);
		cout << endl;
	}
	return 0;
}
