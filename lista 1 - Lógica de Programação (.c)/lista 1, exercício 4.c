

int main(){
    int day;
    int month;
    int difr;

    printf("Dia do seu aniversario: ");
    scanf("%d", &day);

    printf("Mes do seu aniversario: ");
    scanf("%d", &month);

    if(month == 4){
        difr = day - 3;
        if(difr == 0){
            printf("Feliz aniversario!");
        }
        else if(difr>0){
            printf("Faltam %d dia(s) para o seu aniversario.", day);
        }
            else{
            printf("Passaram %d dia(s) do seu aniversario", -1*day);
            }
    }

    else if(month == 5){
        printf("Faltam %d dia(s) para o seu aniversario.", day + 27);
    }
    else if(month == 6){
        printf("Faltam %d dia(s) para o seu aniversario.", day + 58);
    }
    else if(month == 7){
        printf("Faltam %d dia(s) para o seu aniversario.", day + 88);
    }
    else if(month == 8){
        printf("Faltam %d dia(s) para o seu aniversaro.", day + 119);
    }
    else if(month == 9){
        printf("Faltam %d dia(s) para o seu aniversario.", day + 149);
    }
    else if(month == 10){
        printf("Faltam %d dia(s) para o seu aniversario.", day + 180);
    }
    else if(month == 11){
        printf("Faltam %d dia(s)para o seu aniversario.", day + 210);
    }
    else if(month == 12){
        printf("Faltam %d dia(s) para o seu aniversario.", day + 241);
    }
    else if(month == 3){
        printf("Passaram %d dias do seu aniversario.", 34 - day);
    }
    else if(month == 2){
        printf("Passaram %d dias do seu aniversario.",61 - day);
    }
    else if(month == 1){
        printf("Passaram %d dias do seu aniversario.",92 - day);
    }
    

    return 0;
}
