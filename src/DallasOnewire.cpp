#include "DallasOnewire.h"
#include "Onewire.h"

DallasOnewire::DallasOnewire(uint8_t pin)
: Dallas()
{
    _ow = new Onewire(pin);
    _ownOnewire = true;
}

DallasOnewire::~DallasOnewire()
{
}
