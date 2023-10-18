#include "Clock.h"
#include <iostream>
using namespace std;

Clock::Clock(Clock &C)
{
	Hour = C.Hour; 
	Minute = C.Minute;
	Second = C.Second;

}

Clock::~Clock()
{
	cout<<"~Clock()"<<endl;
}

void Clock::SetClock(int NewH,int NewM,int NewS)
{
	Hour = NewH;
	Minute = NewM;
	Second = NewS;
	cout<<"SetClock()"<<endl;
}

void Clock::ShowClock()
{
	cout<<"Clock:"<<Hour<<":"<<Minute<<":"<<Second<<endl;

}
