
#include "csdl.h"
#include "stdio.h"

typedef struct  _testOpcodeLib {
  OPDS  h;
} TEST_OPCODE_LIB;


int testOpcodeLib_init(CSOUND *csound, TEST_OPCODE_LIB *p){
  printf("TEST OPCODE LIB INIT\n");
  return OK;
}

static OENTRY localops[] = {
  { "test_opcode_lib", sizeof(TEST_OPCODE_LIB), 0, 1, "", "",(SUBR) testOpcodeLib_init, 
     NULL, NULL }
};

LINKAGE
