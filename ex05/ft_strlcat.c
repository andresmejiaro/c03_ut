#include <stdio.h>
#include <string.h>
#include <libc.h>

int ft_strlcat(char *s1, char *s2, unsigned int n);

int main(void)
{
	char s1[20];
	char s2[20];
	char *s3;
	int parametro;
	long int res;

	parametro = 0;
	while (parametro < 12){
		printf("parametro %d\n",parametro);
		strcpy(s1,"pato");
		strcpy(s2,"ganso");
		printf("Cadenas: %s | %s\n",s1,s2);
		res = strlcat(s1,s2,parametro);
		printf("resultado original:%s  %lu\n",s1,res);
		strcpy(s1,"pato");
		strcpy(s2,"ganso");
		res = ft_strlcat(s1,s2,parametro);
		printf("resultado compilada:%s  %lu\n",s1,res);
		parametro++;
	}
	return 0;
}

