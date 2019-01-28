#include "sigkill.h"

void sigkill(unsigned long process_id) {
	HANDLE process_handle = OpenProcess(PROCESS_TERMINATE, FALSE, process_id);
	TerminateProcess(process_handle, 0);
	CloseHandle(process_handle);
}