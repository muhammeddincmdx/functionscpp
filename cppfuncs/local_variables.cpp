void f(){

    int local_variable = 50;
}

f(); // program will execute this then initialize the local variable


void copyFunc(){

    float var1 = 5.5F;
    float var2 = 1.5F;
}

copyFunc();  // first call var1, var2 are created.
copyFunc();  // second call, new var1, var2 created.


void staticLocal(){
    static int counter = 0;
    counter++;
}

staticLocal(); // access counter, counter ==1
staticLocal(); // access same counter, counter ==2