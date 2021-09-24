#include <iostream>
using namespace std;

int main() {

  // allocate 5 int memory blocks
  int* ptr = (int*) malloc(5 * sizeof(int));


  // check if memory has been allocated successfully
  if (!ptr) {
    cout << "Memory Allocation Failed";
    exit(1);
  }

  cout << "Initializing values..." << endl << endl;

  for (int i = 0; i < 5; i++) {
    ptr[i] = i * 2 + 1;
  }
  cout << "Initialized values" << endl;

  // print the values in allocated memories
  for (int i = 0; i < 5; i++) {

    // ptr[i] and *(ptr+i) can be used interchangeably
    cout << *(ptr + i) << endl;
   }
  
  free (ptr);
}
