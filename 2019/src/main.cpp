#include <iostream>

#include "problems/all.h"

std::array<aoc::problem, 25> problems {{
    {"2019", "01", "./inputs/01.txt", std::bind(d01::part_a, std::placeholders::_1), std::bind(d01::part_b, std::placeholders::_1) },
    {"2019", "02", "./inputs/02.txt", std::bind(d02::part_a, std::placeholders::_1), std::bind(d02::part_b, std::placeholders::_1) },
    {"2019", "03", "./inputs/03.txt", std::bind(d03::part_a, std::placeholders::_1), std::bind(d03::part_b, std::placeholders::_1) },
    {"2019", "04", "./inputs/04.txt", std::bind(d04::part_a, std::placeholders::_1), std::bind(d04::part_b, std::placeholders::_1) },
    {"2019", "05", "./inputs/05.txt", std::bind(d05::part_a, std::placeholders::_1), std::bind(d05::part_b, std::placeholders::_1) },
    {"2019", "06", "./inputs/06.txt", std::bind(d06::part_a, std::placeholders::_1), std::bind(d06::part_b, std::placeholders::_1) },
    {"2019", "07", "./inputs/07.txt", std::bind(d07::part_a, std::placeholders::_1), std::bind(d07::part_b, std::placeholders::_1) },
    {"2019", "08", "./inputs/08.txt", std::bind(d08::part_a, std::placeholders::_1), std::bind(d08::part_b, std::placeholders::_1) },
    {"2019", "09", "./inputs/09.txt", std::bind(d09::part_a, std::placeholders::_1), std::bind(d09::part_b, std::placeholders::_1) },
    {"2019", "10", "./inputs/10.txt", std::bind(d10::part_a, std::placeholders::_1), std::bind(d10::part_b, std::placeholders::_1) },
    {"2019", "11", "./inputs/11.txt", std::bind(d11::part_a, std::placeholders::_1), std::bind(d11::part_b, std::placeholders::_1) },
    {"2019", "12", "./inputs/12.txt", std::bind(d12::part_a, std::placeholders::_1), std::bind(d12::part_b, std::placeholders::_1) },
    {"2019", "13", "./inputs/13.txt", std::bind(d13::part_a, std::placeholders::_1), std::bind(d13::part_b, std::placeholders::_1) },
    {"2019", "14", "./inputs/14.txt", std::bind(d14::part_a, std::placeholders::_1), std::bind(d14::part_b, std::placeholders::_1) },
    {"2019", "15", "./inputs/15.txt", std::bind(d15::part_a, std::placeholders::_1), std::bind(d15::part_b, std::placeholders::_1) },
    {"2019", "16", "./inputs/16.txt", std::bind(d16::part_a, std::placeholders::_1), std::bind(d16::part_b, std::placeholders::_1) },
    {"2019", "17", "./inputs/17.txt", std::bind(d17::part_a, std::placeholders::_1), std::bind(d17::part_b, std::placeholders::_1) },
    {"2019", "18", "./inputs/18.txt", std::bind(d18::part_a, std::placeholders::_1), std::bind(d18::part_b, std::placeholders::_1) },
    {"2019", "19", "./inputs/19.txt", std::bind(d19::part_a, std::placeholders::_1), std::bind(d19::part_b, std::placeholders::_1) },
    {"2019", "20", "./inputs/20.txt", std::bind(d20::part_a, std::placeholders::_1), std::bind(d20::part_b, std::placeholders::_1) },
    {"2019", "21", "./inputs/21.txt", std::bind(d21::part_a, std::placeholders::_1), std::bind(d21::part_b, std::placeholders::_1) },
    {"2019", "22", "./inputs/22.txt", std::bind(d22::part_a, std::placeholders::_1), std::bind(d22::part_b, std::placeholders::_1) },
    {"2019", "23", "./inputs/23.txt", std::bind(d23::part_a, std::placeholders::_1), std::bind(d23::part_b, std::placeholders::_1) },
    {"2019", "24", "./inputs/24.txt", std::bind(d24::part_a, std::placeholders::_1), std::bind(d24::part_b, std::placeholders::_1) },
    {"2019", "25", "./inputs/25.txt", std::bind(d25::part_a, std::placeholders::_1), std::bind(d25::part_b, std::placeholders::_1) }
}};

int main(int argc, char* argv[]) {

    problems[1].execute_all();

    return 0;
}
