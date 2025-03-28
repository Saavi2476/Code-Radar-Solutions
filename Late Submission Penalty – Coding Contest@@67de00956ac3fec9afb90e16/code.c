#include <stdio.h>
int calculatePenalty(int subDay, int subMonth, int subYear, int dueDay, int dueMonth, int dueYear) {
    if (subYear > dueYear) {
        return 5000;  
    }
    if (subYear == dueYear) {
        if (subMonth > dueMonth) {
            return 500 * (subMonth - dueMonth);  
        }
        if (subMonth == dueMonth && subDay > dueDay) {
            return 20 * (subDay - dueDay);  
        }
    }
    return 0;  
}
