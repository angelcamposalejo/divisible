#include "stdafx.h"  //________________________________________ Divisible.cpp
#include "Divisible.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Divisible app;
	return app.BeginDialog(IDI_Divisible, hInstance);
}

void Divisible::Window_Open(Win::Event& e)
{
}

void Divisible::btCalcular_Click(Win::Event& e)
{
}

