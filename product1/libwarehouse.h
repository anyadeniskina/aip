#pragma once
#include"libproduct.h"
enum cat { center, east, west };

class Warehouse {
public:
    Product* list;
    char id[4];
    cat category;
    double lat_to;
    double long_to;
    int max;
    int size;
    int index;
    Warehouse();
    Warehouse(Product* list, char id[4], cat category, double lat_to, double long_to, int max, int quantity);
    Warehouse(const Warehouse& w);
    ~Warehouse();
    double distance(const Product& p);
    void menu(int& opc);
    void setsize(int n);
    int getsize();
    void insert_product();
    int search_by_name();
    void delete_product();
    void print_products();
    
};