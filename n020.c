#include <stdio.h>
#include <stdlib.h> 
#include <string.h> // предоставляет функции для работы со строками


char * my_strcat(const char * str1, const char * str2)
{
	unsigned int length1 = strlen(str1), length2 = strlen(str2), i = 0; // strlen считает количество символов
	char * res = (char*)malloc(sizeof(char) * (length1 + length2));

	for (i = 0; i < length1; ++i)
		res[i] = str1[i];
	for (i = 0; i < length2; ++i)
		res[length1 + i] = str2[i]; // lenght длина введённого слова

	return res;
}

int main()
{
	const char * str1 = "Иллюзия ", *str2 = "луны";
	char * res = my_strcat(str1, str2);

	printf("%s", res);
	free(res);

	system("Pause");

	return 0;
}
