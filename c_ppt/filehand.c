# include<stdio.h>

int main( ){

FILE *fp ;

char ch ;

fp = fopen("extras.txt", "r" ) ; // open a file for reading

while(1){ ch = fgetc(fp); if(ch==EOF) break; printf("%c",ch ) ;

}

fclose(fp) ;

}