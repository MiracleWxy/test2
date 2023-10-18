#include "Clock.h"
#include <iostream>
using namespace std;

int main(void)
{
	Clock MyClock1;
	MyClock1.ShowClock();
        //MyClock1.Hour
	MyClock1.SetClock(15,32,41);
	MyClock1.ShowClock();
	cout<<endl<<endl;
	
	Clock MyClock2(12,13,14);
	MyClock2.ShowClock();
	MyClock2.SetClock(18,21,19);
	MyClock2.ShowClock();
	cout<<endl<<endl;

	Clock MyClock3(MyClock2);
	MyClock3.ShowClock();
	MyClock3.SetClock(21,43,28);
	MyClock3.ShowClock();
	cout<<endl<<endl;
	

	return 0;
}
