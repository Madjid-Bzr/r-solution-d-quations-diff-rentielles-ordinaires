#include "./mylib/Problem.h"
#include "./mylib/variable.h"

void Problem::solve()  {

    std::cout<<std::endl;
    std::cout << " -------------- Solve problem --------------" << std::endl;
    std::cout<<std::endl;

//--------- INITIALISSATION DE POINTEUR DE LA CLASSE PROBLEME--------    	
    ptr_time_pro->set_initial(0);    
    ptr_time_pro->set_step(20);    
    ptr_time_pro->set_finale_time(10);
       	    
    auto x0=ptr_time_pro->get_initial();    

//------------ INSTANCE DE LA CLASSE VARIABLE ------
    Variable var(ptr_time_pro,0);
    Variable var_exa(ptr_time_pro,1);
        
//-------------- LANCEMENT DE LA METHODE COMPUTE_INITIAL_CONDITION DE LA CLASSE EQUATION         
    E.compute_initial_condition(var, x0);
    E.compute_initial_condition(var_exa, x0);

//--------- APPELE DE LA METHODE SET_TIME DE ITIMEDISCRETIZATION ------    
    ptr_time_pro->set_time();
    
//------------- RECUPERATION DE NOMBRE DE POINTS --------------    
    nb = ptr_time_pro->nb_points(); 
	 	 
	auto lambda = [](double y0, auto t0, auto t){ return y0 - t0 * t0 / 2 + t * t / 2 ; };

//---------- DEBUT DE CHRONOMÉTRE --------------
					T.start();  

	for (int i = ptr_time_pro->iteration(x0) +1 ; i < nb; i++)
    { 
		time_t0 = ptr_time_pro->time[i-1];
		time_t1 = ptr_time_pro->time[i];

//------DT LE PAS DE TEMPS ENTRE T1 ET T0--------
		dt = time_t1 -time_t0;
		var.vec[i] = E.compute(var,time_t1, dt);	
		var_exa.vec[i]=	lambda(E.y_n, x0, time_t0);	 		 
    }	

					T.stop();	
//---------- FIN DE CHRONOMÉTRE --------------


	std::cout<<" ------- Affichage de la solution ----------  "<<std::endl;
	std::cout<<std::endl;
	var.print();
	
	std::cout<<std::endl;
	std::cout<<" ----- Affichage de la solution exact ------  "<<std::endl;
    std::cout<<std::endl;
    var_exa.print();


//---------- PRINT DE CHRONOMÉTRE --------------
					T.print();


};



