#include <iostream>
#include <ctime>//the time.h in c++
#include <unistd.h>//the Unix Standard the API for Unix Os

using namespace std;

class Timer{
	public:
		//use the set function to initial the start_ts
		void setStart(time_t ts){
			start_ts=ts;
		}
		//the get function return the value
		time_t getStart(){
			return start_ts;
		}
		//calculate the time between the now and start time
		int getElapsedTime(){
			return time(NULL)-getStart();
		}
	//store the member data
	private:
		time_t start_ts;
};

int main(){
	Timer tmr;
	time_t ts;

	ts=time(NULL);
	tmr.setStart(ts);
	sleep(2);

	cout<<"Start Time:"<<tmr.getStart()<<endl;
	cout<<"ElapsedTime():"<<tmr.getElapsedTime()<<endl;
	return 0;
}

