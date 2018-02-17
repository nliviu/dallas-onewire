#include "mgos_dallas_onewire.h"
#include "DallasOnewire.h"

Dallas* mgos_dallas_create_onewire(uint8_t pin)
{
    return new DallasOnewire(pin);
}
