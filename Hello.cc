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

void sayHello() {
  std::cout
    << "Saying Hello World in different Languages\n\n"
    << "a. English: Hello World!\n"
    << "b. French: Bonjour le monde\n"
    << "c. German: Hallo Wereld\n"
    << std::endl;
}

int main()
{
	sayHello();
	return 0;
}

#endif