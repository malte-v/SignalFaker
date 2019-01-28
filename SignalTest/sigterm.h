#pragma once

#include <iostream>
#include <windows.h>

struct handle_data {
	unsigned long process_id;
	HWND window_handle;
};

void sigterm(unsigned long process_id);

HWND find_main_window(unsigned long process_id);

BOOL CALLBACK enum_windows_callback(HWND handle, LPARAM lParam);

BOOL is_main_window(HWND handle);