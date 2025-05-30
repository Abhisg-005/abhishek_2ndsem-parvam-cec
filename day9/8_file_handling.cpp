#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // creating object for writing file
    ofstream fout;

    // opeing fiel in write mode
    fout.open("8_file_handling.txt"); // it will open the file in write mode. if file is not present in the "cwd" it will craete a new file with specified name.

    // insert some data.
    fout << "English Alphabets\n";
    fout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n";
    

    // close the file.
    fout.close();
    cout << "File is closed" << endl;
}