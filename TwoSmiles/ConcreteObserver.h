#pragma once
#include <windows.h>
#include "Observer.h"
#include "ControlButton.h"

/*
 ConcreteObserver - конкретный наблюдатель:
	 - хранит ссылку на объект класса ConcreteSubject;
	 - сохраняет данные, которые должны быть согласованы с данными субъекта;
	 - реализует интерфейс обновления, определенный в классе Observer, чтобы поддерживать согласованность с субъектом.
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

