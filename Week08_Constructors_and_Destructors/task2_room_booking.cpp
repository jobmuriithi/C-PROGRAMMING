// Week 8 - Task 2: Hotel Room Booking System (Constructor & Destructor)
#include <iostream>
#include <string>
using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int daysBooked;

public:
    // Constructor: initializes booking details
    RoomBooking(const string &guest, int room, int days)
        : guestName(guest), roomNumber(room), daysBooked(days) {
        cout << "Room booking confirmed\n";
    }

    void displayBooking() const {
        cout << "\n--- Booking Details ---\n";
        cout << "Guest Name  : " << guestName << "\n";
        cout << "Room Number : " << roomNumber << "\n";
        cout << "Days Booked : " << daysBooked << "\n";
    }

    // Destructor: cleanup message
    ~RoomBooking() {
        cout << "Booking ended, room released\n";
    }
};

int main() {
    RoomBooking booking("Peter Kamau", 204, 3);
    booking.displayBooking();
    return 0;  // destructor is called here
}
