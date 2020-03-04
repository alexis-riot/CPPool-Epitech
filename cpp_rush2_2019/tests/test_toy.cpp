/*
** EPITECH PROJECT, 2020
** test_toy.cpp
** File description:
** test_toy
*/

#include "../Object.hpp"
#include "../Toy.hpp"
#include "../LittlePony.hpp"
#include "../Teddy.hpp"
#include <ostream>
#include <iostream>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

class OSRedirector {
    private:
        std::ostringstream _oss;
        std::streambuf *_backup;
        std::ostream &_c;


    public:
        OSRedirector(std::ostream &c) : _c(c) {
            _backup = _c.rdbuf();
            _c.rdbuf(_oss.rdbuf());
        }

        ~OSRedirector() {
            _c.rdbuf(_backup);
        }

        const std::string getContent() {
            _oss << std::flush;
            return _oss.str();
        }
};

Test(test_Teddy, read_all_content)
{
    OSRedirector oss(std::cout);

    Teddy *test = new Teddy("");
    test->isTaken();
    cr_assert_eq(oss.getContent(), "gra hu\n");
}

Test(test_LittlePony, read_all_content)
{
    OSRedirector oss(std::cout);

    LittlePony *test = new LittlePony("");
    test->isTaken();
    cr_assert_eq(oss.getContent(), "yo man\n");
}

Test(test_creation_LittlePony, read_all_content)
{
    OSRedirector oss(std::cout);

    LittlePony pony("pony");
    std::cout << pony.getTitle() << std::endl;
    cr_assert_eq(oss.getContent(), "pony\n");
}

Test(test_creation_Teddy, read_all_content)
{
    OSRedirector oss(std::cout);

    Teddy teddy("teddy");
    std::cout << teddy.getTitle() << std::endl;
    cr_assert_eq(oss.getContent(), "teddy\n");
}

Test(test_LittlePony_title, read_all_content)
{
    OSRedirector oss(std::cout);

    Object **obj = MyUnitTests();
    obj[0] = new LittlePony("happy pony");
    std::cout << obj[0]->getTitle() << std::endl;
    cr_assert_eq(oss.getContent(), "happy pony\n");
}

Test(test_Teddy_title, read_all_content)
{
    OSRedirector oss(std::cout);

    Object **obj = MyUnitTests();
    obj[0] = new Teddy("cuddles");
    std::cout << obj[0]->getTitle() << std::endl;
    cr_assert_eq(oss.getContent(), "cuddles\n");
}