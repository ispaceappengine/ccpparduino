GUTE ERKLÄRUNG MIT EXAMPLES: https://www.geeksforgeeks.org/pair-in-cpp-stl/



############################
+ pair ist ein container, defined im <utility> header
+ besteht aus 2 elementen. first und second. allows to combine 2 different types. Map, Hash_Map nutzen auch pair.

#include <utility> 
    pair <int, char> PAIR1 ;     
    PAIR1.first = 100; 
    PAIR1.second = 'G' ; 
    
    pair <string,double> PAIR2 ("GeeksForGeeks", 1.23); 
    
    pair <string, double> PAIR3 ; 
    PAIR3 = make_pair ("GeeksForGeeks is Best",4.56); 






+
