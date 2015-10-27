//--------------------------------------------------------------
//--    I2CMux
//--    I2C multiplexer based on the PCA9548
//--------------------------------------------------------------
//--	BQ
//--------------------------------------------------------------
//--	Library created by 
//-- 		Alvaro Ferran (alvaroferran)
//--------------------------------------------------------------
//--	Released on October 2015
//--	under the GPL v2
//--------------------------------------------------------------

#ifndef I2CMux_h
#define I2CMux_h

#include "Arduino.h"
#include <Wire.h>  



class I2CMux{

	public:
		I2CMux(uint8_t);
		void switchToBus(uint8_t);
	
	private:
		uint8_t I2CMux_ADDRESS;

};


 
#endif
        
