

int main() {
    char wrd1[100];
    char wrd2[100];
    char wrd3[100];

    printf("Digite a primeira palavra: ");
    scanf("%s", wrd1);

    printf("Digite a segunda palavra: ");
    scanf("%s", wrd2);

    printf("Digite a terceira palavra: ");
    scanf("%s", wrd3);


    if (wrd1[0] <= wrd2[0] && wrd2[0] <= wrd3[0]) {
        printf(" As palavras, ordenamente, sao: %s, %s, %s\n", wrd1, wrd2, wrd3);
    }
    else if (wrd1[0] <= wrd3[0] && wrd3[0] <= wrd2[0]) {
        printf("As palavras, ordenamente, sao: %s, %s, %s\n", wrd1, wrd3, wrd2);
    }
    else if (wrd2[0] <= wrd1[0] && wrd1[0] <= wrd3[0]) {
        printf("%s, %s, %s\n", wrd2, wrd1, wrd3);
    }
    else if (wrd2[0] <= wrd3[0] && wrd3[0] <= wrd1[0]) {
        printf("As palavras, ordenamente, sao: %s, %s, %s\n", wrd2, wrd3, wrd1);
    }
    else if (wrd3[0] <= wrd1[0] && wrd1[0] <= wrd2[0]) {
        printf("As palavras, ordenamente, sao: %s, %s, %s\n", wrd3, wrd1, wrd2);
    }
    else {
        printf("As palavras, ordenamente, sao: %s, %s, %s\n", wrd3, wrd2, wrd1);
    }

    return 0;
}
