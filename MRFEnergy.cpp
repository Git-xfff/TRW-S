#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "MRFEnergy.h"

#include "instances.inc"


void DefaultErrorFn(char* msg)
{
    fprintf(stderr, "%s\n", msg);
    exit(1);
}
