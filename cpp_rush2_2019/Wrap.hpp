/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** Wrap
*/

#ifndef WRAP_HPP_
#define WRAP_HPP_

#include "Object.hpp"

class Wrap : public Object{
	public:
		Wrap(const std::string name);
		~Wrap();
		virtual bool wrapMeThat(Object *obj);

	protected:
		Object *_obj;
	private:
};

#endif /* !WRAP_HPP_ */
