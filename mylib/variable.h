#include <iostream>
#include"ITimeDiscretization.h"
#include<vector>
#include <memory>

#ifndef COMPORTEMENT_VARIABLE_H
#define COMPORTEMENT_VARIABLE_H


class Variable{

public:
  
  
  Variable()=default; 

  
  Variable(std::shared_ptr<ITimeDiscretization>,int );
  
  double operator()(double t_n);
  void print(); 
  //void set_time();

  std::shared_ptr<ITimeDiscretization> ptr_time_var; 
  std::vector<double> vec;
  int choix;
  
 
};

#endif 


