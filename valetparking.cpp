#include "valetparking.hpp"

// CONSTRUCTORS
ValetParking::ValetParking() : _numberofstalls(1), _stallcapacity(1), _queuecapacity(1), _currentticket(0),
  _fee(5.0), _paid(0.0), _checkout(new std::queue<size_t>()), _parkingstall(_numberofstalls, std::stack<size_t>())
{}

ValetParking::ValetParking(size_t numberofstalls, size_t stallcapacity, size_t queuecapacity, size_t ticketnumber, double fee) :
  _numberofstalls(numberofstalls), _stallcapacity(stallcapacity), _queuecapacity(queuecapacity), _currentticket(ticketnumber),
  _fee(fee), _checkout(new std::queue<size_t>()), _parkingstall(_numberofstalls, std::stack<size_t>()), _paid(0.0)
{}

// DESTRUCTOR
ValetParking::~ValetParking() {
  delete _checkout;
}

// return the maximum number of cars that all stalls can accommodate
size_t ValetParking::totalStallSpaces() {
  // ADD YOUR CODE HERE
}

// return the number of cars parked in all the stalls
size_t ValetParking::carsInStalls() {
  // ADD YOUR CODE HERE
}

// return the number of cars waiting in checkout line to pay before exiting the lot
size_t ValetParking::carsInCheckOut() {
  // ADD YOUR CODE HERE
}

// return the number of available parking spaces in all the stalls
size_t ValetParking::availableStallSpaces() {
  // ADD YOUR CODE HERE
}

// return the total amount based on the number of tickets issued
double ValetParking::totalSales() {
  // ADD YOUR CODE HERE
}

// remove and return the ticket# of car at front of the checkout queue, and the fee is collected
size_t ValetParking::pay() {
  // ADD YOUR CODE HERE
}

// return the total amount customers have paid so far based on the number of cars that exited the lot
double ValetParking::totalPaid() {
  // ADD YOUR CODE HERE
}

// return true if all stalls and checkout queue are empty
bool ValetParking::parkingEmpty() {
  return (stallEmpty() && queueEmpty());
}

// return true if all stalls and checkout queue are full
bool ValetParking::parkingFull() {
  return (stallFull() && queueFull());
}

// return true if the checkout queue is empty
bool ValetParking::queueEmpty() {
  return _checkout->empty();
}

// return true if the checkout queue is full
bool ValetParking::queueFull() {
  return (_queuecapacity == _checkout->size());
}

// return true if all stalls are empty
bool ValetParking::stallEmpty() {
  for (int i = 0; i < _numberofstalls; ++i) {
    if (_parkingstall[i].empty()) {
      return true;
    }
  }
  return false;
}

// return true if all stalls are full
bool ValetParking::stallFull() {
  for (int i = 0; i < _numberofstalls; ++i) {
    if (_parkingstall[i].size() <= _stallcapacity) {
      return false;
    }
  }
  return true;
}

// return the next ticket# to issue to customer
size_t ValetParking::getNextTicket() {
  // ADD YOUR CODE HERE
}

// on success: return stall# (index-1 base), on failure: return 0
size_t ValetParking::checkIn() {
  // ADD YOUR CODE HERE
}

// return the stall# (index-1 base) in which the ticket# resides
size_t ValetParking::stallNumber(size_t ticket) {
  // ADD YOUR CODE HERE
}

// retrieve the ticket# from the stall and place the ticket in the checkout queue;
// on success: return true
bool ValetParking::checkOut(size_t stallnumber, size_t ticket) {
  auto tempStall = _parkingstall.at(stallnumber - 1).top();

  if (!queueFull()) {
    _parkingstall.at(stallnumber - 1).pop();
    _checkout->emplace(ticket);
    return true;
  }
  return false;
}
