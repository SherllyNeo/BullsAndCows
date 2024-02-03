#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define numberOfDigits 4
#define repeats 0



int generateFourDigitNumberNoRepeats() {
    int number = 0;
    int used = 0;
    for (int i = 0; i < numberOfDigits; i++) {
        int idx;
        do {
            idx = rand() % 9;  
        } while (used & (1 << idx));
        number = number * 10 + (idx + 1);
        used |= (1 << idx);
    }
    return number;
}


int main(void)
{
    srand(time(NULL));

    int randomNumber = generateFourDigitNumberNoRepeats();
    printf("%d\n",randomNumber);

    return EXIT_SUCCESS;
}
