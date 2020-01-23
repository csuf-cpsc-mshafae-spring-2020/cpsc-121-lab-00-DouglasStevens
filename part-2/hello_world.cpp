//Douglas Stevens CPSC 121-03 amazingcheetos@csu.fullerton.edu
//hello_world.cpp
//Say Hello to anything you want however many times you want.

#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  if (argc <= 2){
    cout << "Too few arguments.\n";
    return 1;
  }
  int n = stoi(argv[2]);
  for (int i = 0; i < n; i++){
    cout << "Hello " << argv[1] << endl;
  }
  return 0;
}
