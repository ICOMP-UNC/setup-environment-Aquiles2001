#include "static.h"
#include <stdio.h>
#include <string.h>

int static_lib_function(char *msg)
{
    printf("Static lib says: %s\n", msg);
    return strlen(msg);
}