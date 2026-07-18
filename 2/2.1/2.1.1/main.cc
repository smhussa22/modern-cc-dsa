#include <iostream>
#include <vector>

int main()
{

    // create an empty std::vector
    std::vector<int> integers {};
    
    // insert 3 elements into the vector with push_back
    std::cout << "The vector after using push_back three times: ";
    for (auto i { 0uz }; i < 3; ++i)
    {

        integers.push_back(i + 1); // 1 2 3
        std::cout << integers.at(i) << ' ';

    }
    std::cout << '\n';

    // use emplace back twice
    integers.emplace_back(4);
    integers.emplace_back(5);

    std::cout << "The vector after using emplace_back two times: ";
    for (const auto& value : integers)
    {

        std::cout << value << ' ';
        
    }
    std::cout << '\n';

    // use insert to place an element 8 at the third (1 + 2) position
    std::cout << "The vector after using insert on the third position: ";
    integers.insert(integers.begin() + 2, 8);

    for (const auto& value : integers)
    {

        std::cout << value << ' ';
        
    }
    std::cout << '\n';

    return 0;

}