extern const boolean test_mode;
extern const int serial_output_port;

void checkTestMode() {
  if(test_mode == true) {
    Serial.begin(serial_output_port);
  }
}

void printmsg(String str){
  if(test_mode == true) {
    Serial.println(str);
  }
}

