// #include "exercise1.h"
// #include "exercise2.h"
// #include "exercise3.h"
// #include "exercise4.h"
// #include "exercise5.h"
// #include "exercise6.h"
// #include "exercise7.h"
// #include "exercise8.h"
// #include "exercise9.h"
#include "solution9.h"

int main()
{
#if defined(EXERCISE1) || defined(SOLUTION1)
	exercise1();
#endif // EXERCISE1
#if defined(EXERCISE2) || defined(SOLUTION2)
	exercise2();
#endif // EXERCISE2
#if defined(EXERCISE3) || defined(SOLUTION3)
	exercise3();
#endif // EXERCISE3
#if defined(EXERCISE4) || defined(SOLUTION4)
	exercise4();
#endif // EXERCISE4
#if defined(EXERCISE5) || defined(SOLUTION5)
	exercise5();
#endif // EXERCISE5
#if defined(EXERCISE6) || defined(SOLUTION6)
	exercise6();
#endif // EXERCISE6
#if defined(EXERCISE7) || defined(SOLUTION7)
	exercise7();
#endif // EXERCISE7
#if defined(EXERCISE8) || defined(SOLUTION8)
	exercise8();
#endif // EXERCISE8
#if defined(EXERCISE9) || defined(SOLUTION9)
	exercise9();
#endif // EXERCISE9
}
