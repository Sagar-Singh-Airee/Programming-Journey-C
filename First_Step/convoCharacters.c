/*In this program we will put together everything form chapter 4 "Understanding printf() and how strings are used!"*/
#include <stdio.h>
int main(){
    printf("Qunatity\tCost\tTotal\n"); //Just to visualy represent a table with some "jugad"
    printf("%d\t\t$%.2f\t$%.2f \n", 3, 9.99, 29.97); //Here if we notice we are needed 2 tabs which is because of the elongated word "Quantity!" otherwise one would be able to fit in.
    printf("Too many spaces    \b\b\b\b can be fixed with this \n"); //here \b works as backspace therefore it will erase the empaty spaces we wrote.
    printf("%.1f%c of the books are actually good \n", 12.500, '%'); // this is to tell that we can write upto int value of 6 to get the decimal value form %f. for example if we want one decimal value then %1f or %.1f is done.

    return 0 ;
}
