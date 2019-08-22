#define _XOPEN_SOURCE
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./crack hash\n");
        return 1;
    }
    else
    {
        // get the users salt from the command line input
        char salt[2] = { argv[1][0], argv[1][1] };
        printf("salt is: %c%c\n", salt[0], salt[1]);
        string cipher[] = { argv[1] };
        printf("cipher is: %s\n", *cipher);
        
        // create a loop that
        // starting with a single character iterates through the alphabet
        string key;
            
            for ( char i = 'A'; i <= 'z'; i ++) {
                
                *key = i;
                string guess_cypher = crypt(&i, salt[0]salt[1]);
                
                if ( guess_cypher == *cipher) {
                    
                printf("key is: %c\n", i);
                
                }
                   
            }

        
        // runs each iteration through the crypt function with the salt
        // checks to see if the resulting cipher text matches the input cipher text
        // if not, calls the iterator function again
        
        // char *crypt(const char *key, const char *salt);
        
    }
}