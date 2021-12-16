#include "./mylib/Problem.h"


enum class Discretization{Uniform, NonUniform};

void choixDiscretization(Discretization D, Problem P){
 
  switch (D) {

    case Discretization::NonUniform:{

	std::cout<<"non uniform"<<std::endl;

    };break;
   
    case Discretization::Uniform:{
	
	P.solve();   

    }; break;

  }
};


int main(){

	Problem p{};
	Timer T; 
	
	Discretization etat= Discretization::Uniform;
	T.start();

	 choixDiscretization(etat , p);
	
	T.stop();
	T.print();
 
  return 0;


}
