#include <iostream>
#include <windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i=0 ;
	short answer;
	int arr[10]{};
	int places_y=0, places_n=5;
	int sm_y = 1, sm_n = 2;
	int places1 = 5, places2 = 5;

	for (i; ;) {
		cout << "Мест на борту 10, 5 для курящих и 5 для не курящих.\n";
		cout<<"Вы курите?"<<endl<<"yes=1"<<endl<<"no=2"<<endl;
		cin >> answer;

		if (answer == sm_y) {
			arr[places_y] = 1;
			places_y++;
			places1--;

		}

		else if (answer == sm_n) {

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