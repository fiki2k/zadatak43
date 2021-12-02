// Program treba naci prosjek n brojeva pomocu funkcije.

#include <stdio.h>

float prosjek(int n,float* a)
{
	float avg,sum;
	int i;
	
	 for (i = 0; i < n; ++i) {
        printf("%d. Unesi broj: ", i + 1);
        scanf("%f", &a[i]);
        sum += a[i];
    }

    avg = sum / n;
	return avg;
	
}

int main() {
    int n, i;
    float num[100];

    printf("Unesi broj elemenata: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! Broj treba biti u rasponu (1 do 100).\n");
        printf("Unesi ponovo broj: ");
        scanf("%d", &n);
    }
	
	//Pozivamo funkciju
	float x=prosjek(n,num);
    printf("Prosjek = %.2f", x);
    return 0;
}
