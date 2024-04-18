#include <stdio.h>
#include <string.h>

// Struct Declaration
struct flightInfo {
    char flight_number[7];
    char plane_type[4];
    double ticket_price;
    int available_seats;
};

// Menu
void menu(void) {
    printf("\n** FLIGHT RESERVATION SYSTEM **\n");
    printf("1 - Add Flight\n");
    printf("2 - List Flights\n");
    printf("3 - Make Reservation\n");
    printf("4 - Show Statistics\n");
    printf("5 - Exit\n");
}

// Functions to get the option
int getOption(void)
{
    int option;
    do
    {
        menu();
        printf("Enter the option number (1-5): ");
        scanf("%d", &option);
        if (option < 1 || option > 5)
        {
            printf("\nIncorrect option number.\n");
        }
    } while (option < 1 || option > 5);
    return option;
}

// Functions to register the flight ---
void typeVerify(char *plane_type)
{
    while(strcmp(plane_type, "707") != 0 && strcmp(plane_type, "727") != 0 && strcmp(plane_type, "737") != 0)
    {
        printf("Invalid plane type!\n");
        printf("Confirm the plane type:");
        scanf("%s", plane_type);
    }
}

int seatVerify(char *plane_type, int available_seats)
{
    if(strcmp(plane_type, "707") == 0)
    {
        while(available_seats > 200)
        {
            printf("This type of airplane has a maximum of 200 seats!\n");
            printf("Confirm the amount:");
            scanf("%d", &available_seats);
        }
    }

    if(strcmp(plane_type, "727") == 0)
    {
        while(available_seats > 170)
        {
            printf("This type of airplane has a maximum of 170 seats!\n");
            printf("Confirm the amount:");
            scanf("%d", &available_seats);
        }
    }

    if(strcmp(plane_type, "737") == 0)
    {
        while(available_seats > 120)
        {
            printf("This type of airplane has a maximum of 120 seats!\n");
            printf("Confirm the amount:");
            scanf("%d", &available_seats);
        }
    }
    return available_seats;
}

void inputFlight(struct flightInfo *flight)
{

    printf("Enter flight number: ");
    scanf("%s", flight->flight_number);
    printf("Enter plane type (707, 727, or 737): ");
    scanf("%s", flight->plane_type);
    printf("Enter ticket price: ");
    scanf("%lf", &flight->ticket_price);
    printf("Enter available seats: ");
    scanf("%d", &flight->available_seats);

    // Verifying the amount of seats for each plane
    typeVerify(flight->plane_type);
    flight->available_seats = seatVerify(flight->plane_type, flight->available_seats);
}
// ---------------------

// Functions to list the flights ---
void listFlights(struct flightInfo flights[], int count)
{
    printf("\nFlight List:\n");

    for (int i = 0; i < count; i++)
    {
        printf("Flight Number: %s\n", flights[i].flight_number);
        printf("Plane Type: %s\n", flights[i].plane_type);
        printf("Ticket Price: %.2lf\n", flights[i].ticket_price);
        printf("Available Seats: %d\n\n", flights[i].available_seats);
    }
}
// ---------------------

// Fuctions to makeReservation ---
// Calculates the reservation
void resCalculation(struct flightInfo *flight, int num_seats)
{
    flight->available_seats -= num_seats;
}

// Check availability
int resAvailability(struct flightInfo *flights, int num_seats)
{
    // if there's seats available
    if (flights->available_seats >= num_seats)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

// Reservations informations input
void makeReservation(struct flightInfo flights[], int count)
{
    char flight_number[7];
    int num_seats, availability;
    printf("Enter flight number for reservation: ");
    scanf("%s", flight_number);
    printf("Enter number of seats for reservation: ");
    scanf("%d", &num_seats);

    // Loop to find the flight code
    int index = -1;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(flights[i].flight_number, flight_number) == 0)
        {
            index = i;
            break;
        }
    }

    // Check's availability
    availability = resAvailability(flights, num_seats);

    // If the flight's founded
    if(index != -1)
    {
        // If the reservation's available
        if(availability)
        {
            resCalculation(flights, num_seats);        // Calculates the reservation
            printf("Reservation confirmed!\n");
        }
        else
        {
            printf("Flight is fully booked.\n");
        }
    }
}
// ---------------------

