#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
extern int eConsumption1[5][12];
extern float quarter2[];
extern int valid_input;
extern char invalidInput[];
int function (int zero,int limit,int room){
	int x=0;
	for (x=zero; x<limit; x++){
		printf("The average power consumption for the 4 quarters of HDB %d-Room is %.2f.\n", room, quarter2[x]);}}
int function2 (int zero, int limit, int household){
	int x=0;
	for(x=zero;x<limit;x++){
		int total=0;
		total = total + eConsumption1[household][x]+eConsumption1[household][x+1]+eConsumption1[household][x+2];}}
void showMenu (void){
	puts("[A] Display total power consumption of the household for a selected month.");
	puts("[B] Display quarterly average power consumption of a selected household in 2014.");
	puts("[C] Display the top three power consumptions of a selected household from June to December.");
	puts("[D] Display the minimum total power consumption and its corresponding monnth.");
	puts("[E] Display the quarterly average power consumption of the household in 2014.");
	puts("[F] Display the differences in average power consumption and HDB 5 room power consumption in each month.");
	puts("[G] Display the lowest three power consumptions of a selected household from June to December.\n");
	puts("[Q] Exit the programme.");}
void dispTotal(void){
	do{
	int total = 0, k, month;
	puts("Please select a month.");
	puts("[1] January\n[2] February\n[3] March\n[4] April\n[5] May\n[6] June\n[7] July\n[8] August\n[9] September\n[10] October\n[11] November\n[12] December\n");
	scanf("%d", &month);
	system("cls");
	if((month > 0) && (month < 13))valid_input=1;
	else {
		system("cls");
		puts("You have selected an invalid input.");
		puts("\n");
		continue;}
	printf("You have selected [%d].\n",month);
	month = month - 1;
	for (k=0; k<5; k++){
		total = total + eConsumption1[k][month];}
	printf("===============================================================================\n");
	printf("The total power consumption of the household for a selected month is %4dkWh.\n", total);
	printf("===============================================================================\n");
	}while (valid_input==0);}
void dispQuarter(void){
	do{
		extern float quarter[];
		float perQuarter = 0.0, average;
		int k = 0, j = 0, total=0, x = 0, y = 0, z = 0, household;
		printf("Please select which household.\n");
		printf("[1] HDB 1-Room\n[2] HDB 2-Room\n[3] HDB 3-Room\n[4] HDB 4-Room\n[5] HDB 5-Room\n");
		printf("\n\n\n");
		scanf("%d", &household);
		system("cls");
		if((household>0)&&(household<5))valid_input=1;
		else{
			system("cls");
			puts("You have selected an invalid input.");
			puts("\n");
			continue;}
		system("cls");
		printf("You have selected HDB %d-Room.\n", household);
		household = household - 1;
			for(j=0;j<4;j++){ 
			k=3*j;
			total = total + eConsumption1[household][k]+eConsumption1[household][k+1]+eConsumption1[household][k+2];
			average = total/3.0;
			quarter[x]=average;
			total=0,x++;}
		for (x = 0; x < 4; x++){
			printf("=================================================================\n");
			printf("The average power consumption for the 4 quarters is %.2f.\n", quarter[x]);
			printf("=================================================================\n");}
	}while(valid_input==0);}
void dispTop(void){
	do{
	int top1 = 0, top2 = 0, top3 = 0, household, j;
	printf("Please select which household.\n");
	printf("[1] HDB 1-Room\n[2] HDB 2-Room\n[3] HDB 3-Room\n[4] HDB 4-Room\n[5] HDB 5-Room\n");
	printf("\n\n\n");
	scanf("%d", &household);
	system("cls");
	if((household>0)&&(household<5))valid_input=1;
		else{
			system("cls");
			puts("You have selected an invalid input.");
			puts("\n");
			continue;}
	printf("You have selected HDB %d-Room.\n", household);
	household = household - 1;
	for (j = 5; j<11; j++){
			if (top1<eConsumption1[household][j]) {
				top3 = top2;
				top2 = top1;
				top1 = eConsumption1[household][j];}
			else if (top2<eConsumption1[household][j]){
				top2 = eConsumption1[household][j];}
			else if (top3<eConsumption1[household][j]){
				top3 = eConsumption1[household][j];}}
	for (j = 5; j<11; j++){
		if (top1<=eConsumption1[household][j]){
			top1 = eConsumption1[household][j];}
		else if (top2<=eConsumption1[household][j]){
			top2 = eConsumption1[household][j];}
		else if (top3<eConsumption1[household][j]){
			top3 = eConsumption1[household][j];}}
	printf("========================================================================================\n");
	printf("The top three power consumptions of HDB %d-Room from June to December is %3d,%3d,%3d.\n", household+1, top1, top2, top3);
	printf("========================================================================================\n");
	}while(valid_input==0);}

