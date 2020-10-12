#include <iostream>
#include <vector>

using namespace std;
//create an instance for hotel room
class HotelRoom {
public:
    HotelRoom(int bedrooms, int bathrooms) 
    : bedrooms_(bedrooms), bathrooms_(bathrooms) {}
//function to calculate the price of Hotel Room
    virtual int get_price() {
        return 50*bedrooms_ + 100*bathrooms_;
    }
// initialize the variable for bedroooms and bathrooms
private:
    int bedrooms_;
    int bathrooms_;
};
//create an instance for hotel apartment
class HotelApartment : public HotelRoom {
public:
    HotelApartment(int bedrooms, int bathrooms) 
    : HotelRoom(bedrooms, bathrooms) {}

    int get_price() {
        return HotelRoom::get_price() + 100;
    }
};

int main() {
    int n;
    cin >> n;
//loop for inputing room quantities 
    vector<HotelRoom*> rooms;
    for (int i = 0; i < n; ++i) {
        string room_type;
        int bedrooms;
        int bathrooms;
        cin >> room_type >> bedrooms >> bathrooms;
        if (room_type == "standard") {
            rooms.push_back(new HotelRoom(bedrooms, bathrooms));
        } else {
            rooms.push_back(new HotelApartment(bedrooms, bathrooms));
        }
    }

    int total_profit = 0;
//loop to sum the total profit 
    for (auto room : rooms) {
        total_profit += room->get_price();
    }
    cout << total_profit << endl;
//loop for deleting room
    for (auto room : rooms) {
        delete room;
    }
    rooms.clear();

    return 0;
}