#include <chrono>
#include <iostream>
#include <random>

#include "BTree.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
  char option;
  do {
    system("cls");
    int numberOfIterations, num, i = 1;
    std::random_device generator;
    std::uniform_int_distribution<int> distribution(0, 100000);

    BTree<int> myTree;

//     cout << "Enter the number of iterations: ";
//     cin >> numberOfIterations;
//     cin.ignore();
//     while (i != numberOfIterations) {
//       num = distribution(generator);
//       cout << "Inserting: " << num << endl;
//       myTree.insertData(num);
//       i++;
//     }
     // while(i <= 10){
     //      myTree.insertData(i);
     //      i++;
     // }

     num = 31;
     myTree.insertData(num);
     num = 98;
     myTree.insertData(num);
     num = 24;
     myTree.insertData(num);
     num = 37;
     myTree.insertData(num);
     num = 15;
     myTree.insertData(num);
     num = 79;
     myTree.insertData(num);
     num = 63;
     myTree.insertData(num);
     num = 33;
     myTree.insertData(num);
     num = 53;
     myTree.insertData(num);
     // num = 6;
     // myTree.insertData(num);

    cout << "\n******PREORDER********\n";
    myTree.parsePreOrder();

    cout << "\n\n\n******INORDER********\n";
    myTree.parseInOrder();

    cout << "\n\n\n******POSTORDER********\n";
    myTree.parsePostOrder();

    cout << "\n\nThe highest number of the tree is: "
         << myTree.retrieve(myTree.getHighest()) << endl;
    cout << "The lowest number of the tree is: "
         << myTree.retrieve(myTree.getLowest()) << endl;
    cout << "The height of the tree is: " << myTree.getHeight() << endl;
    cout << "The left height of the tree is: " << myTree.getLeftHeight()
         << endl;
    cout << "The right height of the tree is: " << myTree.getRightHeight()
         << endl
         << endl;

    cout << "\nDo you want to try again? [y/n]: ";
    cin >> option;
    cin.ignore();
    option = toupper(option);
  } while (option != 'N');
}
