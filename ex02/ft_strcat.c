#include <stdio.h>
#include <string.h>
#include <libc.h>

char	*ft_strcat(char *s1, char *s2);

int main(void)
{
	char s1[20];
	char s2[20];
	char *s3;
	char *s4;

	strcpy(s1,"pato");
	strcpy(s2,"ganso");
	s3=strcat(s1,s2);
	printf("Original: %s | %s resultado: %s \n",s1,s2,s3);
	
	strcpy(s1,"pato");
	strcpy(s2,"ganso");
	s4=ft_strcat(s1,s2);
	printf("Compilada: %s | %s resultado: %s \n",s1,s2,s4);

	strcpy(s1,"hola");
	strcpy(s2,"hola amigos");
	s3=strcat(s1,s2);
	printf("Original: %s | %s resultado:%s \n",s1,s2,s3);

	strcpy(s1,"hola");
	strcpy(s2,"hola amigos");
	s4=ft_strcat(s1,s2);
	printf("Compilada: %s | %s resultado:%s \n",s1,s2,s4);
	
	strcpy(s1,"");
	strcpy(s2,"vacio");
	s3=strcat(s1,s2);
	printf("Original: %s | %s resultado:%s \n",s1,s2,s3);
	
	strcpy(s1,"");
	strcpy(s2,"vacio");
	s4=ft_strcat(s1,s2);
	printf("Original: %s | %s resultado:%s \n",s1,s2,s4);
	
	strcpy(s1," ");
	strcpy(s2,"\t");
	s3=strcat(s1,s2);
	printf("Original: %s | %s resultado:%s \n",s1,s2,s3);
	
	strcpy(s1," ");
	strcpy(s2,"\t");
	s4=ft_strcat(s1,s2);
	printf("Compilada:%s | %s resultado:%s \n",s1,s2,s4);
	
	strcpy(s1,"\a");
	strcpy(s2,"hola amigos");
	s3=strcat(s1,s2);
	printf("Original: %s | %s resultado:%s \n",s1,s2,s3);
	
	strcpy(s1,"\a");
	strcpy(s2,"hola amigos");
	s4=ft_strcat(s1,s2);
	printf("Compilada: %s | %s resultado:%s \n",s1,s2,s4);
	return 0;
}

