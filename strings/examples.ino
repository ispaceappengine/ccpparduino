char myStr[6];
myStr[0] = 'A';
char myStr[] = "Hello";

myStr[5] = 0; //null terminated

num = strlen(str);
strcpy(out_str, str); //wenn man String out_str neuen Text geben möchte

// (5) add a string to the end of a string (append)
   strcat(out_str, " sketch.");
   
  String str = "some String";
  char arr[] = "This is an array of chars";
  char arr2[] = "This 2nd array";
  char *arr3 = "arr3";
  Serial.println(arr);
  Serial.println(arr2);  
  strcpy(arr2, arr);
  Serial.println(arr2);  
  Serial.println(arr3);  
  strcpy(arr2, arr3);
  Serial.println(arr2);  

char arr[]; //geht nicht, da Größe fehlt
char c[] = "abcd";
char c[50] = "abcd";
char c[] = {'a', 'b', 'c', 'd', '\0'};
char c[5] = {'a', 'b', 'c', 'd', '\0'};
