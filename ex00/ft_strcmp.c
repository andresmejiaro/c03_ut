#include <stdio.h>
#include <string.h>
#include <libc.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char s1[20];
	char s2[20];

	strcpy(s1,"pato");
	strcpy(s2,"ganso");
	printf("Original: %s | %s resultado: %d\n",s1,s2,strcmp(s1,s2));
	printf("Compilada: %s | %s resultado: %d\n",s1,s2,ft_strcmp(s1,s2));
	strcpy(s1,"hola");
	strcpy(s2,"hola amigos");
	printf("Original: %s | %s resultado: %d\n",s1,s2,strcmp(s1,s2));
	printf("Compilada: %s | %s resultado: %d\n",s1,s2,ft_strcmp(s1,s2));
	strcpy(s1,"");
	strcpy(s2,"vacio");
	printf("Original: %s | %s resultado: %d\n",s1,s2,strcmp(s1,s2));
	printf("Compilada: %s | %s resultado: %d\n",s1,s2,ft_strcmp(s1,s2));
	strcpy(s1," ");
	strcpy(s2,"\t");
	printf("Original: %s | %s resultado: %d\n",s1,s2,strcmp(s1,s2));
	printf("Compilada:%s | %s resultado: %d\n",s1,s2,ft_strcmp(s1,s2));
	strcpy(s1,"\a");
	strcpy(s2,"hola amigos");
	printf("Original: %s | %s resultado: %d\n",s1,s2,strcmp(s1,s2));
	printf("Compilada: %s | %s resultado: %d\n",s1,s2,ft_strcmp(s1,s2));
	return 0;
}

