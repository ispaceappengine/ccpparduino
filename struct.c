https://www.programiz.com/c-programming/c-structures

A structure in C is a collection of variables of different data types under a single name. WIE KLASSE IN OOP SPRACHEN.

struct Person
{
    char name[50];
    int citNo;
    int age;
    float salary;
}; // person1, person2

create: struct Person person1, person2, p[20], *per;
Accessing members of struct mit (.) oder pointer operator (->) person1.salery
per = &person1;
set: &person1.age &per->age
get: person1.age  per->age

// address of num1 and num2 is passed
swap( &num1, &num2);
void swap(int* n1, int* n2)
###########################################
Union wie struct, nur kann Union nur ein einzelnes member gleichzeitig abfragen(wert langfristig halten) und die größe von union ist nur so groß wie das größte member.
###########################################
