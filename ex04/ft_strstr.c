#include <stdio.h>
#include <string.h>
#include <libc.h>

char *ft_strstr(char *s1, char *s2);

int main(void)
{
	char s1[40];
	char s2[40];
	int k;
	
	// añadir un caso donde la palabra a encontrar este parcialmente al final de la oriacion
	strcpy(s1,"pato");
	strcpy(s2,"a");
	
	printf("Original: %s | %s resultado: %s \n",s1,s2,strstr(s1,s2));
	
	strcpy(s1,"pato");
	strcpy(s2,"a");

	printf("Compilada: %s | %s resultado: %s \n",s1,s2,ft_strstr(s1,s2));
	strcpy(s2,"hola");
	strcpy(s1,"hola amigos");
	printf("Original: %s | %s resultado:%s \n",s1,s2,strstr(s1,s2));
	printf("Compilada: %s | %s resultado:%s \n",s1,s2,ft_strstr(s1,s2));
	strcpy(s1,"la otra cadena esta vacia");
	//strcpy(s2,"");
	*s2 = '\0';
	printf("Original: %s | %s resultado:%s \n",s1,s2,strstr(s1,s2));
	printf("Compilada: %s | %s resultado:%s \n",s1,s2,ft_strstr(s1,s2));
	strcpy(s1,"comida");
	strcpy(s2,"dama");
	printf("Original: %s | %s resultado:%s \n",s1,s2,strstr(s1,s2));
	printf("Compilada:%s | %s resultado:%s \n",s1,s2,ft_strstr(s1,s2));
	strcpy(s1,"\a");
	strcpy(s2,"hola amigos");
	printf("Original: %s | %s resultado:%s \n",s1,s2,strstr(s1,s2));
	printf("Compilada: %s | %s resultado:%s \n",s1,s2,ft_strstr(s1,s2));
	return 0;
}

