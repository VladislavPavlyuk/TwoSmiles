#pragma once
#include "Subject.h"

/*
  ConcreteSubject - конкретный субъект:
	 - сохраняет состояние, представляющее интерес для конкретного наблюдателя ConcreteObserver;
	 - посылает информацию своим наблюдателям, когда происходит изменение;
*/
enum Direction {UP = 119, LEFT = 97, RIGHT = 100, DOWN = 115};

class ControlButton : public Subject
{
	Direction dir;

public:
	Direction GetDirection()
	{
		return dir;
	}
	void SetDirection(Direction d)
	{
		dir = d;
	}
};