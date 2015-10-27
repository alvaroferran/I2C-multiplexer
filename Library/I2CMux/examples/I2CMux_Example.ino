//--------------------------------------------------------------
//--    I2CMux
//--    I2C multiplexer based on the PCA9548
//--------------------------------------------------------------
//--    BQ
//--------------------------------------------------------------
//--    Example code by 
//--        Alvaro Ferran (alvaroferran)
//--------------------------------------------------------------
//--    Released on October 2015
//--    under the GPL v2
//--------------------------------------------------------------



#include "I2CMux.h"
#include "BNO055.h"
#include <Wire.h>

#define I2CMux_ADDR 0x70 
#define BNO055_ADDR 0x28

I2CMux mux(I2CMux_ADDR);

BNO055 sensor(BNO055_ADDR), sensor1(BNO055_ADDR);
BNO055 sensors[2]={sensor, sensor1};



void setup(){

    Serial.begin(9600);
    Wire.begin();
    
    for(int i=0; i<2;i++){
      mux.switchToBus(i);
      sensors[i].init();
    }

    delay(500);
}



void loop(){

  for(int i = 0; i<2;i++){
    mux.switchToBus(i);
    sensors[i].readEul();
    Serial.print("   Z");Serial.print(i);Serial.print("= ");Serial.print(sensors[i].euler.z);
  }
  Serial.println("");

  delay(100);
}


