#include<stdio.h>
extern int eConsumption1[5][12];
void showMenu (void)
{
	printf("\n\n");
	printf("[A] Display total power consumption of the household for a selected month.\n");
	printf("[B] Display quarterly average power consumption of a selected household in 2014.\n");
	printf("[C] Display the top three power consumptions of a selected household from June to December.\n");
	printf("[D] Display the minimum total power consumption and its corresponding monnth.\n");
	printf("[E] Display the quarterly average power consumption of the household in 2014.\n");
	printf("[F] Display the differences in average power consumption and HDB 5 room power consumption in each month.\n");
	printf("[Q] Exit the programme.\n");
	printf("\n\n\n");
}
void dispTotal(void)
{
	int total = 0, k, householdd;
	printf("Please select a household.\n");
	printf("[1] HDB 1-Room\n");
	printf("[2] HDB 2-Room\n");
	printf("[3] HDB 3-Room\n");
	printf("[4] HDB 4-Room\n");
	printf("[5] HDB 5-Room\n");
	printf("\n\n\n");
	scanf("%d", &householdd);
	printf("You have selected HDB %d-Room.\n",householdd);
	householdd = householdd - 1;
	for (k=0; k<5; k++){
		total = total + eConsumption1[k][householdd];
	}
	printf("===============================================================================\n");
	printf("The total power consumption of the household for a selected month is %4dkWh.\n", total);
	printf("===============================================================================\n");
}
void dispQuarter(void)
{
	extern float quarter[];
	float perQuarter = 0.0, average;
	int k = 0, j = 0, x = 0, y = 0, z = 0, household;
	printf("Please select which household.\n");
	printf("[1] HDB 1-Room\n");
	printf("[2] HDB 2-Room\n");
	printf("[3] HDB 3-Room\n");
	printf("[4] HDB 4-Room\n");
	printf("[5] HDB 5-Room\n");
	printf("\n\n\n");
	scanf("%d", &household);
	printf("You have selected HDB %d-Room.\n", household);
	household = household - 1;
	do {
		for (k = 0; k < 3; k++){
			perQuarter = perQuarter + eConsumption1[household][k];
		}
		average = perQuarter / 3;
		quarter[j] = average;
		j++;
		perQuarter = 0;
		for (k = 3; k < 6; k++){
			perQuarter = perQuarter + eConsumption1[household][k];
		}
		average = perQuarter / 3;
		quarter[j] = average;
		j++;
		perQuarter = 0;
		for (k = 6; k < 9; k++){
			perQuarter = perQuarter + eConsumption1[household][k];
		}
		average = perQuarter / 3;
		quarter[j] = average;
		j++;
		perQuarter = 0;
		for (k = 9; k < 12; k++){
			perQuarter = perQuarter + eConsumption1[household][k];
		}
		average = perQuarter / 3;
		quarter[j] = average;
		z++;
	} while (z < 1);


	for (x = 0; x < 4; x++){
		printf("=================================================================\n");
		printf("The average power consumption for the 4 quarters is %.2f.\n", quarter[x]);
		printf("=================================================================\n");
	}
}
void dispTop(void)
{
	int top1 = 0, top2 = 0, top3 = 0, household, j;
	printf("Please select which household.\n");
	printf("[1] HDB 1-Room\n");
	printf("[2] HDB 2-Room\n");
	printf("[3] HDB 3-Room\n");
	printf("[4] HDB 4-Room\n");
	printf("[5] HDB 5-Room\n");
	printf("\n\n\n");
	scanf("%d", &household);
	printf("You have selected HDB %d-Room.\n", household);
	household = household - 1;
	for (j = 5; j<11; j++){
			if (top1<eConsumption1[household][j]) {
				top3 = top2;
				top2 = top1;
				top1 = eConsumption1[household][j];
			}
			else if (top2<eConsumption1[household][j]){
				top2 = eConsumption1[household][j];
			}
			else if (top3<eConsumption1[household][j]){
				top3 = eConsumption1[household][j];
			}
		}
	for (j = 5; j<11; j++){
		if (top1<=eConsumption1[household][j]){
			top1 = eConsumption1[household][j];
		}
		else if (top2<=eConsumption1[household][j]){
			top2 = eConsumption1[household][j];
		}
		else if (top3<eConsumption1[household][j]){
			top3 = eConsumption1[household][j];
		}
	}
	printf("========================================================================================\n");
	printf("The top three power consumptions of HDB %d-Room from June to December is %3d,%3d,%3d.\n", household+1, top1, top2, top3);
	printf("========================================================================================\n");
}
void dispMin(void)
{
	extern int month[];
	char monthName;
	int minimum = 0, perMonth = 0, x = 0, j = 0, k = 0, monthNo = 0;
	for (j = 0; j < 12; j++){
		for (k = 0; k < 5; k++){
			perMonth = perMonth + eConsumption1[k][j];
		}
		month[x] = perMonth;
		x++;
		perMonth = 0;
	}
	for (x = 0; x < 12; x++){
		if (minimum > month[x]);
		minimum = month[x];
	}
	for (x = 0; x < 12; x++){
		if (minimum > month[x]){
			minimum = month[x];
			monthNo = x + 1;
		}
	}
	printf("========================================================================================\n");
	printf("The minimum total power consumption is %dkWh and the corresponding month is %d.\n", minimum, monthNo);
	printf("========================================================================================\n");
}
void dispHousehold(void)
{
	extern float quarter2[];
	float perQuarter = 0.0, average;
	int k = 0, j = 0, x = 0, y = 0, z = 0, household = 0, room = 1;
	do {
		for (k = 0; k < 3; k++){
			perQuarter = perQuarter + eConsumption1[household][k];
		}
		average = perQuarter / 3;
		quarter2[j] = average;
		j++;
		perQuarter = 0;
		for (k = 3; k < 6; k++){
			perQuarter = perQuarter + eConsumption1[household][k];
		}
		average = perQuarter / 3;
		quarter2[j] = average;
		j++;
		perQuarter = 0;
		for (k = 6; k < 9; k++){
			perQuarter = perQuarter + eConsumption1[household][k];
		}
		average = perQuarter / 3;
		quarter2[j] = average;
		j++;
		perQuarter = 0;
		for (k = 9; k < 12; k++){
			perQuarter = perQuarter + eConsumption1[household][k];
		}
		average = perQuarter / 3;
		quarter2[j] = average;
		perQuarter = 0;
		j++;
		household++;
		z++;
	} while (z < 5);
	for (x = 0; x < 4; x++){
		printf("=================================================================\n");
		printf("The average power consumption for the 4 quarters of HDB %d-Room is %.2f.\n", room, quarter2[x]);
		printf("=================================================================\n");
	}
	room++;
	for (x = 4; x < 8; x++){
		printf("=================================================================\n");
		printf("The average power consumption for the 4 quarters of HDB %d-Room is %.2f.\n", room, quarter2[x]);
		printf("=================================================================\n");
	}
	room++;
	for (x = 8; x < 12; x++){
		printf("=================================================================\n");
		printf("The average power consumption for the 4 quarters of HDB %d-Room is %.2f.\n", room, quarter2[x]);
		printf("=================================================================\n");
	}
	room++;
	for (x = 12; x < 16; x++){
		printf("=================================================================\n");
		printf("The average power consumption for the 4 quarters of HDB %d-Room is %.2f.\n", room, quarter2[x]);
		printf("=================================================================\n");
	}
	room++;
	for (x = 16; x < 20; x++){
		printf("=================================================================\n");
		printf("The average power consumption for the 4 quarters of HDB %d-Room is %.2f.\n", room, quarter2[x]);
		printf("=================================================================\n");
	}
}
void dispDiff(void)
{
	extern float diff[];
	int j = 0, y = 0, x = 0, k = 0, d = 0, u = 0;
	float average = 0.0, top1 = 0.0, perMonth = 0.0;
	do{
		for (j = 0; j < 5; j++){
			perMonth = perMonth + eConsumption1[j][k];
		}
		average = perMonth / 5;
		diff[y] = eConsumption1[4][x] - average;
		x++, y++, k++;
		perMonth = 0;
		d++;
	} while (d < 12);
	for (y = 0; y < 11; y++){
		if (top1 < diff[y]){
			top1 = diff[y];
			u = y + 1;
		}
	}
	printf("======================================================================\n");
	printf("The higest difference is %.2f and it's corresponding month is %d.\n", top1, u);
	printf("======================================================================\n");
}
