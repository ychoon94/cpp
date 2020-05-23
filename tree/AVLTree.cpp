#include<iostream>
#include<limits>

class Node {
public:
int data;
Node * left;
Node * right;
int height;
};

//utility function to get maximum of two integer
int max(int a, int b){
  //if a>b then a, else b
  	return (a > b)? a : b;
}

int height(Node * N){
        if (N == NULL) {
                return 0;
        }
        return N -> height;
}

Node * newNode(int data){
        Node *node = new Node();
        node->data = data;
        node->left = NULL;
        node->right = NULL;
        node->height = 1;

        return(node);
}

//right rotatio with y
Node * rightRotation(Node * y){
        Node * x = y->left;
        Node * temp = x->right;

        //perform rightRotation
        x->right = y;
        y->left = temp;

        //update heights
        y->height = max(height(y->left),
                        height(y->right)) + 1;
        x->height = max(height(x->left),
                        height(x->right)) + 1;

        //return new root;
        return x;
}

//left roate with x
Node * leftRotation(Node * x){
        Node * y = x->right;
        Node * temp = y->left;

        //perform leftRotation
        y->left = x;
        x->right = temp;

        //update heights
        x->height = max(height(x->left),
                        height(x->right)) + 1;
        y->height = max(height(y->left),
                        height(y->right)) + 1;

        //return new root
        return y;
}

//get balance factor of node N
int getBalance(Node * N){
        if (N == NULL) {
                return 0;
        }
        return height(N->left) - height(N->right);
}

//insert Node
Node * insert(Node * node, int data){
        if (node == NULL) {
                return (newNode(data));
        }

        //perform normal insertion
        //if data < root, insert left
        if (data < node->data) {
                node->left = insert(node->left, data);
        }
        //data > root, insert left
        else if(data > node->data) {
                node->right = insert(node->right, data);
        }
        //tree does not allow same data input twice
        else {
                return node;
        }

        //update balance factor of each node
        //if not balance, then balance the tree
        node->height = max(height(node->left),
                           height(node->right)) + 1;

        //get balance of new inserted node
        int balance = getBalance(node);

        //if unbalanced, perform condition checking
        //see it applies to which 4 cases
        //then perform rotation
        if (balance > 1 && data < node->left->data) {
                return rightRotation(node);
        }
        else if(balance > 1 && data > node->left->data){
                node->left = leftRotation(node->left);
                return rightRotation(node);
        }

        if (balance < -1 && data > node->right->data) {
                return leftRotation(node);
        }
        else if (balance < -1 && data < node->right->data){
                node->right = rightRotation(node->right);
                return leftRotation(node);
        }

        return node;
}

//move to the lowest leftmost leaf
Node * lowestValueNode(Node * node){
  Node * current = node;

  //loop to the most lowest left leaf
  while (current -> left != NULL){
    current = current -> left;
  }

  return current;
}

