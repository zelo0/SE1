#include "Product.h"

// Constructors/Destructors
//  

Product::Product()
{
  initAttributes();
}

Product::~Product()
{
}

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void Product::initAttributes()
{
}

// compare function
bool compareByName(Product* a, Product* b)
{
  return a->getName() < b->getName();
}