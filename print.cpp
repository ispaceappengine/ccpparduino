ALLE MÖGLICHEN PRINT FUNCTIONS
https://en.cppreference.com/w/c/io/fprintf
###########################################
  snprintf(msg, 255, "#%ld RSSI: %ld from Id: %s", msgCounter, rssi, addressChar);
###########################################
char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
printf("Greeting message: %s\n", greeting );
###########################################
name = "Tester";
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
%s ... char*    (vielleicht string)
%c ...char
%ld...long int
%lx...long unsigned int
x prints an unsigned number in hexadecimal.
o prints an unsigned number in octal.
u prints an unsigned number in decimal.
d prints a signed number in decimal.
i prints a signed number in decimal.
###########################################
   
