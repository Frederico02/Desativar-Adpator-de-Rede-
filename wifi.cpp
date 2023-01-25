/*            Desativar politicas de senha impressoras     */
/*		              Refatorado em 23/01/2023             */
/*	Frederico Almeida - Analista de Suporte Jr - Gupo Multi */


#include<iostream>
#include <windows.h> 
using namespace std;

int main(){
	
	ShowWindow(GetConsoleWindow(), SW_HIDE); // esconder prompt de comando
	
	system("netsh interface set interface \"Wi-Fi\" admin=disable");
	
	return 0;
}
