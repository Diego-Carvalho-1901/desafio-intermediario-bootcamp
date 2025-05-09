
int main() {
    int a, b, c;

    printf("digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("O maior numero sera: %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("O maior numero sera: %d\n", b);
    }
    else {
        printf("O maior numero sera: %d\n", c);
    }

    return 0;
}
