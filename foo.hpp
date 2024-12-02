#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <algorithm>

std::vector< char > foo(std::list< Human >& people)
{
        std::vector<char> result;
    result.reserve(people.size());


    for (auto& human : people) {
        human.birthday();

        result.push_back(human.isMonster() ? 'n' : 'y');
    }


    std::reverse(result.begin(), result.end());

    return result;
}
