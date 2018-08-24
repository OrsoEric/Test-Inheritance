# Test-Inheritance
Test inheritance in C++  
This is just to build up my knowledge in C++  
A few constructs for inheritance are not trivial in C++  
1) How do I call an initialized constructor of the Base class automatically when i call the initialized constuctor of the derived class?  
2) How do I handle methods with the same name in both derived and base classes?  
3) In which order base constructor and derived constructor are called?  
4) In which order base deconstructor and derived deconstructor are called?  

Answers  
1) Derived Constructor ( declare derived args ) : Base Costructor( use base args)  
2) my_method, Base::my_method  
3) Base Costructor -> Derived Costructor  
4) ~Derived Deconstructor -> ~Base Deconstructor  
