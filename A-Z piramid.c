#include<stdio.h> 
int main(){
	char ch;
	int loop;
	for(ch='A',loop=1;loop<=26;loop++, ch++){
		printf("%c ", ch);
		if((loop%5)==0) printf("\n");
	}
	return(0);
}
