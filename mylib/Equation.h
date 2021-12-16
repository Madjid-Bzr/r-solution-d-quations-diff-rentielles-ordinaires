#include <iostream>
#include "variable.h"

#ifndef COMPORTEMENT_EQUATION_H
#define COMPORTEMENT_EQUATION_H

class Equation{

public:
	double y_n=1.0;
	double compute(Variable&,double,double );
	
	
	void compute_initial_condition(Variable& , double);
};
#endif 
