#include "ConcreteObserver.h"
#include <iostream>

using namespace std;

ConcreteObserver::ConcreteObserver(ControlButton* pButton, char smile, short x, short y)
{
	this->pButton = pButton;
	this->smile = smile;
	this->x = x;
	this->y = y;
}
void ConcreteObserver::Update()
{
	Direction dir = pButton->GetDirection();

	switch (dir)
	{
	case LEFT:
		--x;
		break;
	
	case RIGHT:
		++x;
		break;
	
	case UP:
		--y;
		break;
	
	case DOWN:
		++y;
		break;
	}
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x, y };
	SetConsoleCursorPosition(hConsole, pos);
	cout << char(smile);
}
ControlButton* ConcreteObserver::GetObserver()
{
	return this->pButton;
}
void ConcreteObserver::SetObserver(ControlButton* pButton)
{
	this->pButton = pButton;
}
