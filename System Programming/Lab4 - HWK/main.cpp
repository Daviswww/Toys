#include <cstdio>
#include <cstdlib>
#include "Assembler.h"
using namespace std;

int main(int argc, char *argv[])
{
    char asmFile[100];
    char objFile0[] = "test.obj0", *objFile = objFile0;
    
    //���o�ɦW 
    scanf("%s", asmFile);
    getchar(); 
    
    //�إ�obj�� 
    assemble(asmFile, objFile);
    
    //�]obj�� 
    Cpu0 cpu0;
    cpu0.RunObjFile(objFile);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

