#include <stdio.h>

int main(int argc, char *argv[]) {

    if(argc < 2) {
        printf("Use: %s <dir or file>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");

    if(file == NULL) {
        perror("Err on open file");
        return 1;
    }

    char line[256];
    while(fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    return 0;
}