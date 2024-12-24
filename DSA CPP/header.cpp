#ifndef INVENTORYSYSTEM_H
#define INVENTORYSYSTEM_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Forward declaration of InventoryItem
class InventoryItem;

// InventorySystem class definition
class InventorySystem {
public:
    InventorySystem(int capacity); // Constructor with max capacity
    void addItem(const InventoryItem& item);
    void removeItem(const string& itemName);
    InventoryItem findItem(const string& itemName) const;
    void displayInventory() const;
    int getTotalItems() const;

private:
    vector<InventoryItem> items;
    int maxCapacity; // Maximum capacity of the inventory
};

// InventoryItem class definition
class InventoryItem {
public:
    InventoryItem(const string& name, const string& type, int quantity);
    
    // Getter methods
    string getName() const;
    string getType() const;
    int getQuantity() const;

    // Setter methods
    void setQuantity(int quantity);

private:
    string itemName;  // Name of the item
    string itemType;  // Type of the item
    int itemQuantity;  // Quantity of the item
};

// Player class definition
class Player {
public:
    Player(const string& playerName);

    // Inventory actions
    void addItemToInventory(const InventoryItem& item);
    void removeItemFromInventory(const string& itemName);
    void viewInventory() const;

    // Getter
    string getName() const;

private:
    string name; // Player's name
    InventorySystem inventory; // Player's inventory
};

#endif // INVENTORYSYSTEM_H
