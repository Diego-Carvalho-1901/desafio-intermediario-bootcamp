

int main() {
    float peso;
	float altura;
	float TMB;
    int idade;
    char gen;

    printf("Qual o seu genero (M para masculino ou F para feminino): ");
    scanf(" %c", &gen);

    printf("Qual o seu peso (kg): ");
    scanf("%f", &peso);

    printf("Qual a sua altura (cm): ");
    scanf("%f", &altura);

    printf("Qual a sua idade (anos): ");
    scanf("%d", &idade);

    if (gen == 'M') {
        TMB = 66.47 + (13.75 * peso) + (5.003 * altura) - (6.755 * idade);
        printf("Sua taxa metabolica basal e de: %.2f calorias/dia.\n", TMB);
    }
    else if (gen == 'F') {
        TMB = 655.09 + (9.563 * peso) + (1.85 * altura) - (4.676 * idade);
        printf("Sua taxa metabolica basal e de: %.2f calorias/dia.\n", TMB);
    }
    else {
        printf("Genero nao identificado! Insira apenas 'M' ou 'F'.\n");
    }

    return 0;
}
