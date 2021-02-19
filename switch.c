#include<stdio.h>
int main() {
int ch;
printf("enter a choice from 1 to 5\n");
scanf("%d",&ch);
switch(ch){
case 1:
	printf("Food item - Sandwich.\n price - Rs 149");
	break;
case 2:
	printf("Food item - French fries.\n price - Rs 99");
	break;
case 3:
	printf("Food item - Pasta.\n price - Rs 179");
	break;
case 4:
	printf("Food item - Burger.\n price - Rs 129");
	break;
case 5:
    printf("Food item - Pizza.\n price - Rs 239");
    break;
default:
	printf("couldn't able to view the choice.");
}
return 0;
}
