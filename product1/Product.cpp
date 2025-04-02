#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include "libproduct.h"
using namespace std;

Product::Product() {
    srand(static_cast<unsigned int>(time(nullptr)));
    strncpy_s(this->code, "460", sizeof(code));
    int random_number = (rand() % 9 + 1) * 1000;
    char random_number_str[5];
    snprintf(random_number_str, sizeof(random_number_str), "%04d", random_number);
    strncat_s(this->code, random_number_str, sizeof(code) - strlen(code) - 1);
    int random_six_digit = rand() % 1000000;
    char random_six_digit_str[7];
    snprintf(random_six_digit_str, sizeof(random_six_digit_str), "%06d", random_six_digit);
    strncat_s(this->code, random_six_digit_str, sizeof(code) - strlen(code) - 1);
    this->name[0] = '\0';
    this->price = 0;
    this->quantity = 0;
    this->lat_from = 41.0 + static_cast<double>(rand()) / (static_cast<double>(RAND_MAX / (82.0 - 41.0)));
    this->long_from = 19.0 + static_cast<double>(rand()) / (static_cast<double>(RAND_MAX / (169.0 - 19.0)));
}

Product::Product(char code[13],char name[50], int price, int quantity, double lat_from, double long_from) {
    strncpy_s(this->code, code, sizeof(code)-1);
    strncpy_s(this->name, name, sizeof(name)-1);
    this->price = price;
    this->quantity = quantity;
    this->lat_from = lat_from;
    this->long_from = long_from;
}

Product::Product(const Product& other) {
    strcpy_s(this->code, other.code);
    strcpy_s(this->name, other.name);
    this->price = other.price;
    this->quantity = other.quantity;
    this->lat_from = other.lat_from;
    this->long_from = other.long_from;
}
Product::~Product() {};

// Setters
void Product::setCode(char code[13]) {
    strncpy_s(this->code, code, sizeof(code) - 1);
}

void Product::setName(char name[50]) {
    strncpy_s(this->name, name, sizeof(name) - 1);
}

void Product::setPrice(int price) {
    this->price = price;
}

void Product::setQuantity(int quantity) {
    this->quantity = quantity;
}

void Product::setLatFrom(double lat_from) {
    this->lat_from = lat_from;
}

void Product::setLongFrom(double long_from) {
    this->long_from = long_from;
}

// getters
const char* Product::getCode() {
    return this->code;
}

const char* Product::getName() {
    return this->name;
}

int Product::getPrice() {
    return this->price;
}
int Product::getQuantity() {
    return this->quantity;
}

double Product::getLatFrom() {
    return this->lat_from;
}
double Product::getLongFrom() {
    return this->long_from;
}
void Product::printParameters() {
    cout << setw(10) << this->code <<
        setw(10) << this->name <<
        setw(10) << this->price <<
        setw(10) << this->quantity <<
        setw(10) << this->lat_from <<
        setw(10) << this->long_from << endl;
}

