/*
** EPITECH PROJECT, 2020
** test_wrap.cpp
** File description:
** test_wrap
*/

#include "../Object.hpp"
#include "../Wrap.hpp"
#include "../Box.hpp"
#include "../GiftPaper.hpp"
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

Test(test_wrapping_good, read_all_content)
{
    OSRedirector oss(std::cout);

    Object **obj = MyUnitTests();
    obj[1]->wrapMeThat(obj[0]);
    cr_assert_eq(oss.getContent(), "tuuuut tuuut tuut\n");
}

Test(test_wrapping_bad, read_all_content)
{
    OSRedirector oss(std::cerr);

    Object **obj = MyUnitTests();
    obj[1]->wrapMeThat(nullptr);
    cr_assert_eq(oss.getContent(), "The sent object is NULL or the wrapper is already used or the box is closed\n");
}