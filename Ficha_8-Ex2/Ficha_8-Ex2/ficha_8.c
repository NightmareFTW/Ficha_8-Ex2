#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct dado_s {
	char nome_latino[128];
	char zona_origem[128];
	char localizacao_jardim[128];
	int ano_germinacao;
};

typedef struct dado_s planta_s;

planta_s dado_s() {

	planta_s d;

	printf("Nome latino: ");
	gets(d.nome_latino);
	printf("Zona de Origem: ");
	gets(d.zona_origem);
	printf("Localizacao no jardim: ");
	gets(d.localizacao_jardim);
	printf("Ano de germinacao: ");
	scanf_s("%i", &d.ano_germinacao);

	return d;
}


int main() {
	int dummy = 0;
	char block = 219;

	planta_s d;

	d = dado_s();


	printf("\n\n%cDados da planta%c\n\nNome latino: %s\nZona de Origem: %s\nLocalização no jardim: %s\nAno de germinacao: %i\n\n", block, block, d.nome_latino, d.zona_origem, d.localizacao_jardim, d.ano_germinacao);

	system("pause");

}