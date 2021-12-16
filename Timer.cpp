#include "./mylib/Timer.h"


Timer::Timer(){

	time_start = std::chrono::steady_clock::now() ; 
	time_stop = std::chrono::steady_clock::now();
	std::chrono::duration<double>  duree ; 
}

void Timer::start(){
  time_start = std::chrono::steady_clock::now();
   };
void Timer::stop(){ 
 time_stop = std::chrono::steady_clock::now();
  };
void Timer::print(){
	duree = std::chrono::duration_cast<std::chrono::duration<double>>(time_stop - time_start);
	
	std::cout << std::endl ; 	
	std::cout << " La durée d'éxécution  : " << duree.count()<< std::endl ; 
};


