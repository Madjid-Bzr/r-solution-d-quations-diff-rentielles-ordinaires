#include <vector>
#ifndef COMPORTEMENT_ITIMEDISCRETIZATION_H
#define COMPORTEMENT_ITIMEDISCRETIZATION_H

class ITimeDiscretization
	
{
protected:
   	int initial;
    	int finale_time;
    	double step_time;
    	
    	int nb=0;      	
	double current_time = 0.0; 
	double dt=0.0;
    		
public:
    	virtual void set_initial (int ){};
    	virtual void set_finale_time( int ){};
    	virtual void set_step(double){};
    	std::vector<double> time ; 
    	
  	
  	int get_initial();
  	int get_finale_time();
  	double get_step();
  	
  	int nb_points();
  	int iteration(int);
  	void set_time();
  	
  	  
};

#endif 
