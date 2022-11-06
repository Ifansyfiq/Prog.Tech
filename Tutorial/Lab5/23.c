#include <stdio.h>
#include <windows.h>
#include <string.h>

void display();
void firstDisplay();
void main()
{
	int option, n, boxspace;
	float fees, week, totalFees;
	char box[20];

	system("cls");
	display();
	printf ("\nPlease choose your storage:");
	scanf (" %i", &option);

	switch (option)
	{
	case 1:
		strcpy(box,"Small Box");
		fees = 5;
		boxspace=5;
		break;
	case 2:
		strcpy(box,"Regular Box");
		fees = 15;
		boxspace=8;
		break;
	default:
		strcpy(box,"Large Box");
		fees = 25;
		boxspace=11;
		break;
	}
	

	printf ("\nYou have selected %s. How many items to display? (up to %d items):", box,boxspace);
	scanf (" %i", &n);

	char item[n][20];
	float price[n];

	for (int i=1; i<=n; i++)
	{
		printf ("Item %i:", i);
		scanf(" %[^\n]", &item[i]);
		printf ("Price:RM");
		scanf (" %f", &price[i]);
	}

	printf ("How many weeks to display the items?:");
	scanf (" %f", &week);
	totalFees = week * fees;

	printf ("\nYou have entered %i items to be displayed in your storage.", n);
	firstDisplay();

	for (int i=1; i<=n; i++)
	{
		printf ("\n%s\t\t\tRM%.2f", item[i], price[i]);
	}
	
	printf ("\n-----------------------------------");
	printf ("\n\nYour fees for %.0f weeks is: %.2f", week, totalFees);
}

void display()
{
	printf ("==========================================================================");
	printf ("\n\t\t\tYourStore Sdn. Bhd.");
	printf ("\n==========================================================================");
	printf ("\n\nStorage Size:");
	printf ("\n[1] Small Box (50cm  x  50cm) - RM5 per week");
	printf ("\n[2] Regular Box (100cm  x  100cm) - RM15 per week");
	printf ("\n[3] Large Box (200cm  x  200cm) - RM25 per week");
}

void firstDisplay()
{
	printf ("\n-----------------------------------");
	printf ("\nItem\t\t\tPrice");
	printf ("\n-----------------------------------");
}
