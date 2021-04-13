#include <iostream>
#include "Tree.h"
using namespace std;

void PrintTree(Node* start, int l){
    int i;
    if(start != NULL){
        PrintTree(start->Right,l+1);
        for(i=1;i<=l;i++) cout << " ";
        cout << start->Data << endl;
        PrintTree(start->Left, l+1);

    }


}


int main(){
    Tree MyTree(32);
    MyTree.insertNode(16);
    PrintTree(MyTree.Root,1);

    return 0;
}