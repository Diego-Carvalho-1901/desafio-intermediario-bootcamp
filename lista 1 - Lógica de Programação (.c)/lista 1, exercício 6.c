
int main (){
    float valor;
    float desconto;
    float valor_Fin;
    float desconto_sobre_valor;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Aplique o desconto: ");
    scanf("%f", &desconto);




    desconto_sobre_valor = valor * desconto/100;
    valor_Fin = valor - desconto_sobre_valor;

    printf("/////////////////////////////////////////////\n");
    printf("  VALOR ORIGINAL  | DESCONTO | VALOR FINAL\n");
    printf("/////////////////////////////////////////////\n");
    printf("       %.2f       |   %.2f   | %.2f\n", valor, desconto_sobre_valor, valor_Fin);

    return 0;
}
