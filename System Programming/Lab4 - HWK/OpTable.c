#include "OpTable.h"

void OpTableTest() {
  OpTableNew();
  HashTableEach(opTable, (FuncPtr1) OpPrintln);  
  OpTableFree();
}

char *opList[] = {"LD 00 R", "ST 01 R", "LDB 02 R", "STB 03 R", 
  "LDR 04 W", "STR 05 W", "LBR	06 W", "SBR 07 W", "LDI 08 R", 
  "CMP 10 Q", "MOV 12 Q", "ADD 13 W", "SUB 14 W", "MUL 15 W", 
  "DIV 16 W", "AND 18 W", "OR 19 W", "XOR 1A W", "ROL 1C W", 
  "ROR 1D W", "SHL 1E W", "SHR 1F W", "JEQ 20 R", "JNE 21 R", 
  "JLT 22 R", "JGT 23 R", "JLE 24 R", "JGE 25 R", "JMP 26 R", 
  "SWI 2A R", "JSUB 2B R", "RET 2C N", "PUSH 30 Q", "POP 31 Q", 
  "PUSHB 32 Q", "POPB 33 Q", "RESW F0 D", "RESB F1 D", "WORD F2 D", 
  "BYTE F3 D",
  "OD 40 Q", "OC 41 Q", "ID 50 Q", "IC 51 Q", "INC 60 N", "DEC 61 N"};

HashTable *opTable = NULL;

HashTable *OpTableNew() {
  if (opTable != NULL) return opTable;
  opTable = HashTableNew(127);
  int i;
  for (i=0; i<sizeof(opList)/sizeof(char*); i++) {
    Op *op = OpNew(opList[i]);
    HashTablePut(opTable, op->name, op);
  }
  return opTable;
}

void OpTableFree() {
  if (opTable != NULL) {
    HashTableEach(opTable, (FuncPtr1) OpFree);
    HashTableFree(opTable);
    opTable = NULL;
  }
}

Op* OpNew(char *opLine) {
  Op *op = (Op*)ObjNew(Op, 1);
  char opName[100];
  sscanf(opLine, "%s %x %c", opName, &op->code, &op->type);
  op->name = newStr(opName);
  return op;
}

void OpFree(Op *op) {
  freeMemory(op->name);
  ObjFree(op);
}

int OpPrintln(Op *op) {
  printf("%s %2x %c\n", op->name, op->code, op->type);
}
