RaspbOOP-Bot
===========

A Raspberry Pi powered robot library with a code base dedicated to employing Object oriented programming practices geared towards abstracting electronic components, boards, and sensors - anything that can be interfaced through the Raspberry Pi's GPIO pins. 

Raspboop takes advantage of, and abstracts over, the amazing [WiringPi library](http://www.wiringpi.com) for its ease of use and stability.


An Example
==========

```cpp
#include <stdio.h>
#include <raspboop/Raspboop.h>

using raspboop::HCSR04;
using raspboop::HCSR501;

int main(int argc, char* argv[])
{

#define SIG 6
#define TRIG 4
#define ECHO 5

	raspboop::Init(raspboop::WIRING);

	bool ShouldRun = true;
	HCSR04* DistanceSensor = HCSR04::Create(ECHO, TRIG);
	HCSR501* InfraredSensor = HCSR501::Create(SIG);

	while(ShouldRun)
	{
		
		InfraredSensor->Sense();
		DistanceSensor->Sense();

		int Motion = InfraredSensor->IsSignalled();
		float Distance = DistanceSensor->GetDistance();

		printf("Motion Detected: %d", Motion);
		printf("Distance: %0.2f centimeters", Distance);

		if(Distance < 20.0f)
			ShouldRun = false;
		else
			delay(1000);
	}

	delete InfraredSensor;
	delete DistanceSensor;

	return 0;
}
```

Building & Contributing
=======================

RaspbOOP-Bot uses **CMake** to generate the necessary build files. You can also generate build files for your preferred IDE/Compiler.

You will also need a **Raspberry Pi**, although it is recommended to develop on your preferred *nix platform, and then test new code on the Raspberry Pi.

You will also need **git**.
