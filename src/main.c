#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int traditional = 0;
    int greeting    = 1;
    int help        = 0;
    int version     = 0;

    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "-t") || !strcmp(argv[i], "--traditional")) {
            traditional = 1;
        } else if (!strcmp(argv[i],"-h") || !strcmp(argv[i],"--help")) {
            greeting = 0;
            help     = 1;
        }  else if (!strcmp(argv[i],"-h") || !strcmp(argv[i],"--help")) {
            greeting = 0;
            help     = 1;
        }
    }

    if (traditional) {
        printf("hello, world\n");
    } else {
        printf("Hello, World!\n");
    }
    return 0;
}