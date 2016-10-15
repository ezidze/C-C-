#include <stdio.h>

#include<stdlib.h>

#include<assert.h>

#define SIZE 1000


int strlen (char* link){

   int numerator = 0;
   while ( *(link++) ) ++numerator; 

   return numerator;

}

char* strcat (char* Where, char* What, int length){

	int len=strlen(Where);
	for ( int i = 0; i < length; ++i ){
		*( Where+ len + i ) = *( What + i );		
		if (i >= strlen(What) ){			
			*( Where + i) = 0;
		}
		
	}

	return Where;
}

char* strcopy(char *end_line, char *first_line, int lenght){

	for( int i = 0; i < lenght; ++i){
		*(end_line + i) = *(first_line + i);
	}

	return end_line;

}

char* strStr( char* one_line, char* two_line ){

	int i = 0;
	for( ; *one_line; one_line++ ){
		i = 0;
		while( *( one_line + i ) == *( two_line + i ) ){
			++i;
			if ( *(two_line + i) ) break;
		}

	}

	return (one_line+i);
}
/*
char* strTok(char* one_line, char* two_line){

}
*/
int main(){

	char line[SIZE];
	printf( "enter a line of text\n" );
	gets( line );
    printf( "You inputed:" );
	printf( "%s\n", line );
	printf( "the string has a length " );
	printf( "%d\n", strlen(line) );

	system("pause");

	char copy[SIZE];
	int simbol = 0;
	printf("How many simbols do you want to copy?");
	scanf("%d\n", simbol);
	printf("Copy is:");
	printf("%s\n",*strcopy( copy, line, simbol));
	

	system("pause");

	char add_line[SIZE];
	int len = 0;
	printf( "What will you want to add in line?\n" );
	gets( add_line );
	printf("How many simbols do you want to add?");
	scanf("d\n", len );
	printf( "the string is " );
	printf("%s\n",*strcat(line, add_line, len));

	system("pause");



	return 0;

}