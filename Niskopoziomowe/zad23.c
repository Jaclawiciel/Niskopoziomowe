#include <stdio.h>

void zero_tab( int tab[], int size){
int i =0;
for(; i<size; i++){
	*tab = 0;
	tab++;
	}
}

void main(){
int tab[3] = {1, 2, 3};
int i = 0;
zero_tab(tab, 3);

for(; i < 3; i++){
printf("Na miejsu %d tablicy jest %d \n", i, tab[i]);
}
}
