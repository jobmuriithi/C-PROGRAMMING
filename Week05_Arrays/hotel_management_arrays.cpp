// Week 5: Hotel Management System Using Arrays (1D, 2D and 3D)
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const int DAYS = 7;
const int BRANCHES = 3;
const int FLOORS = 5;
const int ROOMS = 10;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));  // seed random generator

    // ---------- 1D ARRAY: Weekly Revenue Tracker ----------
    double revenue[DAYS];
    const char *dayNames[DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday",
                                  "Friday", "Saturday", "Sunday"};
    double totalRevenue = 0;

    cout << "=== WEEKLY REVENUE TRACKER ===\n";
    for (int i = 0; i < DAYS; i++) {
        cout << "Enter revenue for " << dayNames[i] << " (KES): ";
        cin >> revenue[i];
        totalRevenue += revenue[i];
    }
    cout << fixed << setprecision(2);
    cout << "\nTotal weekly revenue : KES " << totalRevenue << "\n";
    cout << "Average daily revenue: KES " << totalRevenue / DAYS << "\n";

    // ---------- 2D ARRAY: Room Occupancy (one branch) ----------
    int occupancy[FLOORS][ROOMS];  // 1 = occupied, 0 = vacant

    // Simulate input with random 0/1 values
    for (int f = 0; f < FLOORS; f++)
        for (int r = 0; r < ROOMS; r++)
            occupancy[f][r] = rand() % 2;

    cout << "\n=== ROOM OCCUPANCY (ONE BRANCH) ===\n";
    cout << left << setw(10) << "Floor" << setw(12) << "Occupied" << setw(10) << "Vacant" << "\n";
    for (int f = 0; f < FLOORS; f++) {
        int occupied = 0;
        for (int r = 0; r < ROOMS; r++)
            occupied += occupancy[f][r];
        cout << left << setw(10) << (f + 1) << setw(12) << occupied
             << setw(10) << (ROOMS - occupied) << "\n";
    }

    // ---------- 3D ARRAY: Multiple Branches ----------
    int chain[BRANCHES][FLOORS][ROOMS];
    int totalOccupied = 0;

    for (int b = 0; b < BRANCHES; b++)
        for (int f = 0; f < FLOORS; f++)
            for (int r = 0; r < ROOMS; r++) {
                chain[b][f][r] = rand() % 2;
                totalOccupied += chain[b][f][r];
            }

    cout << "\n=== HOTEL CHAIN (" << BRANCHES << " BRANCHES) ===\n";
    cout << "Total rooms             : " << BRANCHES * FLOORS * ROOMS << "\n";
    cout << "Total occupied rooms    : " << totalOccupied << "\n";
    return 0;
}
