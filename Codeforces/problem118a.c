#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char string[100];

    scanf("%s",string);

    for(int i = 0; i < strlen(string); i++){
        switch(string[i]){
            case 'A':
            case 'a':
                break;
            case 'E':
            case 'e':
                break;
            case 'I':
            case 'i':
                break;
            case 'O':
            case 'o':
                break;
            case 'U':
            case 'u':
                break;
            case 'Y':
            case 'y':
                break;
            default:
                printf(".%c", tolower(string[i]));
                break;
        }
    }

    return 0;
}
