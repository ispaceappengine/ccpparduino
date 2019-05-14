ALLE MÖGLICHEN PRINT FUNCTIONS
https://en.cppreference.com/w/c/io/fprintf
###########################################
###########################################  
  snprintf(msg, 255, "#%ld RSSI: %ld from Id: %s", msgCounter, rssi, addressChar);
###########################################
char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
printf("Greeting message: %s\n", greeting );
###########################################
std::string name = "Tester";
Serial.println(name.c_str()); 
###########################################
C
printf ("hello, world!");
printf ("Global: %d\n", globale_variable); // int globale_variable;
###########################################
int var = 5;
char z[100] = "I am learning C programming language.";
printf("hi: %d %s", var, z);
###########################################
printf ("%-10d%70d\n", 1, 1000); //muss 80 ergeben; - ist linksbündig
printf ("%80s","Dieser Text wird rechtsbuendig angezeigt.");
1                                       100  
  Dieser Text wird rechtsbuendig angezeigt.
###########################################
int i;
  scanf ("%d", &i);
  printf("Your input: %d", i);
###########################################
cout << "Sum = " << sum << endl;  
Sum = 18
  
int test[2][3] = {2, 4, -5, 9, 0, 9};
cout << test[0][2] <<"some text"<< endl;
cin>>test[0][2]; //input über console wird hier abgespeichert
cout << test[0][2] <<"some text";
###########################################
  char str[100];

  cout << "Enter a string: ";
  cin >> str; //the extraction operator >> works as scanf() in C and considers a space " " has a terminating character.
  cout << "You entered: " << str << endl;
  cin.get(str, 100); //To read the text containing blank space, cin.get
###########################################
\n...new line, \t...tabulator, \v...vertical tab
%s ...char*   (String str.c_str(), std::string str.c_str())
%c ...char
%d ...int
%ld...long 
%lu...long unsigned int
%p...Speicheradresse (z.B. 0x7ffdf25cef40)
%%...prints %
u prints an unsigned number in decimal.
d prints a signed number in decimal.
x prints an unsigned number in hexadecimal.
o prints an unsigned number in octal.
i prints a signed number in decimal.
###########################################
Serial.printf("Sha256 from: %s to: %s \n",input4Sha256.c_str(), outputSha256.c_str());
##########################################
https://en.wikibooks.org/wiki/C_Programming/stdio.h/puts
puts("literal string"); puts(array of chars); int puts(const char *str);

GEHT NICHT: string str="a"; puts(str); 
NUTZEN puts(str.c_str());

puts is a function used to output a c-string (plus a newline)
puts prints the string as is (it does not process % codes).
puts returns the number of bytes written

To print a string without processing % codes, or outputting a newline, try:
printf("%s", "welcome to WIKIPEDIA!!!");
##########################################
int num1, num2;   // Define two integer variables
scanf("%d %d", &num1, &num2);  // Get input for the two variables
sum = num1 + num2;
printf("%d\n", sum);   // Print the sum
##########################################

##########################################
##########################################
##########################################
##########################################
##########################################
##########################################
##########################################
##########################################
##########################################
