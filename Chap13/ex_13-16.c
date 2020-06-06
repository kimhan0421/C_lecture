#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum {
	false, true
}boolean;

typedef enum {
	Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
}weekday;

weekday next_day(weekday today) {
	weekday next;
	next = (weekday)(((int)today + 1) % 7);
	return next;
}

boolean is_weekend(weekday today) {
	if (today == Saturday || today == Sunday) { return true; }
	else { return false; }
}

int main() {
	weekday today, tomorrow;
	printf("Enter Number corresponding to today.\n");
	printf("0:Sun, 1:Mon, 2:Tue, 3:Wed, 4:Thu, 5:Fri, 6:Sat.\n");
	scanf("%d", &today);

	tomorrow = next_day(today);
	if (is_weekend(tomorrow) == true) {
		printf("Tomorrow is weekend.\n");
	}
	else { 
		printf("Tomorrow is not weekend.\n"); 
	}
	return 0;
}