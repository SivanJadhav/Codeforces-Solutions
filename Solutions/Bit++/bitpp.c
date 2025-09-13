#include <stdio.h>

#define OPERATION_LENGTH 4
#define add 1
#define subtract -1

int substrOperation(char sequence[OPERATION_LENGTH]);

int main(void)
{
    int x = 0;
    int number_of_sequences = 0;
    char sequence[OPERATION_LENGTH];

    scanf("%d", &number_of_sequences);
    for (int i = 0; i < number_of_sequences; i++)
    {
        scanf("%s", sequence);
        int result = substrOperation(sequence);
        if (result == add)
        {
            x++;
        }
        else if (result == subtract)
        {
            x--;
        }
    }
    printf("%i\n", x);
}

int substrOperation(char sequence[OPERATION_LENGTH])
{
    for (int i = 0; i < OPERATION_LENGTH; i++)
    {
        if (sequence[i] == '+')
        {
            return add;
        }
        else if (sequence[i] == '-')
        {
            return subtract;
        }
    }
    return -2;
}
