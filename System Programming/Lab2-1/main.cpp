#include <iostream>
#include <cstdio>
#include "Assembler.h"

using namespace std;

int main(int argc, char** argv) {
	char asmFile0[] = "test.asm0", *asmFile = asmFile0;
	char objFile0[] = "test.obj0", *objFile = objFile0;
	
	assemble(asmFile, objFile);
	
	system("PAUSE");
	return EXIT_SUCCESS;
}
