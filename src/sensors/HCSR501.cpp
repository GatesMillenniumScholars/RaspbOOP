#include "raspboop/Raspboop.h"

namespace rbp
{

HCSR501::HCSR501()
{
    SignalPin = -1;
    Signalled = false;
}


HCSR501* HCSR501::Create(int signal)
{
    HCSR501* H = (HCSR501*)malloc(sizeof(HCSR501));

    // Not enough memory. Should notify user
    if(H == NULL)
            return NULL;

    new(H) HCSR501;

    H->SignalPin = signal;

    H->SetInputPin(signal);

    return H;
}


void HCSR501::Sense()
{
    Signalled = digitalRead(SignalPin);
}


HCSR501::~HCSR501()
{
}

} /* rbp */
