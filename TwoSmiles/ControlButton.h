#pragma once
#include "Subject.h"

/*
  ConcreteSubject - ���������� �������:
	 - ��������� ���������, �������������� ������� ��� ����������� ����������� ConcreteObserver;
	 - �������� ���������� ����� ������������, ����� ���������� ���������;
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