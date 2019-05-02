##################String erstellen###########################################
const char *strPtr = "some pointer text";
char *s = "bar"; //c-string deklarieren


//c++ string
#include<string> 
using namespace std;
string str;
########################## String Array ####################################'#
char *foo[] = {"bar", "baz"}; //Array of c-strings
char foo[][4] = {"bar", "baz"};//C string with a 2D array,  

//C++
#include <array>
 std::array<std::string, 3> texts = {"Apple", "Banana", "Orange"};
    // ^ An array of 3 elements with the type std::string

  for(const auto& text : texts) {   // Range-for!
      std::cout << text << std::endl;
  }

 std::array<std::string, 3> texts2 = {"aaaaa", "bbbbb", "cccccc"};
  for(auto s : texts2){
    cout <<s.c_str();
  }
############################## ARRAY OF POINTERS #############################
char *myStrings[] = {"This is string 1", "This is string 2", "This is string 3",
                     "This is string 4", "This is string 5", "This is string 6"
                    };
for (int i = 0; i < 6; i++) {
    Serial.println(myStrings[i]);
    delay(500);
  }
############################# PRINTEN ########################################
Serial.printf("Sha256 from: %s to: %s \n", input4Sha256.c_str(), outputSha256.c_str());

##############################################################################
##############################################################################
##############################################################################
##############################################################################
##############################################################################
##############################################################################
##############################################################################
##############################################################################
##############################################################################
##############################################################################
##############################################################################
