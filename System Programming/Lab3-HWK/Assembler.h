#include "cpu0.h"

struct Assembler
{
    Array *codes;
    HashTable *symTable;
    HashTable *opTable;
};

struct AsmCode
{
    int address, opCode, size;
    char *label, *op, *args, type;
    char *objCode;
};

void assemble(char *asmFile, char *objFile);

Assembler* AsmNew();
void AsmFree(Assembler *a);

void AsmPass1(Assembler *a, char *text);
void AsmPass2(Assembler *a);
void AsmSaveObjFile(Assembler *a, char *code);
void AsmTranslateCode(Assembler *a, AsmCode *code);

AsmCode* AsmCodeNew(char *line);
void AsmCodeFree(AsmCode *code);
int AsmCodeSize(AsmCode *code);
int AsmCodePrintln(AsmCode *code);

