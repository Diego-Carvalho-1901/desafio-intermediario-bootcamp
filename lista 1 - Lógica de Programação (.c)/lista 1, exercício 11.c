

int main() {
    int num_1, num_2, num_3;
    int num_menor, num_meio, num_maior;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &num_1, &num_2, &num_3);

    //Primeiro caso (a menor)
      if (num_1 <= num_2 && num_1 <= num_3) {
        num_menor = num_1;
        if (num_2 <= num_3) {
            num_meio = num_2;
            num_maior = num_3;
        } else {
            num_meio = num_3;
            num_maior = num_2;
        }
    }


    //Segundo caso (num_2 menor)

      if (num_2 <= num_1 && num_2 <= num_3) {
    	num_menor = num_2;
    if (num_1 <= num_3) {
        num_meio = num_1;
        num_maior = num_3;
    } else {
        num_meio = num_3;
        num_maior = num_1;
    }
}


    // Terceiro caso (num_3 menor)

      if (num_3 <= num_2 && num_3 <= num_1) {
        num_menor = num_3;
        if (num_1 <= num_2) {
            num_meio = num_1;
            num_maior = num_2;
        } else {
            num_meio = num_2;
            num_maior = num_1;
        }
    }

    printf("os numeros em ordem crescente serao: %d %d %d", num_menor,num_meio,num_maior);







    return 0;
}







