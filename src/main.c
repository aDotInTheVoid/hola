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
        } else if (!strcmp(argv[i], "-h") || !strcmp(argv[i], "--help")) {
            greeting = 0;
            help     = 1;
        } else if (!strcmp(argv[i], "-v") || !strcmp(argv[i], "--version")) {
            greeting = 0;
            version  = 1;
        }
    }
    if (greeting) {
        if (traditional) {
            puts("hello, world");
        } else {
            puts("Hello, World!");
        }
    } else {
        if (version){
            puts("hola 0.1.0");
            puts("");
            puts("This is free and unencumbered software released into the public domain.");
        } else if (help){
            puts("Usage: hola [OPTIONS]");
            puts("Output a framiliar and personalisable welcome.");
            puts("");
            puts("  -h, --help                  output this information then quit");
            puts("  -v, --version               output the version of hola then quit");
            puts("");
            puts("  -t, --traditional           output traditional welcome");
            puts("  -g TEXT, --greeting=TEXT    output TEXT as the welcome");
            puts("");
            puts("Homepage: https://github.com/aDotInTheVoid/hola");
            puts("Report Bugs to: https://github.com/aDotInTheVoid/hola/issues");
        }
    }
    return 0;
}
