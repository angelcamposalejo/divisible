#pragma once  //______________________________________ Divisible.h  
#include "Resource.h"
class Divisible: public Win::Dialog
{
public:
	Divisible()
	{
	}
	~Divisible()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxX;
	Win::Textbox tbxY;
	Win::Button btCalcular;
	Win::Textbox tbx3;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(358);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(128);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Divisible";
		lb1.Create(NULL, L"Numero 1", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 47, 13, 73, 25, hWnd, 1000);
		lb2.Create(NULL, L"Numero 2", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 150, 15, 82, 25, hWnd, 1001);
		tbxX.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 14, 46, 113, 25, hWnd, 1002);
		tbxY.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 149, 46, 113, 25, hWnd, 1003);
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 279, 44, 72, 28, hWnd, 1004);
		tbx3.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 16, 95, 268, 26, hWnd, 1005);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxX.Font = fontArial014A;
		tbxY.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
		tbx3.Font = fontArial014A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		return false;
	}
};
