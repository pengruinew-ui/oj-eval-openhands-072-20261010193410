#include <stdio.h>
int main(){
    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), stdin)) {
        // discard input
    }
    return 0;
}
