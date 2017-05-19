#include "stdafx.h"  //________________________________________ Divisible.cpp
#include "Divisible.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Divisible app;
	return app.BeginDialog(IDI_Divisible, hInstance);
}

void Divisible::Window_Open(Win::Event& e)
{
}

void Divisible::btCalcular_Click(Win::Event& e)
{
	const int x = tbxX.IntValue;
	const int y = tbxY.IntValue;
	const int divisible = x%y;
	wstring texto;
	if (divisible == 0)
	{
		Sys::Format(texto, L"El número %d es divisible entre %d", x, y);
	}
	else
	{
		Sys::Format(texto, L"El número %d no es divisible entre %d", x, y);
	}
	tbxResultado.Text = texto;
}

