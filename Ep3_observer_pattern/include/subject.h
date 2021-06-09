#pragma once

#include <list>

#include "isubject.h"

class Subject : public ISubject {
 public:
  virtual ~Subject();
  void Attach(IObserver *observer) override;
  void Detach(IObserver *observer) override;
  void Notify() override;
  void CreateMessage(std::string message = "Empty");
  void HowManyObserver();
  void SomeBusinessLogic();

 private:
  std::list<IObserver *> list_observer_;
  std::string message_;
};