#include <stdio.h>
#include <string.h>

int main() {
   char string[100];
   int i, len, vowels = 0;

   printf("Enter a string: ");
   scanf("%[^\n]", string);

   len = strlen(string);

   for (i = 0; i < len; i++) {
      if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
          string[i] == 'o' || string[i] == 'u' || string[i] == 'A' ||
          string[i] == 'E' || string[i] == 'I' || string[i] == 'O' ||
          string[i] == 'U') {
         vowels++;
      }
   }

   printf("The number of vowels in '%s' is %d.\n", string, vowels);

   return 0;
}
