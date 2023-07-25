#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int startsize;
    int endsize;
    do
    {
        startsize = get_int("Startsize: ");
    }
    while (startsize < 9);

    // TODO: Prompt for end size
    do
    {
        endsize = get_int("Endsize: ");
    }
    while (endsize < startsize);

    // TODO: Calculate number of years until we reach threshold
    int count = 0;
    while (startsize < endsize)
    {
        startsize = (int) startsize + startsize / 3 - startsize / 4;
        count = count + 1;
    }


    // TODO: Print number of year
    printf("Years: %i\n", count);
}
