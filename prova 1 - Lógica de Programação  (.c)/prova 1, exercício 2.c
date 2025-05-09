
int main(){
	int num;
    int positivo = 0;
    int negativo = 0;

    printf("Digite numeros inteiros abaixo (0 para parar)\n");

    while (1) {
        printf("Numero: ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num > 0) {
            positivo++;
        } else {
            negativo++;
        }
    }

    printf("\nTotal de numeros positivos: %d\n", positivo);
    printf("Total de numeros negativos: %d\n", negativo);
		
	
	return 0;
}
