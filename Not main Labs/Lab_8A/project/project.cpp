#include <iostream>
#include <windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i=0 ;
	short answer;
	short arr[10]{};
	short places_y=0, places_n=5;   // занято
	short sm_y = 1, sm_n = 2;  // ответ
	short places1 = 5, places2 = 5; // свободно

	cout << "Мест на борту 10, 5 для курящих и 5 для не курящих.\n";
	
	for (i; ;) {
		cout << "Вы курите?" << endl << "yes=1" << endl << "no=2" << endl;
		cin >> answer;

		if (answer == sm_y && places1 > 0) {
			arr[places_y] = 1;
			places_y++;
			places1--;

		}

		else if (answer == sm_n && places2 > 0) {

			arr[places_n] = 2;
			places_n++;
			places2--;
		}
		cout << "\tМест для курящих осталось: " << places1 << endl;
		cout << "\tМест для не курящих осталось: " << places2 << endl<<endl;

		if (places_y >= 5 && places_n >= 10)
		{
			cout << "\tВсе места заняты\n\n" << endl;
			break;
			return 0;
		}
	}
}