#include <stdio.h>
#include <math.h>
#include <locale.h>



int GetOut (void){
	int Restart;
	printf("������ 0 ���� ������ ���������\n");
	while(!scanf("%d", &Restart)){
		while(getchar() != '\n');
			printf("������\n"); 	
	}
	return Restart;
}


int main(void){
	setlocale(LC_ALL, "");
	double y;
printf("����� ����������\n");
	printf("����� ������ ������� 403 ������ 6 ������� 1 �����������\n ");

	do {
		for(double x=0; x <=1; x +=0.1){
		if (x == 0){
			printf("y = %0.4lf		x = 0\n",y=2./3);
			}
		else {
			y = (2./3 * (sin(x)/x)) + ((1/(x*x)) * sin(1/x));
			printf("y = %0.4lf		x = %0.4lf\n", y, x);
		
		}
			}
	} while (GetOut() != 0);
}


