#include <stdio.h>
#include <string.h>
#include <libc.h>

char *ft_strncat(char *s1, char *s2, unsigned int n);

int main(void)
{
	char s1[20];
	char s2[20];

	strcpy(s1,"pato");
	strcpy(s2,"ganso");
	printf("Original: %s | %s resultado: %s\n",s1,s2,strncat(s1,s2,1));
	strcpy(s1,"pato");
	strcpy(s2,"ganso");
	printf("Compilada: %s | %s resultado: %s\n",s1,s2,ft_strncat(s1,s2,1));
	
	strcpy(s1,"pato");
	strcpy(s2,"hola amigos");
	printf("Original: %s | %s resultado: %s\n",s1,s2,strncat(s1,s2,2));
	strcpy(s1,"pato");
	strcpy(s2,"hola amigos");
	printf("Compilada: %s | %s resultado: %s\n",s1,s2,ft_strncat(s1,s2,2));
	
	strcpy(s1,"parametro cero");
	strcpy(s2,"nulo");
	printf("Original: %s | %s resultado: %s\n",s1,s2,strncat(s1,s2,0));
	strcpy(s1,"parametro cero"4);
	strcpy(s2,"nulo");
	printf("Compilada: %s | %s resultado: %s\n",s1,s2,ft_strncat(s1,s2,0));
	
	strcpy(s1," ");
	strcpy(s2,"\t");
	printf("Original: %s | %s resultado: %s\n",s1,s2,strncat(s1,s2,10));
		strcpy(s1," ");
	strcpy(s2,"\t");
	printf("Compilada:%s | %s resultado: %s\n",s1,s2,ft_strncat(s1,s2,10));
	
	strcpy(s1,"\a");
	strcpy(s2,"hola amigos");
	printf("Original: %s | %s resultado: %s\n",s1,s2,strncat(s1,s2,10));
	strcpy(s1,"\a");
	strcpy(s2,"hola amigos");
	printf("Compilada: %s | %s resultado: %s\n",s1,s2,ft_strncat(s1,s2,10));
	return 0;
}

