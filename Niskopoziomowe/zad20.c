#include <stdio.h>

void main(){

char text[] = "Seba jest spoko";

char* second_word (char text[]){
int i;

for(i=0; text[i] != ' ' ; i++);
i++;
return &text[i];
}
printf("%p \n", second_word(text));
printf("%p \n", &text[5]);
}
