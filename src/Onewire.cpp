#include <mgos.h>
#include "mgos_onewire.h"

#include "Onewire.h"

Onewire::Onewire(uint8_t pin)
: _ow(mgos_onewire_create(pin))
{

}

Onewire::~Onewire()
{
    if (_ow) {
        mgos_onewire_close(_ow);
    }
}

uint8_t Onewire::reset(void)
{
    return mgos_onewire_reset(_ow);
}

void Onewire::select(const uint8_t rom[8])
{
    mgos_onewire_select(_ow, rom);
}

void Onewire::skip(void)
{
    mgos_onewire_skip(_ow);
}

void Onewire::write(uint8_t v, uint8_t power)
{
    mgos_onewire_write(_ow, v);
    (void) power;
}

void Onewire::write_bytes(const uint8_t *buf, uint16_t count, bool power)
{
    mgos_onewire_write_bytes(_ow, buf, count);
    (void) power;
}

uint8_t Onewire::read(void)
{
    return mgos_onewire_read(_ow);
}

void Onewire::read_bytes(uint8_t *buf, uint16_t count)
{
    mgos_onewire_read_bytes(_ow, buf, count);
}

void Onewire::write_bit(uint8_t v)
{
    mgos_onewire_write_bit(_ow, v);
}

uint8_t Onewire::read_bit(void)
{
    return (uint8_t) mgos_onewire_read_bit(_ow);
}

void Onewire::depower(void)
{

}

void Onewire::reset_search()
{
    mgos_onewire_search_clean(_ow);
}

void Onewire::target_search(uint8_t family_code)
{
    mgos_onewire_target_setup(_ow, family_code);
}

uint8_t Onewire::search(uint8_t *newAddr, bool search_mode)
{
    return (uint8_t) mgos_onewire_next(_ow, newAddr, !search_mode);
}
