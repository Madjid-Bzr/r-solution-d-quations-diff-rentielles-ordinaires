cmake_minimum_required(VERSION 3.10)
enable_testing()



# set the project name
project(TD2)

# enable modern C++
set(CMAKE_CXX_STANDARD 17)

# add the executable
add_executable(${PROJECT_NAME} Main.cpp Problem.cpp Equation.cpp UniformTimeDiscretization.cpp Variable.cpp Timer.cpp)
#add_library(UiformTimeDiscretization UniformTimeDiscretization.cpp ITimeDiscretization.h)   


add_executable(Test test.cpp Problem.cpp Equation.cpp UniformTimeDiscretization.cpp Variable.cpp Timer.cpp)


       
find_package(GTest REQUIRED)

#target_link_libraries(${PROJECT_NAME} GTest::GTest GTest::Main)   
target_link_libraries(Test PUBLIC GTest::GTest GTest::Main )       

      
find_package(GTest REQUIRED)

add_test(Name Test )  

gtest_discover_tests(Test)


