#include "MyForm.h"
#include <stdlib.h> 
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::MyForm form;
	Application::Run(%form);

	Boolean flip1 = false;
	Boolean flip2 = false;
	Boolean flip3 = false;
	Boolean flip4 = false;
	Boolean flip5 = false;
	Boolean flip6 = false;

	int optval[6];
	int opt1;
	int opt2;
	int opt3;
	int opt4;
	int opt5;
	int opt6;

	int rando = rand() % 5 + 1;
	optval[1] = rando;

	for (int x = 1; x < 5; x++) {
		optval[x] = rando;
		//rando = rand() % 5 + 1;
		for (int y = 0; y < x; y++) {
			while (optval[x] == optval[y]) {
				rando = rand() % 5 + 1;
				optval[x] = rando;
			}
		}
	}
	opt1 = optval[0];
	opt2 = optval[1];
	opt3 = optval[2];
	opt4 = optval[3];
	opt5 = optval[4];
	opt6 = rand() % 5 + 1;

	return 0;
}