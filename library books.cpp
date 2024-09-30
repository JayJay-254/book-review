#include<stdio.h>
int main()
{
int book_ID, dueDate, returnDate;
int daysOverdue;
int fineRate = 0;
int fineAmount;

printf("Enter Book ID: ");
scanf("%d", &book_ID);

printf("Enter Due Date (in days, eg.,25 for 25th day): ");
scanf("%d", &dueDate);

printf("Enter Return Date (in days, eg.,28 for 28th day): ");
scanf("%d", &returnDate);

daysOverdue = returnDate - dueDate;

if (daysOverdue <= 0){
	fineRate = 0;
	fineAmount = 0;
}else if (daysOverdue <= 7){
	fineRate = 20;
	fineAmount = daysOverdue * fineRate;
} 	else if (daysOverdue <= 14){
	fineRate = 50;
	fineAmount = daysOverdue * fineRate; 
} else {
	fineRate = 100;
	fineAmount = daysOverdue * fineRate;
}

printf("\nBook ID: %d\n", book_ID);
printf("Due Date: %d\n", dueDate);
printf("Return Date: %d\n",returnDate);
printf("Days Overdue: %d\n", daysOverdue);
printf("Fine Rate: Kshs. %d\n", fineRate);
printf("Fine Amount: Kshs. %d\n", fineAmount);
	return 0;
}