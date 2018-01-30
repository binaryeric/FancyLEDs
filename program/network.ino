WiFiUDP port;

extern IPAddress ip;
extern IPAddress gateway;
extern IPAddress subnet;

extern const char* net_SSID;
extern const char* password;

void connectToNetwork() {
  WiFi.mode(WIFI_STA);
  WiFi.config(ip,gateway,subnet);
  WiFi.begin(net_SSID,password);
  waitForConnection();
}


void waitForConnection() {
  while(wifi_connected() == false) {
    printmsg("Attempting connection...");
    delay(500);
  }
}

boolean wifi_connected() {
  return WiFi.status() == WL_CONNECTED;
}


