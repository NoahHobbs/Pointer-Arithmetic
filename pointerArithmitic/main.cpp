//
//  main.cpp
//  pointerArithmitic
//
//  Created by Noah Hobbs on 10/13/20.
//  Copyright © 2020 Noah Hobbs. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    //One way of doing it
    double scores[5] = {55, 68, 98, 56, 84};
    double first = *(scores + 2);
    double last = *(scores + 4);
    double middle = *(scores + 3);
    double sum = first + last + middle;
    cout << "First: " << first << " Last: " << last;
    cout << " Middle: " << middle << "\nSum: " << sum <<endl;
    //another way to do it that I read about in class
    double *f = scores;
    double *l = scores;
    double *m = scores;
    double s;
    f+=2;
    m+=3;
    l+=4;
    s = *f + *m + *l;
    cout <<"First: " << *f << " Last: " << *l;
    cout << " Middle: " << *m << endl;
    cout << "Sum: "<< s << endl;
    
    return 0;
}
