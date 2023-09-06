#ifndef _KPAD_INTERFACE_H_
#define _KPAD_INTERFACE_H_

void KEYPAD_INIT(u8 kpd_port);
u8 KEYPAD_GETCHAR(u8 kpd_port);
#endif