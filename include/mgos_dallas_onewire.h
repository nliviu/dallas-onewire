#pragma once
#include "mgos_dallas_interface.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Initializes the mgos_dallas_onewire driver with a GPIO `pin`
 * Return value: handle opaque pointer.
 */
Dallas *mgos_dallas_create_onewire(uint8_t pin);

#ifdef __cplusplus
}
#endif
