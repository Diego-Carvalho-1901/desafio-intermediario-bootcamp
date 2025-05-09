
int main (){

    int a, b, c, d;
    float med_simp;
    float desv_pad;
    float var;


    printf("Digite quatro numeros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    //M�dia Simples
    med_simp = (a+b+c+d)/ 4.0;

    printf("media simples = %.1f\n\n", med_simp);

    //vari�ncia
    var = pow((a-med_simp),(2.0)) +
        pow((b-med_simp),(2.0)) +
        pow((c-med_simp),(2.0)) +
        pow((d-med_simp),(2.0))/(4.0);

    printf("variancia = %.1f\n\n", var);

    //Desvio Padr�o
    desv_pad = sqrt((pow(a - med_simp, 2.0) +
                   pow(b - med_simp, 2.0) +
                   pow(c - med_simp, 2.0) +
                   pow(d - med_simp, 2.0)) / 4.0);

    printf("desvio padrao = %.2f", desv_pad);



    return 0;
}

