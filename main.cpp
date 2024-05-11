//add two numbers
#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
    Node(int _data) : data(_data), next(NULL) {}
};
int add(int a, int b)
{
  std::cout << "a : " << a;
  std::cout << "b : " << b;
	return (a + b);
}
int findLL(Node* head)
{
  Node* current = head;
  int length = 0;
  while(current != NULL)
  {
    length++;
    current = current -> next;
  }
  return length;
}
int main()
{
  // add two numbers
  int a = 5;
  int b = 10;
  int result = add(a,b);
  std::cout << result << std::endl;
  //

  // Length of linked list
  Node* n1 = new Node(5);
  Node* n2 = new Node(11);
  Node* n3 = new Node(2);
  Node* n4 = new Node(9);
  Node* n5 = new Node(3);
  n1 -> next = n2;
  n2 -> next = n3;
  n3 -> next = n4;
  n4 -> next = n5;

  int length = findLL(n1);
  std::cout << "Length of linked list is : " << length << std::endl;

  delete n1;
  delete n2;
  delete n3;
  delete n4;
  delete n5;

  //


  return 0;
}
