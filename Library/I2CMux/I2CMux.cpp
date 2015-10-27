//--------------------------------------------------------------
//--    I2CMux
//--    I2C multiplexer based on the PCA9548
//--------------------------------------------------------------
//--    BQ
//--------------------------------------------------------------
//--    Library created by 
//--        Alvaro Ferran (alvaroferran)
//--------------------------------------------------------------
//--    Released on October 2015
//--    under the GPL v2
//--------------------------------------------------------------

#include "Arduino.h"
#include "I2CMux.h"
#include <Wire.h>  


I2CMux::I2CMux(uint8_t address){
    I2CMux_ADDRESS = address;
}


void I2CMux::switchToBus( uint8_t bus) {
    Wire.beginTransmission(I2CMux_ADDRESS);
    Wire.write(1<<bus);
    Wire.endTransmission();  
    delay(1);
}

