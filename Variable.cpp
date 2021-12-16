#include "./mylib/variable.h"
#include<cstdio>
#include <fstream>
  
  

  Variable::Variable(std::shared_ptr<ITimeDiscretization> ptr, int i){
  	choix=i;
  	ptr_time_var = ptr;
	vec.resize(ptr_time_var->nb_points());
 }
  
  double Variable::operator()(double t_n){	

	return vec[ptr_time_var->iteration(t_n)] ; 
  };
  
  void Variable::print(){
      for (int i = ptr_time_var->iteration(ptr_time_var->get_initial())  ; i < ptr_time_var->nb_points(); i++)
      { 
		auto time_t1 = ptr_time_var->time[i];
		printf(" --- compute equation at time : %.2f == %.2f \n",time_t1,vec[i]);
		 		 
       }	
    	
    	std::string nom_fichier_sortie ; 
	if (choix == 0){
		nom_fichier_sortie = "1er_version.txt";
	}
	else if(choix==1){
		nom_fichier_sortie = "lambda_version.txt";
	}
	std::ofstream of (nom_fichier_sortie, std::ofstream::out);
	
	for (int i = 0 ; i < vec.size(); i++){
		of <<i <<" "<< vec[i] << std::endl ; 
	}
	of.close();


 }
