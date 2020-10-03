#include <stdio.h>

int main() {

    double write = 0.0;

    printf("Please enter a number. This number will be written to write_output.txt: ");
    scanf("%d", &write);

        FILE *jan;
        jan = fopen("write_output.txt", "w");
        fprintf(jan, "The output of [write] was:\n%d", write);
        fclose(jan);

    return 0;
}
