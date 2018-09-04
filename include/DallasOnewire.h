#pragma once
#include "Dallas.h"

class DallasOnewire : public Dallas {
 public:
  DallasOnewire(uint8_t pin);

  ~DallasOnewire();
};
