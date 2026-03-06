#include <stdio.h>
#include <stdlib.h>

int GetSpeedLimit(int speed_limit);
int GetDriverSpeed(int driver_speed);

int main() {
  int speed_limit, driver_speed, fine = 0;

  speed_limit = GetSpeedLimit(speed_limit);
  driver_speed =  GetDriverSpeed(driver_speed);

  // Determine if the driver is speeding
  if (driver_speed > speed_limit) {
    int excess_speed = driver_speed - speed_limit;

    // Calculate fine based on how much over the limit
    if (excess_speed <= 10) {
      fine = 50;
    } else if (excess_speed <= 20) {
      fine = 100;
    } else {
      fine = 200;
    }

    printf("Fine: $%d\n", fine);
  } else {
    printf("No fine needed.\n");
  }

  return 0;
}
int GetSpeedLimit(int speed_limit)
{
  char input[20];
  printf("Enter the speed limit: ");
  if (fgets(input, sizeof(input), stdin)) {
    sscanf(input, "%d", &speed_limit);
  }
  return speed_limit;
}
int GetDriverSpeed(int driver_speed)
{
  char input[20];
  printf("Enter the driver's speed: ");
  if (fgets(input, sizeof(input), stdin)) {
    sscanf(input, "%d", &driver_speed);
  }
  return driver_speed;
}