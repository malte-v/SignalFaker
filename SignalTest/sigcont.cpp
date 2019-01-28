#include "sigcont.h"

void sigcont(unsigned long process_id) {
	DebugActiveProcessStop(process_id);
}