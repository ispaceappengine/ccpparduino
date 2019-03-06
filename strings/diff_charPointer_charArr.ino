char *pointer  vs char arr[]

char *pointer //deklariert pointer zu einer Speicheradresse. Meistens für dynamische array allokierung mit malloc genutzt.

char arr[12]; //deklariert ein array mit 12 chars im Speicher. arr ist dennoch ein Pointer, jedoch werden hier die 
Zieladdresse + 11 nachfolgende Speicherstellen garantiert.

char *myPointer;
char arr[];
char arr2[];

myPointer = arr;  // works
arr2 = arr; // GEHT NICHT

arr[]: Man kann den Inhalt von arr2[] ändern. Jedoch kann man den Pointer arr2 nicht auf eine andere Speicheradresse zeigen lassen.
Java: Instanzvariable kann nicht auf ein anderes Objekt verweisen.

*myPointer ist da anders. Man kann den Pointer auf eine andere Speicheradresse zeigen lassen, aber man sollte NICHT den INHALT ändern.
 myPointer = "new text"; // NICHT MACHEN. als KONSTANTE betrachten

  char *simo = "Simo";
  simo = "New Simo";
  char arrSimo[] = "Simo arr";
  Serial.println(simo);
  Serial.println(arrSimo);
  simo =arrSimo;
//  arrSimo = *simo; FEHLER

http://forum.arduino.cc/index.php?topic=44034.0
