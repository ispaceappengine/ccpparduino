https://www.learncpp.com/cpp-tutorial/header-files/

.h .hpp header (purpose: to propagate declarations to code files)

one definition rule. Only symbolic constants in .h. Do not define functions or variables in .h.

header files only consist of two parts:
1. header guard
2. forward declarations for all of the identifiers we want other files to be able to see

int add(int x, int y); // forward declaration using function prototype

Man sollte add.h dennoch in add.cpp hinzufügen, damit compile error auftritt falls wir definition
von der declaration ändern. Linker schreit so von sich aus. Ansonsten nur, wenn man wirklich die
Function aufrufen würde.
