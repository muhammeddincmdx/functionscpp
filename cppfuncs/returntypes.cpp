int f1() {} // error except a return value
void f2() {} // ok.

int f3() { return 1;} //ok
void f4() { return 1; } //error not expect a return value.

int f5() { return; } // error
void f6() { return; } //ok