#include "valetparking.hpp"

// ATTENTION STUDENTS:
// THE CONSTRUCTORS ARE ALREADY COMPLETED.
// YOU NEED TO COMPLETE THE DESTRUCTOR AND ALL OF THE REMAINING FUNCTIONS BELOW.

// CONSTRUCTORS - ALREADY COMPLETE
ValetParking::ValetParking() : _numberofstalls( 1 ), _stallcapacity( 1 ), _queuecapacity( 1 ), _currentticket( 0 ),
    _fee( 5.0 ), _paid( 0.0 ), _checkout(new std::queue<size_t>()), _parkingstall(_numberofstalls, std::stack<size_t>() )
{}

ValetParking::ValetParking( size_t numberofstalls, size_t stallcapacity,
    size_t queuecapacity, size_t ticketnumber, double fee ) : _numberofstalls( numberofstalls ), _stallcapacity( stallcapacity ), _queuecapacity( queuecapacity ), _currentticket( ticketnumber ),
    _fee( fee ), _checkout(new std::queue<size_t>()), _parkingstall(_numberofstalls, std::stack<size_t>() ), _paid( 0.0 )
{}

// DESTRUCTOR
ValetParking::~ValetParking()
{

    // ADD YOUR CODE HERE

}

size_t ValetParking::totalStallSpaces()
// return the maximum number of cars that all stalls can accommodate
{

    // ADD YOUR CODE HERE

}

size_t ValetParking::carsInStalls()
// return the number of cars parked in all the stalls
{

    // ADD YOUR CODE HERE

}

size_t ValetParking::carsInCheckOut()
// return the number of cars waiting in checkout line to pay before exiting the lot.
{

    // ADD YOUR CODE HERE

}

size_t ValetParking::availableStallSpaces()
// return the number of available parking spaces in all the stalls
{

    // ADD YOUR CODE HERE

}

double ValetParking::totalSales()
// return the total amount based on the number of tickets issued
{

    // ADD YOUR CODE HERE

}

size_t ValetParking::pay()
// remove and return the ticket# of car at front of the checkout queue, and the fee is collected.
{

    // ADD YOUR CODE HERE

}

double ValetParking::totalPaid()
// return the total amount customers have paid so far based on the number of cars exited the lot.
{

    // ADD YOUR CODE HERE

}

bool ValetParking::parkingEmpty()
// return true if all stalls and checkout queue are empty
{

    // ADD YOUR CODE HERE

}

bool ValetParking::parkingFull()
// return true if all stalls and checkout queue are full
{

    // ADD YOUR CODE HERE

}

bool ValetParking::queueEmpty()
// return true if the checkout queue is empty
{

    // ADD YOUR CODE HERE

}

bool ValetParking::queueFull()
// return true if the checkout queue is full
{

    // ADD YOUR CODE HERE

}

bool ValetParking::stallEmpty()
// return true if all stalls are empty
{

    // ADD YOUR CODE HERE

}

bool ValetParking::stallFull()
// return true if all stalls are full
{

    // ADD YOUR CODE HERE

}

size_t ValetParking::getNextTicket()
// return the next ticket number to issue to customer
{

    // ADD YOUR CODE HERE

}

size_t ValetParking::checkIn()
// on success return stall# (index-1 base), on failure return 0.
{

    // ADD YOUR CODE HERE

}

size_t ValetParking::stallNumber( size_t ticket)
// return the stall number (index-1 base) in which the ticket number resides
{

    // ADD YOUR CODE HERE

}

bool ValetParking::checkOut( size_t stallnumber, size_t ticket) 
// Retrieve the ticket# from the stall and place the ticket in the checkout queue.
// On success return true.
{

    // ADD YOUR CODE HERE

}
