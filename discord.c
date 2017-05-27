#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <mem.h>
#include <rpc.h>
//#include <rpc.h>

int main() {
    char output[1000] = "";
    char prefix[21] = ":regional_indicator_";
    char *numbers[] = {":zero:\0", ":one:\0", ":two:\0", ":three:\0", ":four:\0", ":five:\0", ":six:\0", ":seven:\0", ":eight:\0", ":nine:\0"};

    char input[1000];
    printf("Please input the string to be converted: ");
    fgets(input, 1000, stdin);

    long length = (long) strlen(input);
    for (int i = 0; i < length - 1; i++) {
        if (isdigit((input[i]))) {
            char *current;
            current = malloc(sizeof(int) * 2);
            current[0] = input[i];
            current[1] = '\0';

            int digit;
            digit = atoi(current);

            char src[12];
            strcpy(src, numbers[digit]);
            strcat(output, src);
            strcat(output, " ");
        }
        else {
            if (input[i] == ' ') {
                strcat(output, "      ");
            }
            else {
                char current[2];
                current[0] = (char) tolower(input[i]);
                strcat(output, prefix);
                strcat(output, current);
                strcat(output, ": ");
            }
        }
    }

    HGLOBAL hMem =  GlobalAlloc(GMEM_MOVEABLE, 1001);
    memcpy(GlobalLock(hMem), output, 1001);
    GlobalUnlock(hMem);
    OpenClipboard(0);
    EmptyClipboard();
    SetClipboardData(CF_TEXT, hMem);
    CloseClipboard();
}
