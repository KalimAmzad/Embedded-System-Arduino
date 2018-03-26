#include "SevSeg.h"

SevSeg sevseg; //Initiate a seven segment controller object

void setup() {

byte numDigits = 4;

byte digitPins[] = {2, 3, 4, 5};

byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13};

sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins);

sevseg.setBrightness(90);

}

void loop() {

for(int i=1000;i<5000;i++){
  for(int j =0;j<1000;j++){
    sevseg.setNumber(i, 2);
    sevseg.refreshDisplay();
    }

  }
}
