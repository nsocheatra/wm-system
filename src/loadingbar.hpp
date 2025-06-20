#ifndef __PROGRESSBAR_HPP
#define __PROGRESSBAR_HPP
#include <iostream>
#include <string>
#include <stdexcept>

class progressbar {

    public:
      // default destructor
      ~progressbar()                             = default;

      // delete everything else
      progressbar           (progressbar const&) = delete;
      progressbar& operator=(progressbar const&) = delete;
      progressbar           (progressbar&&)      = delete;
      progressbar& operator=(progressbar&&)      = delete;

      // default constructor, must call set_niter later
      inline progressbar();
      inline progressbar(int n, bool showbar=true);

      // reset bar to use it again
      inline void reset();
     // set number of loop iterations
      inline void set_niter(int iter);
      // chose your style
      inline void set_done_char(const std::string& sym) {done_char = sym;}
      inline void set_todo_char(const std::string& sym) {todo_char = sym;}
      inline void set_opening_bracket_char(const std::string& sym) {opening_bracket_char = sym;}
      inline void set_closing_bracket_char(const std::string& sym) {closing_bracket_char = sym;}
      // to show only the percentage
      inline void show_bar(bool flag = true) {do_show_bar = flag;}
      // main function
      inline void update();

    private:
      int progress;
      int n_cycles;
      int last_perc;
      bool do_show_bar;
      bool update_is_called;

      std::string done_char;
      std::string todo_char;
      std::string opening_bracket_char;
      std::string closing_bracket_char;
};

inline progressbar::progressbar() :
    progress(0),
    n_cycles(0),
    last_perc(0),
    do_show_bar(true),
    update_is_called(false),
    done_char("#"),
    todo_char(" "),
    opening_bracket_char("["),
    closing_bracket_char("]") {}

inline progressbar::progressbar(int n, bool showbar) :
    progress(0),
    n_cycles(n),
    last_perc(0),
    do_show_bar(showbar),
    update_is_called(false),
    done_char("#"),
    todo_char(" "),
    opening_bracket_char("["),
    closing_bracket_char("]") {}

inline void progressbar::reset() {
    progress = 0,
    update_is_called = false;
    last_perc = 0;
    return;
}

inline void progressbar::set_niter(int niter) {
    if (niter <= 0) throw std::invalid_argument(
        "progressbar::set_niter: number of iterations null or negative");
    n_cycles = niter;
    return;
}

inline void progressbar::update() {

    if (n_cycles == 0) throw std::runtime_error(
            "progressbar::update: number of cycles not set");

    if (!update_is_called) {
        if (do_show_bar == true) {
            std::cout << opening_bracket_char;
            for (int _ = 0; _ < 50; _++) std::cout << todo_char;
            std::cout << closing_bracket_char << " 0%";
        }
        else std::cout << "0%";
    }
    update_is_called = true;

    int perc = 0;

    // compute percentage, if did not change, do nothing and return
    perc = progress*100./(n_cycles-1);
    if (perc < last_perc) return;

    // update percentage each unit
    if (perc == last_perc + 1) {
        // erase the correct  number of characters
        if      (perc <= 10)                std::cout << "\b\b"   << perc << '%';
        else if (perc  > 10 and perc < 100) std::cout << "\b\b\b" << perc << '%';
        else if (perc == 100)               std::cout << "\b\b\b" << perc << '%';
    }
    if (do_show_bar == true) {
        // update bar every ten units
        if (perc % 2 == 0) {
            // erase closing bracket
            std::cout << std::string(closing_bracket_char.size(), '\b');
            // erase trailing percentage characters
            if      (perc  < 10)               std::cout << "\b\b\b";
            else if (perc >= 10 && perc < 100) std::cout << "\b\b\b\b";
            else if (perc == 100)              std::cout << "\b\b\b\b\b";

            // erase 'todo_char'
            for (int j = 0; j < 50-(perc-1)/2; ++j) {
                std::cout << std::string(todo_char.size(), '\b');
            }

            // add one additional 'done_char'
            if (perc == 0) std::cout << todo_char;
            else           std::cout << done_char;

            // refill with 'todo_char'
            for (int j = 0; j < 50-(perc-1)/2-1; ++j) std::cout << todo_char;

            // readd trailing percentage characters
            std::cout << closing_bracket_char << ' ' << perc << '%';
        }
    }
    last_perc = perc;
    ++progress;
    std::cout << std::flush;

    return;
}

#endif