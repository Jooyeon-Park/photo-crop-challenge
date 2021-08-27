#include <iostream>
#include <random>

using namespace std;
int getWidth(){
    int width = 0;
    cout << "Enter the Image Width\n";
    cin >> width;
    return width;
}
int getHeight(){
    int height = 0;
    cout << "Enter the Image Height\n";
    cin >> height;

    return height;
}
int ratio(){
    int ratioType =0;
    ratioType = rand() % 2;
    return ratioType;
}


int main() {
    int width = getWidth();
    int height = getHeight();

    //type 0 = 1:1
    //type 1 = 3:4
    //type 2 = 9:16
    //Select the ratio type
    int ratio = 0;
    ratio = ratio();
    //Select the scale (40%, 50% or 60% of the given width)


    //Select the
    //Select the top left vertex


    return 0;
}
