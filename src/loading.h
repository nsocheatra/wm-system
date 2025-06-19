/* test program for the progressbar class
 * 
 * Author: Luigi Pertoldi
 * Created: 9 dic 2016
 *
 * Compile: c++ -I. -o test test.cc
 * Usage: ./test
 *
 */

#include <iostream>
#include <thread>
#include <chrono>
#include "loadingbar.hpp"
using namespace std;

void loading(){
    int N = 10000;

    cout<<"\033[33m..............please wait while loading.............\033[0m"<<endl;
    progressbar bar(N);

    N = 5000;
    bar.set_niter(N);
    bar.reset();
    bar.set_todo_char(" ");
    bar.set_done_char("\033[33m█\033[0m");
    bar.set_opening_bracket_char("[");
    bar.set_closing_bracket_char("]");
    for ( int i = 0; i < N; i++ ) {

        bar.update();

        // the program...
        this_thread::sleep_for( chrono::microseconds(500) );
    }
    cerr << endl;
}
