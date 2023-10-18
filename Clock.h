class Clock
{
	public:

		Clock(int NewH=0,int NewM=0,int NewS=0)
		{
			Hour = NewH;
			Minute = NewM;
			Second = NewS;
			
		}	
		Clock(Clock &C);
		~Clock();
		
		void SetClock(int NewH,int NewM,int NewS);
               
		void ShowClock();

	private:

	 int Hour;
	 int Minute;
	 int Second;
};
