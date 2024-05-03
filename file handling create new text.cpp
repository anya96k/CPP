
#include <iostream>  

#include <fstream>   

int main() {
  
  std::ofstream outputFile("test.txt");  

  if (outputFile.is_open()) {  
 
    outputFile << "C++ is a high-level, general-purpose programming language created by Danish computer scientist Bjarne Stroustrup. \n";  
    outputFile << "First released in 1985 as an extension of the C programming language, it has since expanded significantly over time. \n";  
    outputFile << "Modern C++ currently has object-oriented, generic, and functional features, in addition to facilities for low-level memory manipulation.\n";  
    outputFile << "It is almost always implemented in a compiled language.\n";  
    outputFile << "Many vendors provide C++ compilers, including the Free Software Foundation, LLVM, Microsoft, Intel, Embarcadero, Oracle, and IBM.";  

    outputFile.close();  

    std::cout << "Text has been written to the file." << std::endl;  
  } else {
    std::cout << "Failed to create the file." << std::endl;  
  }

  return 0;  
}
