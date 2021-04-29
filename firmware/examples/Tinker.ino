/***
 * All the based tinker functions are registered. You can add you own code.
 ***/

// This #include statement was automatically added by the Spark IDE.
#include "Tinker/Tinker.h"

void setup() {
	//Register all the Tinker functions
	Spark.function("digitalread", tinkerDigitalRead);
	Spark.function("digitalwrite", tinkerDigitalWrite);
	Spark.function("analogread", tinkerAnalogRead);
	Spark.function("analogwrite", tinkerAnalogWrite);
	Spark.function("tempsense", tinkerTempSense);
}

void loop() {
}
