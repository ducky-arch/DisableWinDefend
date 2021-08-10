#include <iostream>
#include <chrono>
#include <windows.h>

int main()
{
	std::cout << "Turning off WinDefend...\n";
	system("Powershell.exe -Command Set-MpPreference -DisableRealtimeMonitoring $true");
	std::cout << "WinDefend is off.\n";
	system("pause");
	
}
