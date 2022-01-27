#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

   int maxwords = 1000, longest=0, i, len, index, isUnique, count[maxwords], totalw=0, longw;
   char words[maxwords][50], word[50], passage[1000];
   FILE *fptr;

   fptr = fopen("lab9.txt","w");
   printf("Enter the passage: \n");
   gets(passage);
   fprintf(fptr,"%s",passage);
   fclose(fptr);

   fptr = fopen("lab9.txt", "r");

   for (i=0; i<maxwords; i++){
       count[i] = 0;
   }

   index = 0;

   while (fscanf(fptr, "%s", word) != EOF){

       strlwr(word);
       len = strlen(word);

       if (ispunct(word[len - 1])){
           word[len - 1] = '\0';
       }

       if (len>longest){
           longest = len;
           longw = index;
       }

       isUnique = 1;
       totalw++;
       for (i=0; i<index && isUnique; i++){

           if (strcmp(words[i], word) == 0){
               isUnique = 0;
           }
       }

       if (isUnique){
           strcpy(words[index], word);
           count[index]++;
           index++;
       }

       else{
           count[i-1]++;
           totalw--;
       }
   }

   fclose(fptr);


   printf("\n\nThe passage stored in the file is: \n");
   fptr = fopen("lab9.txt","r");
   fscanf(fptr, "gets(passage)");
   printf("%s", passage);
   fclose(fptr);

   printf("\n\nLongest word is = %s", words[longw]);
   printf("\n\nTotal Unique word  = %d", totalw);

   printf("\n\nOccurrences of all distinct words in file: \n\n");

   for (i=0; i<index; i++){
       printf("%-15s = %d\n", words[i], count[i]);
   }

   return 0;
}