void dispMin(void){
	extern int month[];
	char monthName;
	int minimum = 0, perMonth = 0, x = 0, j = 0, k = 0, monthNo = 0;
	for (j = 0; j < 12; j++){
		for (k = 0; k < 5; k++){
			perMonth = perMonth + eConsumption1[k][j];}
		month[x] = perMonth;
		x++;
		perMonth = 0;}
	for (x = 0; x < 12; x++){
		if (minimum > month[x]);
		minimum = month[x];}
	for (x = 0; x < 12; x++){
		if (minimum > month[x]){
			minimum = month[x];
			monthNo = x + 1;}}
	printf("========================================================================================\n");
	printf("The minimum total power consumption is %dkWh and the corresponding month is [%d].\n", minimum, monthNo);
	printf("========================================================================================\n");}
void dispHousehold(void){
	extern float quarter2[];
	int j=0,x=0, k=0, y=0, household=0;
	float total=0.00,average=0.00;
	for(household=0;household<5;household++){
		for(j=0;j<4;j++){ 
			k=3*j;
			total = total + eConsumption1[household][k]+eConsumption1[household][k+1]+eConsumption1[household][k+2];
			average = total/3.0;
			quarter2[x]=average;
			total=0,x++;}	}
	function(0, 4, 1);
	function(4, 8, 2);
	function(8, 12, 3);
	function(12, 16, 4);
	function(16, 20, 5);}
void dispDiff(void){
	extern float diff[];
	int j = 0, y = 0, x = 0, k = 0, d = 0, u = 0;
	float average = 0.0, top1 = 0.0, perMonth = 0.0;
	do{
		for (j = 0; j < 5; j++){
			perMonth = perMonth + eConsumption1[j][k];}
		average = perMonth / 5;
		diff[y] = eConsumption1[4][x] - average;
		x++, y++, k++, d++, perMonth=0;
	} while (d < 12);
	for (y = 0; y < 11; y++){
		if (top1 < diff[y]){
			top1 = diff[y];
			u = y + 1;}}
	printf("======================================================================\n");
	printf("The higest difference is %.2f and it's corresponding month is [%d].\n", top1, u);
	printf("======================================================================\n");}

void dispLow(void){
	do{
	int low1 = 999, low2 = 999, low3 = 999, household, j;
	printf("Please select which household.\n");
	printf("[1] HDB 1-Room\n[2] HDB 2-Room\n[3] HDB 3-Room\n[4] HDB 4-Room\n[5] HDB 5-Room\n");
	printf("\n\n\n");
	scanf("%d", &household);
	system("cls");
	if((household>0)&&(household<5))valid_input=1;
		else{
			system("cls");
			puts("You have selected an invalid input.");
			puts("\n");
			continue;}
	printf("You have selected HDB %d-Room.\n", household);
	household = household - 1;
	for (j = 5; j<12; j++){
			if (low1>eConsumption1[household][j]) {
				low3 = low2;
				low2 = low1;
				low1 = eConsumption1[household][j];}
			else if (low2>eConsumption1[household][j]){
				low2 = eConsumption1[household][j];}
			else if (low3>eConsumption1[household][j]){
				low3 = eConsumption1[household][j];}}
	for (j = 5; j<12; j++){
		if (low1>=eConsumption1[household][j]){
			low1 = eConsumption1[household][j];}
		else if (low2>=eConsumption1[household][j]){
			low2 = eConsumption1[household][j];}
		else if (low3>eConsumption1[household][j]){
			low3 = eConsumption1[household][j];}}
	printf("========================================================================================\n");
	printf("The lowest three power consumptions of HDB %d-Room from June to December is %3d,%3d,%3d.\n", household+1, low1, low2, low3);
	printf("========================================================================================\n");
	}while(valid_input==0);}
