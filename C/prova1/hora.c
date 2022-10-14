#include<stdio.h>

int main() {
	int horaInicial, minutoInicial;
	int horaFinal, minutoFinal;
	int minutoTotalInicial, minutoTotalFinal ;
	int horaDuracao, minutoDuracao;
	
	scanf("%d:%d", &horaInicial, &minutoInicial);
	scanf("%d:%d", &horaFinal, &minutoFinal);

	if(horaInicial > horaFinal){
		if(minutoInicial > minutoFinal) {
			minutoTotalInicial = (24*60 - horaInicial*60 - minutoInicial);
			//printf("%d\n", minutoTotalInicial);
			minutoTotalFinal = (horaFinal*60 + minutoFinal);
			horaDuracao = (minutoTotalInicial + minutoTotalFinal)/60;	
			minutoDuracao = (minutoTotalInicial + minutoTotalFinal)%60;
		}
		else if(minutoInicial < minutoFinal) {
			minutoTotalInicial = (24*60 - horaInicial*60 - minutoInicial);
			//printf("%d\n", minutoTotalInicial);
			minutoTotalFinal = (horaFinal*60 + minutoFinal);
			horaDuracao = (minutoTotalFinal + minutoTotalInicial)/60;	
			minutoDuracao = minutoFinal - minutoInicial;	
		}
	}
	else {
		minutoTotalInicial = horaInicial*60 + minutoInicial;
		minutoTotalFinal = horaFinal*60 + minutoFinal;
		horaDuracao = (minutoTotalFinal - minutoTotalInicial)/60;
		minutoDuracao = (minutoTotalFinal - minutoTotalInicial)%60;
	}
		printf("%02d:%02d", horaDuracao, minutoDuracao);
}
