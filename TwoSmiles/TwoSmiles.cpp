
#include <iostream>
#include <conio.h>
#include "ConcreteObserver.h"


using namespace std;

void PrintMenu()
{
	char Menu[] = "\tM E N U:\nPress 'l' to control L smile\nPress 'r' to control R smile\nPress 'a' to turn smile Left\nPress 'w' to turn Up\nPress 'd' to turn smile Right\nPress 's' to turn smile Down\n0.Exit\n";


	cout << Menu;
}

int main() 
{
	bool l = false, r = false;

	const char smile1 = 'L', smile2 = 'R'; //smile1 = '☺', smile2 = '☻';

	ControlButton* pButton = new ControlButton();

	Observer* o1 = new ConcreteObserver(pButton, smile1, (short)20 ,(short)20); 

	Observer* o2 = new ConcreteObserver(pButton, smile2, (short)25 , (short)25);

	PrintMenu();

	while (true)
	{
		

		pButton->Notify();

		if (l)
		o1->Update();
		if (r)
		o2->Update();

		char res = _getch();

		switch (res)
		{

		case 'l':							//Control ☺

			if (!l)	
			{
				pButton->Attach(o1);

				l = true;
			}
				else
					{
						pButton->Detach(o1);

						l = false;
					}		
			break;

		case  'r':							//Control ☻

			if (!r)
			{
				pButton->Attach(o2);

				r = true;
			}
				
				else
					{
						pButton->Detach(o2);

						r = false;
					}
			break;

		case 'a' :							//Turn Left   '←'

			pButton->SetDirection(LEFT);

			break;

		case 'd' : 							//Turn Right	'→'

			pButton->SetDirection(RIGHT);
			

			break;

		case 'w' :							//Turn Up  '↑'

			pButton->SetDirection(UP);

			break;

		case 's':							//Turn Down  '↓'

			pButton->SetDirection(DOWN);

			break;

		case '0':										// Exit

			cout << "\nThank you!" << endl;
			
			system("exit");
			
			return 0;
			
			break;

		default:

			cout << "\nERROR! Pressed wrong key\n";
			
			system("pause");
			
			break;
		}

		




		//PrintMenu();

	}
		delete pButton;
		delete o1;
		delete o2;

	return 0;
}


