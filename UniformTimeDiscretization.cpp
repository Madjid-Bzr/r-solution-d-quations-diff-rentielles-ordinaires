#include<iostream>
#include"./mylib/UniformTimeDiscretization.h"


 void UniformTimeDiscretization::set_initial(int i){
    initial=i;    
 
  };

 void UniformTimeDiscretization::set_finale_time(int f){
    finale_time=f;
 
  };
  
  void UniformTimeDiscretization::set_step(double val){
    step_time=val;	
   
  };
  
 int ITimeDiscretization::get_initial(){ return initial;};
 int ITimeDiscretization::get_finale_time(){return finale_time;};
 double ITimeDiscretization::get_step(){return step_time;};
 
 
  
 int ITimeDiscretization::nb_points(){
 
    return 10;
  };
  
  
  int ITimeDiscretization::iteration(int t_n){
  
 	auto t1 = std::lower_bound(time.begin(), time.end(), t_n) ;
	
	return (t1 - time.begin()) ; 
  
  }


  void ITimeDiscretization::set_time(){
      	
      	nb=nb_points() + 1;
      	
	time.resize(nb); 
	time[0] = get_initial() ; 
	
	current_time = time[0] ; 

	
	int i=1;
	while(i < nb ){
	
		dt =(get_finale_time() - get_initial())/get_step(); 
		current_time += dt ; 
		time[i] =  current_time ;
				
		i++; 
	}
	

  };
