
int main() {
    int a, b;
    int mmc = 1, div = 2;
    int temp_a, temp_b;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &a);
    printf("digite outro numero: ");
    scanf("%d", &b);

    // Guardar c�pias para c�lculo posterior do MDC
    temp_a = a;
    temp_b = b;

    printf("\nfatoracao dos dois numeros:\n");

    while (a > 1 || b > 1) {
        if (a % div == 0 || b % div == 0) {
            printf("%3d %3d | %d\n", a, b, div);
            if (a % div == 0) a /= div;
            if (b % div == 0) b /= div;
            mmc *= div;
        } else {
            div++;
        }
    }

    //c�lculo do MDC:
    int mdc = (temp_a * temp_b) / mmc;

    printf("  1   1\n");
    printf("\nMMC = %d\n", mmc);
    printf("MDC = %d\n", mdc);

    return 0;
}
