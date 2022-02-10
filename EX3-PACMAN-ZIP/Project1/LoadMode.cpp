#include "LoadMode.h"

void LoadMode::run()
{
	cout << "LoadMode" << endl;
	Sleep(2000);
	clearScreen();
	runAllSessions();
}

void LoadMode::executeSleepBetweenSessions()
{
	Sleep(20);
}
