// Remove vowels from a string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Set size of comment 1000
#define SIZE 1000

// Function Prototype
char *disemvowel(const char *str);

int main(void)
{
    // Dynamically allocate space
    char *s = malloc(SIZE * sizeof(char));
    // Check for successful memory allocation
    if (s == NULL)
    {
        printf("Memory cannot be allocated\n");
        return 1;
    }

    // Take comment from user input
    printf("Comment: ");
    scanf("%[^\n]s",s);

    // Store returned value of disemvowel function
    char *d = disemvowel(s);

    // Print the resulting string
    printf("\"%s\" without vowels: %s\n", s, d);

    // Free dynamically allocated spaces
    free(s);
    free(d);
    return 0;
}

char *disemvowel(const char *str)
{
    // Initialize variables
    int j = 0, n = strlen(str);

    // Dynamically allocate space
    char *des = malloc(n + 1);

    // Check for vowels char by char and store only the chars except vowels in des
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            continue;
        }
        else
        {
            des[j] = str[i];
            j++;
        }
    }

    // End string with null character
    des[j] = '\0';

    // Return resulting string
    return des;
}