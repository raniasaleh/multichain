#include <iostream>

class blockchain
{
  public:
       blockchain();
       ~blockchain();
       int initializeBlockchain();
       void setAddress(std::string nodeIP);
        std::string getAddress();


};
