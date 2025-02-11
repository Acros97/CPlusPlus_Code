#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include "Math_D.h"

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
	string WELCOME_INIT_MESSAGE = "Running the program";
	cout << WELCOME_INIT_MESSAGE;
	print_awaitingPoints();
	cout << "Ready." << endl;
	int magnitudeVector = vector_magnitude_2D(3, 4);
	cout << "mag.: " << magnitudeVector << endl;

	return 0;
}