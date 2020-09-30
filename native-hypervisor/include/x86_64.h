#ifndef __X86_64_H_
#define __X86_64_H_

#include <types.h>

typedef struct _GDT
{
    WORD limit;
    QWORD address;
} __attribute__((__packed__)) GDT, *PGDT;

typedef struct _IDT
{
    WORD limit;
    QWORD address;
} __attribute__((__packed__)) IDT, *PIDT;

extern QWORD UpdateInstructionPointer(QWORD offset);
extern VOID GetGDT(PGDT address);
extern VOID GetIDT(PIDT address);
extern QWORD GetCS();
extern QWORD GetDS();
extern QWORD GetSS();
extern QWORD GetES();
extern QWORD GetFS();
extern QWORD GetGS();

#endif