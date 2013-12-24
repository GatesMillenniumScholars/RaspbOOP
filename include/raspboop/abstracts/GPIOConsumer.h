/* *
* Copyright (c) 2013 Julio Gutierrez
* 
* Permission is hereby granted, free of charge, to any person obtaining a co$
* this software and associated documentation files (the "Software"), to deal$
* the Software without restriction, including without limitation the rights $
* use, copy, modify, merge, publish, distribute, sublicense, and/or sell cop$
* the Software, and to permit persons to whom the Software is furnished to d$
* subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in$
* copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, F$
* FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHOR$
* COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHE$
* IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
* CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
* */

#ifndef RASPBOOP_INTERFACES_GPIOCONSUMER_H
#define RASPBOOP_INTERFACES_GPIOCONSUMER_H

#include "raspboop/Raspboop.h"

namespace raspboop
{
namespace abstracts
{

class GPIOConsumer
{

protected:

	void ConsumePin(int Pin, int Mode) const;

public:

    GPIOConsumer();

    virtual void ReleasePins()=0;
    
    virtual ~GPIOConsumer()=0;

}; /* GPIOConsumer */

} /* abstracts */
} /* raspboop */

#endif /* RASPBOOP_INTERFACES_GPIOCONSUMER_H */
