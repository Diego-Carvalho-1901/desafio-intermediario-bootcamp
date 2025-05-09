
int main(){
	int temp_C;
	int temp_F;
	int num;
	char letra;
	
	printf ("\nsua temperatura esta na escala celsius ou farenheit ? (digite C para celsius e F pra farenheit): ");
	scanf (" %c", letra);
	
	if(letra == 'C'){
		printf ("temperatura atual: ");
		scanf ("%d", &num);
		temp_C = num;
		temp_F = ((9/5) * temp_C) + 32;
		
		printf ("\ntemperatura em celsius = &d�C\n", temp_C);
		printf ("temperatura em farenheit = %d�F\n", temp_F);
	}	
	else if (letra == 'F'){
		printf ("temperatura atual: ");
		scanf ("%d", &num);
		temp_F = num;
		temp_C = (5 * (temp_F - 32))/9;
		
		printf ("\nTemperatura em celsius = %d�C\n", temp_C);
		printf ("Temperatura em Farenheit = %d�F\n", temp_F);
	}
		
	
	return 0;
}
