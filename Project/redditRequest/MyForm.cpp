#include "pch.h"
#include "MyForm.h"
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;


void MarshalString(String ^ s, string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void writeFile(string fileName, String^ data) {
    
	string writeData;
	MarshalString(data, writeData);
	ofstream file;
	file.open(fileName);
	file.write(writeData.c_str(), writeData.length());
	file.close();

}

[STAThread]

int main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(0);
	redditRequest::MyForm form;
	Application::Run(%form);

}