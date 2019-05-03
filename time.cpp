Print local and UTC time: http://www.java2s.com/Code/C/Development/PrintlocalandUTCtime.htm
############################################################################################
#include <WiFi.h>
#include "time.h"

const char* ssid       = "YOUR_SSID";
const char* password   = "YOUR_PASS";

const char* ntpServer = "pool.ntp.org";
const long  gmtOffset_sec = 3600;
const int   daylightOffset_sec = 3600;

void printLocalTime()
{
  struct tm timeinfo;
  if(!getLocalTime(&timeinfo)){
    Serial.println("Failed to obtain time");
    return;
  }
  Serial.println(&timeinfo, "%A, %B %d %Y %H:%M:%S");
}

void setup()
{
  Serial.begin(115200);
  
  //connect to WiFi
  Serial.printf("Connecting to %s ", ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
  }
  Serial.println(" CONNECTED");
  
  //init and get the time
  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
  printLocalTime();

  //disconnect WiFi as it's no longer needed
  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);
}

void loop()
{
  delay(1000);
  printLocalTime();
}
############################################################################################################
Used format: %Y-%m-%dT%H:%M:%SZ 2019-05-03T13:32:05Z
############################################################################################################
  /** @brief Gets the UTC time.
 * Used format: %Y-%m-%dT%H:%M:%SZ 2019-05-03T13:32:05Z
 * Needs internet. Has no milliseconds, because not supported by time.h.
 * @return string e.g. 2019-05-03T13:32:05Z
 */
string getUTCTime() {
  string timeUtcStr = "No UTC time available.";
  time_t timer;
  char buffer[30];
  struct tm *tm_info;

  time(&timer);
  // tm_info = localtime(&timer);
  tm_info = gmtime(&timer);
  strftime(buffer, 30, "%Y-%m-%dT%H:%M:%SZ", tm_info);
  // puts(buffer);
  timeUtcStr = buffer;
  // Serial.println(timeUtcStr.c_str());
  // asctime(tm_info) Fri May  3 13:25:45 2010
  // Serial.printf("UTC time: %s \n", asctime(tm_info));
  return timeUtcStr;
}
############################################################################################################
void printLocalTime() {
  struct tm timeinfo;
  if (!getLocalTime(&timeinfo)) {
    Serial.println("Failed to obtain time");
    return;
  }
  Serial.println(&timeinfo, "%A, %B %d %Y %H:%M:%S");
}
############################################################################################################
############################################################################################################
############################################################################################################
############################################################################################################
############################################################################################################
############################################################################################################
