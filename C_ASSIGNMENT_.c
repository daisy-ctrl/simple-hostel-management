#include <stdio.h>
#include <conio.h>
#include <string.h>


int main() {

	int option;
	int opt;
	int Cancellation;
	char review[100];

	//The following variables are for block A1
	char *A1_Name[50];
	char A1_MealSelection, A1_LaundrySelection;
	int A1_Meal, A1_laundry, A1_RoomNumber, A1_Week, A1_Bills, A1_Rent, A1_Total;
	int A1_ID[50], A1_Room[50], A1_TotalBill[50];

	//The following variables are for block A3
	char *A3_Name[50];
	char A3_MealSelection, A3_LaundrySelection;
	int A3_Meal, A3_laundry, A3_RoomNumber, A3_Week, A3_Bills, A3_Rent, A3_Total;
	int A3_ID[50], A3_Room[50], A3_TotalBill[50];

	//The following variables are for block B2
	char *B2_Name[50];
	char B2_MealSelection, B2_LaundrySelection;
	int B2_Meal, B2_laundry, B2_RoomNumber, B2_Week, B2_Bills, B2_Rent, B2_Total;
	int B2_ID[50], B2_Room[50], B2_TotalBill[50];

	//The following variables are for block B3
	char *B3_Name[50];
	char B3_MealSelection, B3_LaundrySelection;
	int B3_Meal, B3_laundry, B3_RoomNumber, B3_Week, B3_Bills, B3_Rent, B3_Total;
	int B3_ID[50], B3_Room[50], B3_TotalBill[50];

	int temp_room_rent, temp_meal, temp_laundry, option_a, option_b, RoomNo;

	//temp is used to refer to temporary variables

	//Room Charges per week:
	A1_Rent = 400;
	//This is rent for a single room
	B2_Rent = 200;
	//This is rent for a 2-bedded room
	A3_Rent = 150;
	//This is rent for a 3-bedded room
	B3_Rent = 150;
	//This is rent for  a 3-bedded room


	//Room data
	for (int temp = 0; temp <= 100; temp++) {

		A1_Room[temp] = 0;
		A3_Room[temp] = 0;
		B2_Room[temp] = 0;
		B3_Room[temp] = 0;
		temp_room_rent = 0;
		temp_meal = 0;
		temp_laundry = 0;
		A1_Total = 0;
		A3_Total = 0;
		B2_Total = 0;
		B3_Total = 0;

	}

	//End of hostel variable naming


	//MAIN MENU
C:
	printf("\n**************** MAIN MENU **************** \n\n");
	printf("To book a room for male students, key in 1 \n To book a room for female students, key in 2\n To search for a room, key in 3\n To print a bill, key in 4\n To exit, key in 5\n To cancel tenancy,key in 6\n To view information, key in 7.\n To give a review, key in 8\n");


	printf("\nEnter your option: ");
	scanf("%d", &option);

	//END OF MAIN MENU

	//BEGINNING OF OPTION 1

	if (option == 1) {
	C1: printf(" Enter 1 for a single bedded room in block A1 \n Enter 2 for a double bedded room in block A2 \n Enter 3 for a triple bedded room in block A3 \n Enter 4 for a quadruple bedded room in block A4 \n Enter 5 to go to the main menu\n Enter your option: \t");
		scanf("%d", &opt);
		if (opt == 2) {

			printf
			("Sorry! Due to construction delays this block is unavailable. \n Press any key to go back\n");
			getch();
			goto C1;
		}

		if (opt == 1) {

			//block A1
		A1:
			printf("Enter the room number you wish to book:");
			scanf("%d", &A1_RoomNumber);
			if (A1_Room[A1_RoomNumber] == 1)
			{
				printf("This room is already booked, kindly choose a different one\n");
				getch();
				goto A1;
			}

			if (A1_Room[A1_RoomNumber] == 0) {

				printf("\nEnter the student's ID Number: ");
				scanf("%d", &A1_ID[A1_RoomNumber]);
				printf("\nEnter the student's Name:");
				scanf("%s", &A1_Name[A1_RoomNumber]);
				printf("\nEnter the duration of stay in weeks: ");
				scanf("%d", &A1_Week);

				printf("Enter 'y'(yes) if the student would like to have a meal plan as part of his stay, and 'n'(no) if he does not \n");
				scanf("%s", &A1_MealSelection);
				if (A1_MealSelection == 'y') {

					A1_Meal = 120;
				}
				if (A1_MealSelection == 'n')
				{
					A1_Meal = 0;
				}
				printf("Enter 'y'(yes) if the student would like to have a laundry plan as part of his stay, and 'n'(no) if he does not \n");
				scanf("%s", &A1_LaundrySelection);
				if (A1_LaundrySelection == 'y')
				{
					A1_laundry = 20;
				}
				if (A1_LaundrySelection == 'n')
				{
					A1_laundry = 0;
				}

				//meals and laundry are charged per week

				//The following lines of code are used to calculate the total bill
				A1_Room[A1_RoomNumber] = 1;

				temp_room_rent = (A1_Rent * A1_Week);
				temp_meal = (A1_Meal * A1_Week);
				temp_laundry = (A1_laundry * A1_Week);
				A1_Total = (temp_room_rent + temp_meal + temp_laundry);

				printf("\nYour final bill is:\n");
				printf(" Room rent for %d weeks = %d\n", A1_Week, temp_room_rent);
				printf("Laundry plan for %d weeks = %d \n", A1_Week, temp_laundry);
				printf("Meal plan for %d weeks = %d \n", A1_Week, temp_meal);

				A1_TotalBill[A1_RoomNumber] = A1_Total;
				printf(" The final bill is:\t %d", A1_Total);

				//the lines of code below show mode of payment
			A1_Bills:
				printf("\n Enter 1 to clear payments using cash \n Enter 2 to clear payments using a credit card \n ");
				scanf("%d", &A1_Bills);
				if (A1_Bills == 1) {

					printf("You finalised your payments using cash\n");
					getch();
					goto C;
				}
				if (A1_Bills == 2) {

					printf("you finalised your payments using a card\n");
					getch();
					goto C;
				}

				else {

					printf("Wrong choice, select again");
					getch();
					goto A1_Bills;
				}
			}
		}

		if (opt == 3) {

			//block A3
		A3:
			printf("Enter the room number you wish to book:");
			scanf("%d", &A3_RoomNumber);
			if (A3_Room[A3_RoomNumber] == 1) {

				printf("This room is already booked, kindly choose a different one\n");
				getch();
				goto A3;
			}

			if (A3_Room[A3_RoomNumber] == 0) {

				printf("\nEnter the student's ID Number: ");
				scanf("%d", &A3_ID[A3_RoomNumber]);
				printf("\nEnter the student's Name:");
				scanf("%s", &A3_Name[A3_RoomNumber]);
				printf("\nEnter the duration of stay in weeks: ");
				scanf("%d", &A3_Week);

				printf("Enter 'y'(yes) if the student would like to have a meal plan as part of his stay, and 'n'(no) if he does not \n");
				scanf("%s", &A3_MealSelection);
				if (A3_MealSelection == 'y')
				{
					A3_Meal = 120;
				}
				if (A3_MealSelection == 'n')
				{
					A3_Meal = 0;
				}
				printf("Enter 'y'(yes) if the student would like to have a laundry plan as part of his stay, and 'n'(no) if he does not \n");
				scanf("%s", &A3_LaundrySelection);
				if (A3_LaundrySelection == 'y')
				{
					A3_laundry = 20;
				}
				if (A3_LaundrySelection == 'n')
				{
					A3_laundry = 0;
				}

				//The following lines of code are used to calculate the total bill
				A3_Room[A3_RoomNumber] = 1;

				temp_room_rent = (A3_Rent * A3_Week);
				temp_meal = (A3_Meal * A3_Week);
				temp_laundry = (A3_laundry * A3_Week);
				A3_Total = (temp_room_rent + temp_meal + temp_laundry);

				printf("\nYour final bill is:\n");
				printf(" Room rent for %d weeks = %d \n", A3_Week, temp_room_rent);
				printf("Laundry plan for %d weeks = %d \n", A3_Week, temp_laundry);
				printf("Meal plan for %d weeks = %d \n", A3_Week, temp_meal);

				A3_TotalBill[A3_RoomNumber] = A3_Total;
				printf(" The final bill is:\t %d", A3_Total);

				//the lines of code below show mode of payment
			A3_Bills:
				printf("\n Enter 1 to clear payments using cash \n Enter 2 to clear payments using a credit card \n ");
				scanf("%d", &A3_Bills);
				if (A3_Bills == 1) {

					printf("You finalised your payments using cash\n");
					getch();
					goto C;
				}
				if (A3_Bills == 2) {

					printf("you finalised your payments using a card\n");
					getch();
					goto C;
				}
				else {

					printf("Wrong choice, select again");
					getch();
					goto A3_Bills;
				}
			}
		}
		if (opt == 4) {
			printf("Sorry! Due to construction delays, this block is unavailable\n Press any key to continue\n");
			getch();
			goto C1;
		}
		if (opt == 5) {

			getch();
			goto C;
		}
	}


	//END OF OPTION 1

	//BEGINNING OF OPTION 2

	if (option == 2) {

	B: printf(" Enter 1 for a single bedded room in block B1 \n Enter 2 for a double bedded room in block B2 \n Enter 3 for a triple bedded room in block B3 \n Enter 4 for a quadruple bedded room in block B4 \n Enter 5 to go to the main menu\n Enter your option:");
		scanf("%d", &opt);
		if (opt == 1) {

			printf("Sorry! Due to construction delays this block is unavailable. \n Press any key to go back\n");
			getch();
			goto B;
		}

		if (opt == 2) {

			//block B2
		B2:
			printf("Enter the room number you wish to book:");
			scanf("%d", &B2_RoomNumber);

			if (B2_Room[B2_RoomNumber] == 1) {

				printf("This room is already booked, kindly choose a different one\n");
				getch();
				goto B2;
			}

			if (B2_Room[B2_RoomNumber] == 0) {

				printf("\nEnter the student's ID Number: ");
				scanf("%d", &B2_ID[B2_RoomNumber]);
				printf("\nEnter the student's Name:");
				scanf("%s", &B2_Name[B2_RoomNumber]);
				printf("\nEnter the duration of stay in weeks: ");
				scanf("%d", &B2_Week);

				printf("Enter 'y'(yes) if the student would like to have a meal plan as part of her stay, and 'n'(no) if she does not \n");
				scanf("%s", &B2_MealSelection);
				if (B2_MealSelection == 'y') {

					B2_Meal = 120;
				}
				if (B2_Meal == 'n') {

					B2_Meal = 0;
				}
				printf("Enter 'y'(yes) if the student would like to have a laundry plan as part of her stay, and 'n'(no) if she does not \n");
				scanf("%s", &B2_LaundrySelection);
				if (B2_LaundrySelection == 'y')
				{
					B2_laundry = 20;
				}
				if (B2_LaundrySelection == 'n')
				{
					B2_laundry = 0;
				}

				//meals and laundry are charged per week

			//The following lines of code are used to calculate the total bill
				B2_Room[B2_RoomNumber] = 1;

				temp_room_rent = (B2_Rent * B2_Week);
				temp_meal = (B2_Meal * B2_Week);
				temp_laundry = (B2_laundry * B2_Week);
				B2_Total = (temp_room_rent + temp_meal + temp_laundry);

				printf("\nYour final bill is:\n");
				printf(" Room rent for %d weeks=%d\n", B2_Week, temp_room_rent);
				printf("Laundry plan for %d weeks = %d \n", B2_Week, temp_laundry);
				printf("Meal plan for %d weeks = %d \n", B2_Week, temp_meal);

				B2_TotalBill[B2_RoomNumber] = B2_Total;
				printf(" The final bill is:\t %d", B2_Total);

				//the lines of code below show mode of payment
			B2_Bills:
				printf("\n Enter 1 to clear payments using cash \n Enter 2 to clear payments using a credit card \n ");
				scanf("%d", &B2_Bills);
				if (B2_Bills == 1) {

					printf("You finalised your payments using cash\n");
					getch();
					goto C;
				}
				if (B2_Bills == 2) {

					printf("You finalised your payments using a card\n");
					getch();
					goto C;
				}
				else {

					printf("Wrong choice, select again");
					getch();
					goto B2_Bills;
				}
			}
		}


		if (opt == 3) {

			//Block B3
		B3:
			printf("Enter the room number you wish to book:");
			scanf("%d", &B3_RoomNumber);

			if (B3_Room[B3_RoomNumber] == 1) {

				printf("This room is already booked, kindly choose a different one\n");
				getch();
				goto B3;
			}

			if (B3_Room[B3_RoomNumber] == 0) {

				printf("\nEnter the student's ID Number: ");
				scanf("%d", &B3_ID[B3_RoomNumber]);
				printf("\nEnter the student's Name:");
				scanf("%s", &B3_Name[B3_RoomNumber]);
				printf("\nEnter the duration of stay in weeks: ");
				scanf("%d", &B3_Week);

				printf("Enter 'y'(yes) if the student would like to have a meal plan as part of her stay, and 'n'(no) if she does not \n");
				scanf("%s", &B3_MealSelection);
				if (B3_MealSelection == 'y')
				{
					B3_Meal = 120;
				}
				if (B3_MealSelection == 'n')
				{
					B3_Meal = 0;
				}
				printf("Enter 'y'(yes) if the student would like to have a laundry plan as part of her stay, and 'n'(no) if she does not \n");
				scanf("%s", &B3_LaundrySelection);
				if (B3_LaundrySelection == 'y')
				{
					B3_laundry = 20;
				}
				if (B3_LaundrySelection == 'n')
				{
					B3_laundry = 0;
				}

				//meals and laundry are charged per week

			//The following lines of code are used to calculate the total bill
				B3_Room[B3_RoomNumber] = 1;

				temp_room_rent = (B3_Rent * B3_Week);
				temp_meal = (B3_Meal * B3_Week);
				temp_laundry = (B3_laundry * B3_Week);
				B3_Total = (temp_room_rent + temp_meal + temp_laundry);

				printf("\nYour final bill is:\n");
				printf(" Room rent for %d weeks= %d \n", B3_Week, temp_room_rent);
				printf("Laundry plan for %d weeks = %d \n", B3_Week, temp_laundry);
				printf("Meal plan for %d weeks = %d \n", B3_Week, temp_meal);

				B3_TotalBill[B3_RoomNumber] = B3_Total;
				printf(" The final bill is:\t %d", B3_Total);

				//the lines of code below show mode of payment
			B3_Bills:

				printf("\n Enter 1 to clear payments using cash \n Enter 2 to clear payments using a credit card \n ");
				scanf("%d", &B3_Bills);
				if (B3_Bills == 1) {

					printf("You finalised your payments using cash\n");
					getch();
					goto C;
				}
				if (B3_Bills == 2) {

					printf("you finalised your payments using a card\n");
					getch();
					goto C;
				}
				else {

					printf("Wrong choice, select again");
					getch();
					goto B3_Bills;
				}
			}
		}


		if (opt == 4) {
			printf("Sorry! Due to construction delays, this block is unavailable.\n Press any key to continue\n");
			getch();
			goto B;
		}

		if (opt == 5) {
			getch();
			goto C;
		}
	}

	
	//END OF OPTION 2

	// BEGINNING OF OPTION 3
	if (option == 3){		
	
	D:
		printf("\n Enter 1 for block A1 \n Enter 2 for block A3 \n Enter 3 for block B2 \n Enter 4 for block B3 \n Enter 5 to return to the main menu \n");
		printf("\nEnter your option:\t ");
		scanf("%d", &option_a);

		if (option_a == 1){
		
			printf("\n Available rooms in block A1 are: \n");
			for (int a = 1; a <= 100; a++){
			
				if (A1_Room[a] == 0){
				
					printf("Room %d is available!\n", a);
				}
			}
			printf("\nPress any key to go back to search for a room");
			getch();
			goto D;
		}
		if (option_a == 2){
		
			printf("\n Available rooms in block A3 are: \n");
			for (int a = 1; a <= 100; a++){
			
				if (A3_Room[a] == 0){
				
					printf("Room %d is available!\n", a);
				}
			}
			printf("\nPress any key to go back to search for a room");
			getch();
			goto D;
		}
		if (option_a == 3){
		
			printf("\n Available rooms in block B2 are: \n");
			for (int a = 1; a <= 100; a++){
			
				if (B2_Room[a] == 0){
				
					printf("Room %d is available!\n", a);
				}
			}
			printf("\nPress any key to go back to search for a room");
			getch();
			goto D;
		}
		if (option_a == 4){
		
			printf("\n Available rooms in block B3 are: \n");
			for (int a = 1; a <= 100; a++){
			
				if (B3_Room[a] == 0){
				
					printf("Room %d is available!\n", a);
				}
			}
			printf("\nPress any key to go back to search for a room");
			getch();
			goto D;
		}
		if (option_a == 5){
		
			goto C;
		}
	}
	//END OF OPTION 3

	//BEGINNING OF OPTION 4
	if (option == 4) {

	E:
		printf("\n Enter 1 for block A1 \n Enter 2 for block A3 \n Enter 3 for block B2 \n Enter 4 for block B3 \n Enter 5 to return to the main menu\n");
		printf("Enter your option : \n");
		scanf("%d", &option_b);

		if (option_b == 1){

			printf("\nPlease key in your Room Number: \n");
			scanf("%d", &RoomNo);

			if (A1_Room[RoomNo] == 0) {

				printf("\nThe selected room is available! \nPress any key to go back\n");
				getch();
				goto E;
			}
			else {

				printf("\n Student ID: %d", A1_ID[RoomNo]);
				printf("\nStudent total bill:%d", A1_TotalBill[RoomNo]);
				printf("\nPress any key to go back");
				getch();
				goto E;
			}
		}

		if (option_b == 2) {

			printf("\nPlease key in your Room Number: \n");
			scanf("%d", &RoomNo);

			if (A3_Room[RoomNo] == 0) {

				printf("\nThe selected room is available! \nPress any key to go back\n");
				getch();
				goto E;
			}
			else {

				printf("\n Student ID: %d", A3_ID[RoomNo]);
				printf("\nStudent total bill:%d", A3_TotalBill[RoomNo]);
				printf("\nPress any key to go back");
				getch();
				goto E;
			}
		}
		if (option_b == 3) {

			printf("\nPlease key in your Room Number: \n");
			scanf("%d", &RoomNo);

			if (B2_Room[RoomNo] == 0) {

				printf("\nThe selected room is available! \nPress any key to go back\n");
				getch();
				goto E;
			}
			else {

				printf("\n Student ID: %d", B2_ID[RoomNo]);
				printf("\nStudent total bill:%d", B2_TotalBill[RoomNo]);
				printf("\nPress any key to go back");
				getch();
				goto E;
			}
		}
		if (option_b == 4) {

			printf("\nPlease key in your Room Number: \n");
			scanf("%d", &RoomNo);

			if (B3_Room[RoomNo] == 0) {

				printf("\nThe selected room is available! \nPress any key to go back\n");
				getch();
				goto E;
			}
			else {

				printf("\n Student ID: %d", B3_ID[RoomNo]);
				printf("\nStudent total bill:%d", B3_TotalBill[RoomNo]);
				printf("\nPress any key to go back");
				getch();
				goto E;
			}
		}
		if (option_b == 5) {
			goto C;
		}
	}
		//END OF OPTION 4
	
		//BEGINNING OF OPTION 5

		if (option == 5)
		{
			printf("Thank you for using our services!\n\n");
			printf("************Good Bye************");
			exit(0);
		}
		//END OF OPTION 5

		//BEGINNING OF OPTION 6
		if (option == 6)
		{
			printf("Would you like to proceed with tenancy cancellation? Enter 1 for yes and 2 for no\n");
			scanf("%d", &Cancellation); 
				if (Cancellation == 1)
				{
					printf("Your request has been fowarded to administration and accounts. Kindly go to the offices to get a refund!");
					goto C;

				}
				if (Cancellation == 2)
				{
					printf("Redirecting to main menu\n Press any Key to continue");
					getch();
					goto C;
				}			
			
		}
		//END OF OPTION 6

		//BEGINNING OF OPTION 7
		if (option == 7)
		{
	
			printf("Below is information about our hostels! Thank you for choosing to read it\n\n");
			printf("In this particular hostel, there are eight building blocks, two male blocks and two female blocks. \nHowever, two  male blocks and two female blocks are under maintenance, leaving our eager hosteliers with four other lovely selections, as the renovation proceeds.\n We also have a list of additional features you can get!\n. These are meals, gym, laundry and internet.\nEach block has a unique name, and each student has to make bookings using their names, genders and ID numbers.\n This is to help us in trying to match our hosteliers to the room that suits them most!\nI hope you enjoy your stay with us! ");
			printf("\nPress any key to go back\n");
			getch();
			goto C;
		}
		//END OF OPTION 7

		//BEGINNING OF OPTION 8
		if (option == 8)
		{
			printf("Kindly submit a review to help us polish our system \n");
			scanf("%s", &review);
			printf("\nYour honesty is appreciated!\n");
			printf("\n Press any key to go back\n");
			getch();
			goto C;

		}
		return 0;
}
