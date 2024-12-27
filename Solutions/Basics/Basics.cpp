#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

void print_awaitingPoints() {
	string point = ".";
	for (int i = 0; i < 2; i++)
	{
		cout << point;
		this_thread::sleep_for(chrono::seconds(3));

		point += ".";
	}
}

int main()
{
	string WELCOME_INIT_MESSAGE = "Ejecutando programa";
	cout << WELCOME_INIT_MESSAGE;
	print_awaitingPoints();
	cout << "Listo!" << endl;
	return 0;
}