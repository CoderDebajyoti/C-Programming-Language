// Function to check if a given year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

// Function to get the number of days in a month
int daysInMonth(int month, int year) {
    int days;

    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            if (isLeapYear(year))
                days = 29;
            else
                days = 28;
            break;
        default:
            days = 31;
            break;
    }

    return days;
}

// Function to print the calendar for a given month and year
void printCalendar(int month, int year) {
    int i, j, day;
    int startingDay;

    // Determining the starting day of the week for the given month and year
    startingDay = 1;
    for (i = 1970; i < year; i++) {
        if (isLeapYear(i))
            startingDay = (startingDay + 366) % 7;
        else
            startingDay = (startingDay + 365) % 7;
    }
    for (j = 1; j < month; j++) {
        startingDay = (startingDay + daysInMonth(j, year)) % 7;
    }

    // Printing the calendar header
    printf("  S  M Tu  W Th  F  S\n");

    // Printing leading spaces before the first day of the month
    for (i = 0; i < startingDay; i++) {
        printf("   ");
    }

    // Printing the days of the month
    for (day = 1; day <= daysInMonth(month, year); day++) {
        printf("%3d ", day);
        startingDay++;
        if (startingDay > 6) {
            startingDay = 0;
            printf("\n");
        }
    }

    printf("\n");
}

int main() {
    int month, year;

    // Input month and year from the user
    printf("Enter month and year (MM YYYY): ");
    scanf("%d %d", &month, &year);

    // Print the calendar
    printf("\n");
    printCalendar(month, year);

    return 0;
}
