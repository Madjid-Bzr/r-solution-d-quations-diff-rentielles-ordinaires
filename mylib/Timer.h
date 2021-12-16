#include <chrono>
#include <iostream>


class Timer {
	
	private:
	
		std::chrono::steady_clock::time_point  time_start; 
		std::chrono::steady_clock::time_point  time_stop;
		std::chrono::duration<double>  duree ; 	

	public : 	
		Timer();
		void start();
		void stop();
		void print();		
		

};