Node * deleteNode(Node * root, int data){
  //perform BST deletion
  if (root == NULL){
    return root;
  }

  //check data if smaller than root, then go left
  else if (data < root -> data){
    root -> left = deleteNode(root -> left, data);
  }

  //check data if larger than root, then go right
  else if (data > root -> data){
    root -> right = deleteNode(root -> right, data);
  }

  //data = root data, so delete root
  else {
    //check if root has no child or 1 child
    if ((root -> left == NULL) || (root -> right == NULL)){
      //if left child exist, then left child is taken
      //else right child is taken
      Node * temp = root -> left ?
                    root -> left :
                    root -> right;

      //no child
      if (temp == NULL){
        temp = root;
        root = NULL;
        std::cout << "Delete operation success" << "\n";
      }
      //one child case
      else{
        //copy the content of the child to temp
        *root  = *temp;
        std::cout << "Delete operation success" << "\n";
      }
      //dealloc this memory
      free(temp);
    }
    //root has 2 children
    else{
      //Replace the node with its successor,
      //the left most node of its right subtree
      Node * temp = lowestValueNode(root -> right);

      //attach it’s replacement node to it’s parent and subtrees.
      root -> data = temp -> data;
      std::cout << "Delete operation success" << "\n";

      //delete the replaement node
      root -> right = deleteNode(root -> right, temp -> data);
    }
  }

  //check again if tree has only one node
  if (root == NULL){
    return root;
  }

  //update height of the current node
  root -> height = max(height(root -> left),
                    height(root -> right)) + 1;

  //perform balancing
  int balance = getBalance(root);

  //if unbalanced, perform condition checking
  //see it applies to which 4 cases
  //then perform rotation
  if (balance > 1 && getBalance(root -> left) >= 0) {
          return rightRotation(root);
  }
  else if(balance > 1 && getBalance(root -> left) < 0){
          root->left = leftRotation(root->left);
          return rightRotation(root);
  }

  if (balance < -1 && getBalance(root -> right) <= 0) {
          return leftRotation(root);
  }
  else if (balance < -1 && getBalance(root -> right) > 0){
          root->right = rightRotation(root->right);
          return leftRotation(root);
  }

  return root;
}

//search function
Node * search(Node* root, int data)
{
    // root is null or data is in root
    if (root == NULL || root->data == data)
       return root;

    // data > root
    if (root->data < data)
       return search(root->right, data);

    //data < root
    return search(root->left, data);
}

//print out inOder
void inOrder (Node * node){
        if (node != NULL) {
                inOrder(node->left);
                std::cout << node->data << "\t";
                inOrder(node->right);
        }

}

void preOrder (Node * node){
        if(node != NULL) {
                std::cout << node->data << "\t";
                preOrder(node->left);
                preOrder(node->right);
        }
}

void postOrder (Node * node){
  if (node != NULL){
    postOrder(node -> left);
    postOrder(node -> right);
    std::cout << node -> data << "\t";
  }
}

int main(){
        Node *root = NULL;

        int number,choice;

        /* Constructing tree given in
           the above figure */
        while (1){
          std::cout << "press 1 to perform insertion" << "\n";
          std::cout << "press 2 to perform deletion" << "\n";
          std::cout << "press 3 to perform inorder traversal" << "\n";
          std::cout << "press 4 to perform preorder traversal" << "\n";
          std::cout << "press 5 to perform postOrder traversal" << "\n";
          std::cout << "press 6 to perform search operation" << "\n";
          std::cout << "press 7 to exit" << "\n";
          if(std::cin >> choice){
            switch (choice){
              case 1:
              std::cout << "to exit, enter any alphabet.\n";
              while (true){
                std::cout <<"insert number: ";
                if (std::cin >> number){
                  root = insert(root, number);
                  continue;
                }
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                break;
              }
              std::cout << '\n';
              break;

              case 2:
              std::cout << "to exit, enter any alphabet.\n";
              while (true){
                std::cout <<"insert number: ";
                if (std::cin >> number){
                  root = deleteNode(root, number);
                  continue;
                }
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                break;
              }
              break;

              case 3:
              std::cout << "In order traversal: \n";
              inOrder(root);
              std::cout << "\n\n";
              break;

              case 4:
              std::cout << "Preorder traversal: \n";
              preOrder(root);
              std::cout << "\n\n";
              break;

              case 5:
              std::cout << "Post order traversal: \n";
              postOrder(root);
              std::cout << "\n\n";
              break;

              case 6:
              std::cout <<"insert number to search: ";
              if (std::cin >> number){
                if (search(root, number)){
                  std::cout << "Number " << number << " exist in the tree.\n";
                }
                else{
                  std::cout << "Number " << number <<
                  " does not exist in the tree.\n";
                }
              }
              else {
                break;
              }


              std::cout << '\n';
              break;

              case 7:
              exit(1);
              break;

              default:
              std::cout << "Invalid input" << "\n";
            }
          }
          else{
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
          }
      }

        return 0;
}
