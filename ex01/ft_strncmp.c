#include <stdio.h>
#include <string.h>
#include <libc.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char s1[20];
	char s2[20];
	int parametro;

	parametro = 0;
	printf("parametro %d\n",parametro);
	strcpy(s1,"pato");
	strcpy(s2,"ganso");
	printf("Original: %s | %s resultado: %d\n",s1,s2,strncmp(s1,s2,parametro));
	printf("Compilada: %s | %s resultado: %d\n",s1,s2,ft_strncmp(s1,s2,parametro));
	parametro = 4;
	printf("parametro %d\n",parametro);
	strcpy(s1,"hola");
	strcpy(s2,"hola amigos");
	printf("Original: %s | %s resultado: %d\n",s1,s2,strncmp(s1,s2,parametro));
	printf("Compilada: %s | %s resultado: %d\n",s1,s2,ft_strncmp(s1,s2,parametro));
	parametro = 3;
	printf("parametro %d\n",parametro);
	strcpy(s1,"");
	strcpy(s2,"vacio");
	printf("Original: %s | %s resultado: %d\n",s1,s2,strncmp(s1,s2,parametro));
	printf("Compilada: %s | %s resultado: %d\n",s1,s2,ft_strncmp(s1,s2,parametro));
	parametro = 3;
	printf("parametro %d\n",parametro);
	strcpy(s1," ");
	strcpy(s2,"\t");
	printf("Original: %s | %s resultado: %d\n",s1,s2,strncmp(s1,s2,parametro));
	printf("Compilada:%s | %s resultado: %d\n",s1,s2,ft_strncmp(s1,s2,parametro));
	parametro = 3;
	printf("parametro %d\n",parametro);
	strcpy(s1,"\a");
	strcpy(s2,"hola amigos");
	printf("Original: %s | %s resultado: %d\n",s1,s2,strncmp(s1,s2,parametro));
	printf("Compilada: %s | %s resultado: %d\n",s1,s2,ft_strncmp(s1,s2,parametro));
	return 0;
}

