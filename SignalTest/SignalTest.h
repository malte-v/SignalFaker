#pragma once

HWND find_main_window(unsigned long process_id);

BOOL CALLBACK enum_windows_callback(HWND handle, LPARAM lParam);

BOOL is_main_window(HWND handle);