#include "./mylib/Equation.h"
#include<cstdio>

double Equation::compute( Variable& var,double T, double dt){
	
	//$y_{n+1} = y_n + \Delta t\times t_n$.
	double y_n = var(T - dt);
	double y_n1 =y_n+ dt * T ;

 	//printf(" --- compute equation at time : %.2f == %.2f \n", T,y_n1);
	
	return y_n1;
};

void Equation::compute_initial_condition(Variable& var, double t_0){

	
	int i0 = var.ptr_time_var->iteration(t_0) ; 
	
	var.vec[i0] = y_n ;
	//printf(" --- compute equation at time : %.2f == %.2f \n", t_0,y_n);
		
}
