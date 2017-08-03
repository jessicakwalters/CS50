#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
   string name = get_string();

   if (name != NULL)
   {
        for (int i = 0, n = strlen(name); i < n; i++)
        {
            if (i == 0 && isalpha(name[i]))
            {
                printf("%c", toupper(name[i]));
            }
            else if (isblank(name[i]) && isalpha(name[i + 1]))
            {
                printf("%c", toupper(name[i + 1]));
            }
        }
   }
   printf("\n");
}
