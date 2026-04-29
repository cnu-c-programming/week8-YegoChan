#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    
    // 쿵짝쿵짝
    for (int i = argc - 1; i > 1; i--) {
        for (int j = 1; j < i; j++) {
            if (strcmp(argv[j], argv[j + 1]) > 0) {
                char* swapper = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = swapper;
            }
        }
    }

    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}