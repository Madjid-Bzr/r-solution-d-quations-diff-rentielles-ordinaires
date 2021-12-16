#include"gtest/gtest.h"
#include"./mylib/Problem.h"


Problem p{};
Equation E{};

Variable var(p.ptr_time_pro,0);


TEST(UnitaryTest,ProblemTest){
 p.solve();
}


TEST(MainFunctionTest,EquationTestCompute){
  
  E.compute(var,1.0,0.02);
  E.compute(var,1.5,0.3);
  E.compute(var,3.2,0.7);
  
  }

TEST(MainFunctionTest,EquationTestCompIniCond){
  
  E.compute_initial_condition(var,1.0);
  E.compute_initial_condition(var,3.0);
  E.compute_initial_condition(var,2.5);
  }