// Function to calculate statistics
int calculateProfitLoss(struct flightInfo flight, double *total_value, double *percent_profit_loss)
{
    int total_seats = 0;
    double total_revenue = 0.0;

    if (strcmp(flight.plane_type, "707") == 0)
    {
        total_seats = 200;
    } else if (strcmp(flight.plane_type, "727") == 0)
    {
        total_seats = 170;
    } else if (strcmp(flight.plane_type, "737") == 0)
    {
        total_seats = 120;
    }

    int seats_booked = total_seats - flight.available_seats;
    double percent_occupied = (double)seats_booked / total_seats;

    if (percent_occupied == 0.6) {
        *total_value = 0.0;
        *percent_profit_loss = 0.0;
        return 0;  // No profit/loss
    } else if (percent_occupied > 0.6) {
        total_revenue = seats_booked * flight.ticket_price;
        *total_value = total_revenue - (flight.available_seats * flight.ticket_price);
        *percent_profit_loss = (percent_occupied - 0.6) * 100;
        return 1;  // Profit
    } else {
        *total_value = (0.6 - percent_occupied) * total_seats * flight.ticket_price;
        *percent_profit_loss = (percent_occupied - 0.6) * 100;
        return -1;  // Loss
    }
}
// ---------------------

// Function to show statistics ---
void showStatistics(struct flightInfo flights[], int count)
{
    double total_profit_loss = 0.0;
    printf("\nProfit/Loss Statistics:\n");

    for (int i = 0; i < count; i++)
    {
        double total_value = 0.0, percent_profit_loss = 0.0;
        int result = calculateProfitLoss(flights[i], &total_value, &percent_profit_loss);

        printf("Flight Number: %s\n", flights[i].flight_number);

        // If the value is a win
        if(result == 1)
        {
            printf("Profit: $%.2lf\n", total_value);
            printf("Percentage Profit: %.2lf%%\n\n", percent_profit_loss);
        }
        // If the value is a loss
        else if(result == -1)
        {
            printf("Loss: $%.2lf\n", total_value);
            printf("Percentage Loss: %.2lf%%\n\n", percent_profit_loss);
        }
        // if the value is even
        else
        {
            printf("Profit/Loss: $%.2lf\n", total_value);
            printf("Percentage Profit/Loss: %.2lf%%\n\n", percent_profit_loss);
        }


        total_profit_loss += total_value * result;
    }

    printf("Total Profit/Loss for the Company: $%.2lf\n", total_profit_loss);
}
// ---------------------

// Programm
int main()
{
    struct flightInfo flights[10];
    int count = 0;
    int choice;

    do {
        choice = getOption();

        switch (choice)
        {
            case 1:
                if (count < 10)
                {
                    printf("\nAdding Flight %d\n", count + 1);
                    inputFlight(&flights[count]);
                    count++;
                } else {
                    printf("\nMaximum number of flights reached.\n");
                }
                break;
            case 2:
                if (count > 0)
                {
                    listFlights(flights, count);
                } else {
                    printf("\nNo flights available.\n");
                }
                break;
            case 3:
                if (count > 0)
                {
                    makeReservation(flights, count);
                } else {
                    printf("\nNo flights available for reservations.\n");
                }
                break;
            case 4:
                if (count > 0)
                {
                    showStatistics(flights, count);
                } else {
                    printf("\nNo flights available.\n");
                }
                break;
            case 5:
                printf("\nExiting program.\n");
                break;
            default:
                printf("\nInvalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

