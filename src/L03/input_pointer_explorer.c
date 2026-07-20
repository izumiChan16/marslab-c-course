#include <stdio.h>

int main(void)
{
    int sample_count = 0;
    int *sample_count_address = &sample_count;
    int input_result;
    int *no_destination = NULL;

    puts("Input and pointer explorer");
    puts("Enter a sample count from 0 to 99:");

    /*
     * scanf needs a destination where it can write the input.
     * &sample_count means "the address of sample_count".
     * Do not add & before sample_count_address: it already stores an address.
     */
    input_result = scanf("%d", &sample_count);

    if (input_result != 1) {
        puts("Input was not an integer. Nothing was changed.");
        return 1;
    }

    if (sample_count < 0 || sample_count > 99) {
        puts("Input must be from 0 to 99.");
        return 1;
    }

    puts("\nObserve these four descriptions of the same variable:");
    printf("value: %d\n", sample_count);
    printf("address found using &: %p\n", (void *)&sample_count);
    printf("address stored in the pointer: %p\n", (void *)sample_count_address);
    printf("value found using *: %d\n", *sample_count_address);

    /*
     * *sample_count_address is another way to reach sample_count.
     * This changes the original variable, not a copy of it.
     *
     * TRY 1: Before running, predict the final value for input 12.
     * TRY 2: Change 1 to another small positive number and explain the result.
     */
    *sample_count_address += 1;
    printf("final sample count: %d\n", sample_count);

    /*
     * NULL means "this pointer has no usable destination".
     * Checking it is safe; writing *no_destination would be invalid.
     *
     * TRY 3: Replace &sample_count in scanf with sample_count_address.
     * Why does the program still work? Draw sample_count, its address, and
     * sample_count_address before answering.
     */
    if (no_destination == NULL) {
        puts("NULL pointer check: no destination, so do not dereference it.");
    }

    return 0;
}
