#include <windows.h>
#include <stdio.h>


int main(void){
	
	HMODULE hdll;
	hdll=LoadLibraryA("legitimate.dll");
	(hdll != NULL) ? printf("[+] DLL found!"): printf("[x] DLL not found!");exit(1);
	
	return 0;
}




