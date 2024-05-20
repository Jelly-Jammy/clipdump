#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];

    char cmd[256];
    snprintf(cmd, sizeof(cmd), "powershell.exe -command 'Get-Clipboard' > %s", filename);

    system(cmd);

//    printf("Clipboard content saved to '%s'\n", filename);

    return 0;
}

