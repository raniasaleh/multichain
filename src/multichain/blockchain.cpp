#include "multichain/blockchain.h"
//#include "utils/util.h"
//#include "core/main.h"
#include <boost/asio.hpp>
#include <boost/array.hpp>
#include "net/netbase.h"
#include "protocol/netprotocol.h"
blockchain::blockchain() {}
blockchain::~blockchain(){}
CAddress* addr;

int blockchain::initializeBlockchain()
{
 std::cout << "blockchain initialize\n";
 //RegisterNodeSignals(GetNodeSignals());

return 0;
}

void blockchain::setAddress(std::string nodeIP){
  //set the node address
   addr = new CAddress();
  boost::asio::ip::address address;
  address = boost::asio::ip::address::from_string(nodeIP);
  boost::asio::ip::address_v4::bytes_type bytes = address.to_v4().to_bytes();
  std::cout << "Add node IP"  << nodeIP << "\n" ;
   addr->SetRaw(NET_IPV4, &bytes[0]);
}

std::string blockchain::getAddress()
{
  //get the node IP address
  return addr->ToStringIP();
}
