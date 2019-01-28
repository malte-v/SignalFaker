#include "sigstop.h"

void sigstop(unsigned long process_id) {
	DebugActiveProcess(process_id);
	DebugSetProcessKillOnExit(FALSE);
}
