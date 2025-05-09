
int main(){
	int ano_nas;
	int idade_25;
	int ano_50;
	int ano_ref = 1975;
	
	printf ("Digite o ano que voce nasceu: ");
	scanf ("%d", &ano_nas);
	
	if (ano_nas > ano_ref){
		ano_50 = ano_nas + 50;
		printf ("\nVoce vai fazer 50 anos em %d\n", ano_50);
	}
	else if (ano_nas < ano_ref){
		ano_50 = ano_nas + 50;
		printf("\n-> voce fez 50 anos em %d <-\n", ano_50);
	}
	else{
		printf ("\n-> voce faz 50 anos esse ano!!! <-\n");
	}
		
	
	return 0;
}
