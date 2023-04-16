#pragma once
#include <windows.h>
#include "Observer.h"
#include "ControlButton.h"

/*
 ConcreteObserver - ���������� �����������:
	 - ������ ������ �� ������ ������ ConcreteSubject;
	 - ��������� ������, ������� ������ ���� ����������� � ������� ��������;
	 - ��������� ��������� ����������, ������������ � ������ Observer, ����� ������������ ��������������� � ���������.
*/

class ConcreteObserver : public Observer
{
	ControlButton* pButton;
	char smile;
	short x, y;

public:
	ConcreteObserver(ControlButton* pButton, char smile, short x, short y);
	void Update() override;
	ControlButton* GetObserver();
	void SetObserver(ControlButton* pButton);
};

