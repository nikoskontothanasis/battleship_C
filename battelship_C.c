#include <stdio.h>
const size=10;//megethos tou pinaka
int main ()
{
	char pin_user [size][size];
	char pin_pc [size][size];
	int ship_user=0, ship_pc=0, tries_user=0, tries_pc=0, ep_tries=0;

	printf("Dose ta ploia tou stolou sou:");
	scanf("%d", &ship_user);
	while (ship_user<=1 && ship_user>=100)
	{
		printf("Lathos! Prospathise ksana!");
		scanf("%d",&ship_user);
	}

return 0;
}
printf("geia");
