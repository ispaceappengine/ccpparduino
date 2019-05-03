TEXTE ÜBER C++ STRING: https://www.geeksforgeeks.org/stdstring-class-in-c/

2 types of strings in C++
+ Strings that are objects of string class (The Standard C++ Library string class)
+ C-strings (C-style Strings) (Array of type char)
#####################################################
SO NICHT: char *strPtr = "Compiler zeigt WARNUNG an";

NUTZEN: const char *strPtr = "So einen Text deklarieren";
String str = "String object."; //braucht aber dann .c_str() damit char* kommt
std::string input = "std::cxx_11::string input";//braucht aber dann .c_str() damit char* kommt
NICHT NUTZEN: char str[] = "C++"; // "C++" has 3 character, the null character \0 is added to the end of the string automatically.

char str[4] = "C++";
char str[100] = "C++"; //not needed to use up all the space

char s[] == char *
void display(char s[]) == void display(char *);
#####################################################
void display(char *); //deklaration
display("abc11");
void display(char cs[]){
    printf(cs);
}
#####################################################
std::string name = "John";
int age = 21;
John21
dog2->name="NAme "+to_string(age); 
// 2. with C++11
result = name + std::to_string(age);
#####################################################
char str1[15];
   char str2[15];

   strcpy(str1, "tutorialspoint");
   strcpy(str2, "compileonline");

   puts(str1);
#####################################################
#####################################################
#####################################################
#####################################################
#####################################################
#####################################################
#####################################################
#####################################################
