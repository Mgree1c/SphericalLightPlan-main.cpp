#include<string>
#include<iostream>
using namespace std;
class GroceryListNode{
  public:
     GroceryListNode(GroceryListNode* p, string n, int c)
     :parent{p}, name{n}, cost{c}
     {
     childL=nullptr;
     childR=nullptr;
     }
GroceryListNode* parent;
string name;
int cost;
GroceryListNode* childL;
GroceryListNode* childR;
};
GroceryListNode* groceryTree;
void in_order_tree_walk(GroceryListNode* root){
  if (root != nullptr){
     in_order_tree_walk(root->childL);
     cout << root->name<<'\n';
     in_order_tree_walk(root->childR);
  }//close if
}
int main(){
  GroceryListNode* node = new GroceryListNode(nullptr,  "Face Soap ", 5);
  groceryTree = node;//temporary storage
  GroceryListNode* tempParent = groceryTree;
 //as of this line, node points to face soap, grocerytree //points to face soap
  node = new GroceryListNode(groceryTree, " Bananas ", 1);
  tempParent->childL = node;
  // the above line tells the computer to assign the left child of temp parent as node( )
  node = new GroceryListNode(groceryTree, " Red Delicious Apples ", 3);
  tempParent->childL = node;
  tempParent = node;
  
  node = new GroceryListNode(tempParent, " Detergent ", 8);
  tempParent->childR = node;
  tempParent = node;
  
  node = new GroceryListNode(tempParent, " Mandarins ", 3);
  tempParent->childR = node;
  tempParent = node;
  
  node = new GroceryListNode(tempParent, " Mangos ", 4);
  tempParent->childR = node;
  tempParent = node;
 
  node = new GroceryListNode(tempParent, " Pineapples ", 4);
  tempParent->childR = node;
  tempParent = node;
  
  node = new GroceryListNode(tempParent, " Shampoo ", 3);
  tempParent->childL = node;
  tempParent = node;
  
  node = new GroceryListNode(tempParent, " Grapes ", 5);
  tempParent->childR = node;
  tempParent = node;
  node = new GroceryListNode(tempParent, " Juice ", 4);

  tempParent->childR = node;
  tempParent = node;
  node = new GroceryListNode(tempParent, " Milk ", 2);

  tempParent->childL = node;
  tempParent = node;
  node = new GroceryListNode(tempParent, " Icecream ", 5);

  tempParent ->childL = node;
in_order_tree_walk(groceryTree);
}


