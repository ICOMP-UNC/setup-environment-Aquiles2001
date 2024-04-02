#include "shared.h"
#include <stdio.h>
#include <string.h>

int shared_lib_function(char *msg)
{
    printf("Shared lib says: %s\n", msg);
    return strlen(msg);
}