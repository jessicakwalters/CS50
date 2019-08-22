#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string k[])
{
    if (argc != 2) 
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }
    for (int i = 0, n = strlen(k[1]); i < n; i++)
    {
        if (!isalpha(k[1][i]))
        {
            printf("Usage: ./vigenere k\n");
            return 1;
        }
    }
    printf("plaintext: ");
    string p = get_string();
    
    if (p != NULL)
    {
        
        // keep track of key index using i
        int i = 0;
        // loop through the characters of p - using j
        
        for (int j = 0, n = strlen(p); j < n; j++)
        {
         // if the current character is alphabetic
         if (isalpha(p[j]))
         {
             // apply the current letter of the key
             if (k[1][i] >= 'a' && k[1][i]<= 'z' && p[j] >= 'a' && p[j] <= 'z')
             {
                printf("%c", ((p[j] - 'a' + k[1][i] - 'a') % 26) + 'a');
             }
             else if (k[1][i] >= 'A' && k[1][i]<= 'Z' && p[j] >= 'a' && p[j] <= 'z')
             {
                 printf("%c", ((p[j]  - 'a' + k[1][i] - 'A') % 26) + 'a');
             }
             else if (k[1][i] >= 'a' && k[1][i]<= 'z' && p[j] >= 'A' && p[j] <= 'Z')
             {
                 printf("%c", ((p[j] - 'A' + k[1][i] - 'a') % 26) + 'A');
             }
             else if (k[1][i] >= 'A' && k[1][i]<= 'Z' && p[j] >= 'A' && p[j] <= 'Z')
             {
                 printf("%c", ((p[j] - 'A' + k[1][i] - 'A') % 26) + 'A');
             }
             //increment i
             i++;
         }
         // if the current character is not aphabetic, restart the loop without incrementing 'i'
         else
         {
             printf("%c", p[j]);
         }
         // if i equals the length of the key, then reset i to zero
         if (i == strlen(k[1]))
         {
             i = 0;
         }
         if (j == n - 1)
         {
             printf("\n");
         }
        }
    }
    
    
    
    
}