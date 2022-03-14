#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sId, char n[]) {
  studentId = sId;
  strcpy (name,n);
}

// Display StudentId and Name
void Student::display() {
  cout<< "id is"<< studentId<< "\n";
  cout<< name<< "\n";
}
