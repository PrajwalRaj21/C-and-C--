#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Enter characters (Enter to stop): ");
    
    while(1) {
        c = getchar();
        
        if(c == '\n') {
            break;
        }
        
        if(islower(c)) {
            printf("%c", c);
        } else {
            printf("%c", tolower(c));
        }
    }
    
    printf("\n");
    return 0;
}