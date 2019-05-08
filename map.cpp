
+ Auflistung aller functions von map: http://www.cplusplus.com/reference/map/map/size/
###########################################################################
#include <map>
using namespace std;

std::map<std::string, std::string> mapper;
    mapper["aa"] = "uno";
    mapper["bb"] = "due";
    std::map<std::string, std::string>::iterator it = mapper.begin();
    std::map<char, int> m = {
        {'a', 1},
        {'b', 2},       
    };
    //   cout << "Hello, World!";
    //Serial.println(mapper["aa"]);
    for (auto &t : mapper)
    {
        Serial.print("Key: ");
        Serial.print(t.first.c_str());        
        Serial.print(", Value: ");
        Serial.print(t.second.c_str());        
    }
###########################################################################
find/search in map

if (directory.find(name) != directory.end()) 
      cout << "The phone number for " << name
           << " is " << directory[name] << "\n";
   else
      cout << "Sorry, no listing for " << name << "\n";
###########################################################################
  for (auto itr = mapBsBledo.begin (); itr != mapBsBledo.end (); itr++)
    {
      cout << itr->first << "\t" << itr->second.latestRssi << endl;
      string str = it->first;      
      BleDeviceWhere ble1 = itr->second;           
    }
    cout<<"size of map: "<<mapBsBledo.size()<<endl;
    BleDeviceWhere ble2 = mapBsBledo["a"];
    cout<<"printe ble2: "<<ble2.latestRssi<<endl;
###########################################################################
###########################################################################
###########################################################################
###########################################################################
###########################################################################
