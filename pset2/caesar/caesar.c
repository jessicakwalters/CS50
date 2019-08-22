#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (int argc, string k[])
{
    if (argc != 2) 
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    
    printf("plaintext: ");
    string p = get_string();
    
    if (p != NULL)
    {
        

        // loop through the characters of p - using j
        printf("ciphertext: ");
        for (int j = 0, n = strlen(p); j < n; j++)
        {
            int m = atoi(k[1]) % 26;
            
            if (p[j] >= 'a' && p[j] <= 'z')
             {
                printf("%c", ((p[j] - 'a' + m ) % 26) + 'a');
             }
             else if (p[j] >= 'A' && p[j] <= 'Z')
             {
                 printf("%c", ((p[j] - 'A' + m ) % 26) + 'A');
             }

        }
    }
    
    printf("\n");
    
    return 0;
    
}