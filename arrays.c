An array is a collection of data that holds fixed number of values of same type.
dataType arrayName[arraySize];
########################################################
#define ANZAHL 10
int arr[ANZAHL], i;

for(int i=0; i<ANZAHL; i++){
  arr[i] = 1*i;
  printf("%d. Element: %d \n", i, arr[i]);
}
########################################################
String fString[8];  //array of Strings
for (i=0; i<7; i++)//       <-- Now we can use the "Array of Strings" to
     fString[i] += splitStr();//   make life simple, using "for" loops!
########################################################
Array of Strings mit char
const int NUMBER_OF_ELEMENTS = 10;
const int MAX_SIZE = 12;

char descriptions [NUMBER_OF_ELEMENTS] [MAX_SIZE] = { 
 { "Furnace on" }, 
 { "Furnace off" }, 
 { "Set clock" }, 
 { "Pump on" }, 
 { "Pump off" }, 
 { "Password:" }, 
 { "Accepted" }, 
 { "Rejected" }, 
 { "Fault" }, 
 { "Service rqd" }, 
 };
for (int i = 0; i < NUMBER_OF_ELEMENTS; i++)
    Serial.println (descriptions [i]);
  }
########################################################

int Feld[5];
int daten[] = { 4, 10, -20 }; //da compiler 3 Elemente eh sieht

int daten [3][2] = { { 1, 2 } , { 3, 4 } , { 5, 6 } };

int dreidimensional [3][4][34]; // 3 * 4 * 34 = 408 (!) Elemente.
dreidimensional [1][3][30] = 409;
int d3 [3][2][4] = {
                      { {1,2,3,4}, {5,6,7,8} } ,
                      { {9,10,11,12}, {13,14,15,16} } ,
                      { {17,18,19,20}, {21,22,23,24} }
                    };
########################################################
String in C ist ein Array vom Typ char;
char text[21]; //hier passt ein Text mit 20 Zeichen rein (wegen \0)
char text[16] = { 'E','i','n',' ','l','a','n','g','e','r',' ','T','e','x','t','\0' };
########################################################
int myarray[] = {123, 456, 789}; // 3 values stored
int number_of_stored_values_in_myarray = sizeof(myarray)/sizeof(int);

sizeof() liefert die Bytes die im Array zur Verfügung stehen

 int arr[4] = {1,2,3,4};
 long arr2[5] = {1,2,3,4,5};
 printf("int sizeof in Bytes: %d \n",sizeof(arr)); //16
 printf("long sizeof in Bytes: %d \n",sizeof(arr2));//40
 printf("elemente im Array: %d \n",sizeof(arr)/sizeof(int)); //4
 printf("elemente im Array: %d \n",sizeof(arr2)/sizeof(long));//5
########################################################
String array[] = { 
  "John Smith", 
  "Susie Maye", 
  "Tom Jones", 
  "Sarrah Jones", 
  "Martha Mayes", 
  "Brenda Howard", 
  "Dan Evens"
};
########################################################
########################################################
########################################################
########################################################
########################################################
