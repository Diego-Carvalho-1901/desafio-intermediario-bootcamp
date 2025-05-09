

int main (){

    int a, b, c, d;
    float med_simp;
    float med_geo;
    float med_harm;


    printf("Digite quatro numeros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    //M�dia Simples
    med_simp = (a+b+c+d)/ 4.0;

    printf("media simples = %.1f\n\n", med_simp);


    //M�dia geom�trica
    med_geo = pow((a*b*c*d),(1.0/4.0));


    printf("media geometrica = %.2f\n\n", med_geo);

    //M�dia Harm�nica
    med_harm = (4.0)/(1.0 / a ) + (1.0 / b ) + (1.0 / c ) + (1.0 / d);

    printf("media harmonica = %.2f", med_harm);


    return 0;
}
