#include <iostream>
#include "Bank.h"
#include "Repebank.h"
#include "Byline.h"
#include "Lakeside.h"
#include <fstream>
#include <string>
#include <vector>



int main() {
    // Create a text string, which is used to output the text file
    string myText;
    vector<string> byline_data;

    // Read from the text file
    ifstream MyReadFile("C:\\Users\\ncamp\\CLionProjects\\Portfolio\\byline_html.txt");

    while (getline (MyReadFile, myText)) {
        byline_data.push_back(myText);
    }

    // Close the file
    MyReadFile.close();

    int pos;
    for (int i = 0; i < byline_data.size(); i++) {
        string target = byline_data[i];
        int temp_pos = target.find("Premium");
        if (temp_pos != -1) {
            pos = temp_pos;
        }
    }

    cout << pos;
    cout << byline_data[pos];

//    int data = byline_data[0].find("CD");
//    if (data == -1){
//        cout << "No CD";
//    }
//    else {
//        cout << "CD";
//    }


//    cout << line.substr(144, 5);

//    vector<string> line2;
//    for (int i = 0; i < line.size(); i++) {kmkjkkmlkllk
//        char slice1;
//        if (line == ">") {
//            slice1 = line[i];
//        }
//        for (int j = 0; j < line.size(); j++) {
//
//        }
//
//
//    }


    return 0;

}
