#include "Equation.h"
#include"UniformTimeDiscretization.h"
#include <memory>
#include "Timer.h"
#include "variable.h"

#ifndef COMPORTEMENT_PROBLEM_H
#define COMPORTEMENT_PROBLEM_H

class Problem{

private:
	
	int nb = 0; 
	double time_t0 = 0;
	double time_t1 = 0 ; 
	double dt = 0 ; 
 

public:
    
    Equation E;
	std::shared_ptr<ITimeDiscretization> ptr_time_pro = std::make_shared<UniformTimeDiscretization>();
       
	void solve( );
	Timer T;
};
#endif 


