#include <cmath>
#include <iostream>
/*
 int centuryFromYear(int year) {
    if (year % 100 == 0) {
        return year / 100;
     }
     else {
        return (year / 100) + 1;
    }
*/

// Method 2: Using ceil (Most efficient)
int centuryFromYear(int year) {
    return ceil(year / 100.0);
}

/* Method 3: Using Ternary Operator
return (year % 100 == 0) ? (year / 100) : (year / 100 + 1);
*/
}
