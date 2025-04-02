#pragma once
class Product{
public:
    char code[13];
    char name[50];
    int price;
    int quantity;
    double lat_from;
    double long_from;
    
    Product();
    Product(char code[13],char name[50], int price, int quantity, double lat_from, double long_from);
    Product(const Product& other);
    ~Product();
    void setCode(char code[13]);
    void setName(char name[50]);
    void setPrice(int price);
    void setQuantity(int quantity);
    void setLatFrom(double lat_from);
    void setLongFrom(double long_from);
    const char* getCode();
    const char* getName();
    int getPrice();
    int getQuantity();
    double getLatFrom();
    double getLongFrom();
    void printParameters();
};