/* hotel.h--符号常量和hotel.c中所有函数的原型 */

#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.
#define DISCOUNT 0.95
#define STARS "*****************************"

int menu(void);
int getnights(void);
void showprice(double rate, int nights);