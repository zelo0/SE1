
#ifndef STATISTIC_H
#define STATISTIC_H

#include <string>

/**
 * class Statistic
 *
 */

class Statistic
{
public:
  // Constructors/Destructors
  Statistic()
  {
  }

  ~Statistic()
  {
  }

private:
  // Private attributes
  //

  int totalProfit;
  double averageRate;
  std::string productName;

  void setTotalProfit(int value)
  {
    totalProfit = value;
  }

  int getTotalProfit()
  {
    return totalProfit;
  }

  void setAverageRate(double value)
  {
    averageRate = value;
  }

  double getAverageRate()
  {
    return averageRate;
  }

  void setProductName(std::string value)
  {
    productName = value;
  }

  std::string getProductName()
  {
    return productName;
  }
};

#endif // STATISTIC_H
