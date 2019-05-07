http://www.java2s.com/Tutorial/Cpp/0180__Class/Catalog0180__Class.htm
Paradebeispiel: http://www.java2s.com/Tutorial/Cpp/0180__Class/Anarrayofpointerstoobjects.htm
#################################################################

https://www.geeksforgeeks.org/c-classes-and-objects/
http://www.trytoprogram.com/cplusplus-programming/class-object/
https://www.studytonight.com/cpp/static-keyword.php

Class: building block of c++, user defined data type. Blueprint for creating objects/instances. 
Object is an instance of a Class. Class has own data members and functions.
Memory wird erst dann allokiert, wenn das Objekt initialisiert.

Access modifier: private, public, protected
Access data members and functions with "." obj.printName()
C++ hat keine automatic garbage collection wie Java, sondern einen C++ Destructor.
######################################################################
define outside of class: scope resolution :: operator along with class name and function name
void Geeks::printname() 
{
muss aber dann in der class vorher deklariert werden
returnType name();
  
######################################################################  
Destructor is a special class function which destroys the object as soon as the scope of object ends. The destructor is called automatically by the compiler when the object goes out of scope.
  class A{    
    A()// constructor
    {        cout << "Constructor called";    }

    ~A()    // destructor
    {        cout << "Destructor called";    }
};

int main()
{
    A obj1;   // Constructor Called
    int x = 1
    if(x)
    {
        A obj2;  // Constructor Called
    }   // Destructor Called for obj2
} 
  ######################################################################  
Structs are used for lightweight objects such as Rectangle, color, Point, etc.
  It is useful if you have data that is not intended to be modified after creation of struct.
