/**
 * Copyright (c) 2017-present, KindoLabs.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#ifndef HELLO_WORLD
#define HELLO_WORLD

#include <iostream>

/*! Create a class 'Hello'
 *	Declare class type 'public'
 *	'void' to return 0 value for 'sayHello' method
*/
class Hello 
{
	public:
		void sayHello() 
		{
		  std::cout
		    << "Saying Hello World in different Languages\n\n"
		    << "a. English: Hello World!\n"
		    << "b. French: Bonjour le monde\n"
		    << "c. German: Hallo Welt\n"
		    << std::endl;
		}
};

/* Initialize class 'Hello'
 * Declare object 'speak'
 * call object's method 'sayHello'
*/
int main()
{
	Hello speak;
	speak.sayHello();
	return 0;
}

#endif