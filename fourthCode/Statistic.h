
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
  //  


  /**
   * Empty Constructor
   */
  Statistic();

  /**
   * Empty Destructor
   */
  virtual ~Statistic();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //

protected:
  // Static Protected attributes
  //  

  // Protected attributes
  //  


  // Protected attribute accessor methods
  //  


  // Protected attribute accessor methods
  //

private:
  // Static Private attributes
  //  

  // Private attributes
  //  

  int totalProfit;
  double averageRate;
  std::string productName;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of totalProfit
   * @param value the new value of totalProfit
   */
  void setTotalProfit(int value)
  {
    totalProfit = value;
  }

  /**
   * Get the value of totalProfit
   * @return the value of totalProfit
   */
  int getTotalProfit()
  {
    return totalProfit;
  }

  /**
   * Set the value of averageRate
   * @param value the new value of averageRate
   */
  void setAverageRate(double value)
  {
    averageRate = value;
  }

  /**
   * Get the value of averageRate
   * @return the value of averageRate
   */
  double getAverageRate()
  {
    return averageRate;
  }

  /**
   * Set the value of productName
   * @param value the new value of productName
   */
  void setProductName(std::string value)
  {
    productName = value;
  }

  /**
   * Get the value of productName
   * @return the value of productName
   */
  std::string getProductName()
  {
    return productName;
  }

  void initAttributes();

};

#endif // STATISTIC_H
