#include <greetings.h>
#include <stdio.h>

int main(int argc, char *argv[]) 
{
    printf("main says hello!\n");
    greetings();

    printf("Static lib function returned: %d\n", static_lib_function("Hello, static lib!"));
    printf("Shared lib function returned: %d\n", shared_lib_function("Hello, shared lib!"));
    return 0;
}