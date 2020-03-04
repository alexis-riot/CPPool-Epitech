/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** Object
*/

#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include <string>
#include <iostream>

class Object {
	public:
		Object(const std::string title);
		virtual ~Object();
		std::string getTitle() const;
		virtual bool wrapMeThat(Object *obj);

	protected:
        const std::string _title;
		bool _taken;
	private:
};

Object **MyUnitTests();
Object *MyUnitTests(Object **obj);
#endif /* !OBJECT_HPP_ */
