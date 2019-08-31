// This program calculates the user's pay.

#include <iostream>

int main()
{
  double candy_bars, earn, money;

  // Get the number of hours worked.
  std::cout << "How many candy bars did you sell? ";
  std::cin >> candy_bars;

  // Get the hourly pay rate.
  std::cout << "How much does the organization earn for each bar sold? ";
  std::cin >> earn;

  // Calculate the pay.
  money = candy_bars * earn;

  // Display the pay.
  std::cout << "You have earned $" << money << '\n';

  return 0;
}
