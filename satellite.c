#include <stdio.h>    // For printf(), scanf()
#include <unistd.h>   // For sleep()
#include <stdbool.h>  // For true/false

int main(void)
{
    // Store the satellite name
    char name[100];

    // Ask the user for the satellite name
    printf("Satellite name: ");
    scanf("%99s", name);

    // Ask for the satellite speed (can be a decimal)
    float speed;
    printf("Speed (degrees per second): ");
    scanf("%f", &speed);

    // Current position of the satellite in orbit
    float position = 0;

    // Total degrees traveled since start
    float total_degrees = 0;

    // Total distance traveled in kilometers
    float total_km = 0;

    // Print starting message
    printf("\nTracking satellite: %s\n", name);
    printf("Press CTRL+C to stop.\n\n");

    // Loop forever (simulates time passing)
    while (true)
    {
        // Move the satellite forward
        position = position + speed;

        // Add to total distance traveled
        total_degrees = total_degrees + speed;

        // Keep position between 0 and 360 degrees
        if (position >= 360)
        {
            position = position - 360;
        }

        // Convert degrees traveled to kilometers
        // 1 degree ≈ 111 km
        total_km = total_degrees * 111.0;

        // Print satellite information
        printf("Satellite: %s | Position: %.4f° | Distance: %.2f km\n",
               name, position, total_km);

        // Wait 1 second before updating again
        sleep(1);
    }
}