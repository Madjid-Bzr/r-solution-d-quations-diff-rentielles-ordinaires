#include"ITimeDiscretization.h"


#ifndef COMPORTEMENT_UNIFOMTIMEDISCRETIZATION_H
#define COMPORTEMENT_UNIFOMTIMEDISCRETIZATION_H
	
class UniformTimeDiscretization :public ITimeDiscretization {


public:
  
  void set_initial(int ) override;

  //fonction finale
  void set_finale_time(int)override;
  
  void set_step(double )override;
 
};

#endif 
