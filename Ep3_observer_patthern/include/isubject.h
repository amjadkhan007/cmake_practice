#pragma once

#include "ioberver.h"

class ISubject {
 public:
  virtual ~ISubject();
  virtual void Attach(IObserver *observer) = 0;
  virtual void Detach(IObserver *observer) = 0;
  virtual void Notify() = 0;

};