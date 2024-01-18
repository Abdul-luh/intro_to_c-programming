#include <stdio.h>

// PROTOTYPES 

// PROTOTYPES END

int main() {

    int ages[5] = {41,
                  52,
                  53,
                  44,
                  55};
    int sum = 0;
    for (int i = 0; i < 5; i++){
        sum += ages[i];
    }

    int avg = sum / 5;
    printf("%d ", avg);

    return 0;
}
