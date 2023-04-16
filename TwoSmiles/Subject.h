#pragma once
#include "Observer.h"
#include <vector>

using namespace std;

/* Subject
- �������: ����������� ����������� � ����� ������������. �� ��������� ����� ��������� ����� ����� ������������;
- ������������� ��������� ��� ������������� � ��������� ������������;
*/
class Subject abstract
{
	vector<Observer*> observers;
public:
	void Attach(Observer* observer);
	void Detach(Observer* observer);
	void Notify();
};

