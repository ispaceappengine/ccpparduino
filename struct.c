https://www.programiz.com/c-programming/c-structures
https://www.geeksforgeeks.org/structures-c/

A structure in C is a collection of variables of different data types under a single name. WIE KLASSE IN OOP SPRACHEN, haben aber keine functions wie Klassen.

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
// Structs are just collections of data, the members are allocated sequentially,
// in the order they are written:
struct rectangle {
  int width;
  int height;
};

// It's not generally true that
// sizeof(struct rectangle) == sizeof(int) + sizeof(int)
// due to potential padding between the structure members (this is for alignment
// reasons). [1]

void function_1()
{
  struct rectangle my_rec;

  // Access struct members with .
  my_rec.width = 10;
  my_rec.height = 20;

  // You can declare pointers to structs
  struct rectangle *my_rec_ptr = &my_rec;

  // Use dereferencing to set struct pointer members...
  (*my_rec_ptr).width = 30;

  // ... or even better: prefer the -> shorthand for the sake of readability
  my_rec_ptr->height = 10; // Same as (*my_rec_ptr).height = 10;
}
##############################################
// if you have large structs, you can pass them "by pointer" to avoid copying
// the whole struct:
int areaptr(const rect *r)
{
  return r->width * r->height;
}
##############################################
##############################################
##############################################
##############################################
##############################################
##############################################
##############################################
##############################################

