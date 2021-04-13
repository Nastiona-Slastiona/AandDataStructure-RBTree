#include <list>
#include <iostream>

using namespace std;

enum NodeColor{
    Red,
    Black
};

struct Node{
    int Data;
    NodeColor Color;
    Node* Left;
    Node* Right;
    Node* Parent;
};

Node* createNode(int data, Node* parent){
    Node* newNode = new Node;
    newNode->Data = data;
    newNode->Color = Red;
    newNode->Parent = parent;
    newNode->Left = newNode->Right = NULL;
    return newNode;
}

void TreeRotaite(){

}

class Tree{
    private:
    public:
        Node* Root;

    Tree(int data){
        Root->Color = Red;
        Root->Data = data;
        Root->Left = NULL;
        Root->Right = NULL; 
        Root->Parent = NULL;

    }

     void insertNode(int data){
         if(!NodeExist(data)){
             Node* temp = Root;
             while(temp){
                 if(data > temp->Data && temp->Right!=NULL){
                     temp = temp->Right;
                 }
                 else if(data > temp->Data && temp->Right==NULL){
                      Node* newNode = createNode(data,temp);
                      temp->Right = newNode;
                      /*if(temp->Color == newNode->Color){

                      }*/
                 }
                 else if(data < temp->Data && temp->Left!=NULL){
                     temp = temp->Left;
                 }
                 else if(data < temp->Data && temp->Left== NULL){
                     Node* newNode = createNode(data,temp);
                      temp->Right = newNode;
                      /*if(temp->Color == newNode->Color){

                      }*/
                 }
             }

         }
         else{
             cout << "The leaf with this data exists\n";
         }

    }   

     void deleteNode(int data){

    }

    bool NodeExist(int data){
        if(Root){
            Node* Find = Root;
            while(Find){
                if(Find->Data > data){
                    Find = Find->Left;
                }
                else if(Find->Data < data){
                    Find = Find->Right;
                }
                else if(Find->Data == data){
                    return true;
                }
            }
            return false;
        }
        else{

        }

    }

    Node* findNext(int data){
        Node* output;
        if(NodeExist(data)){
        
        }
    }

    Node* findPrev(int nodeData){

    }

    Node* findLess(int nodeData){

    }

    Node* findMax(int nodeData){
        
    }
};